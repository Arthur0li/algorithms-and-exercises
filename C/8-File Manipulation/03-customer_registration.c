#include <stdio.h>
#include <string.h>

#define FILENAME "clients.dat"

/* single record structure (no arrays anywhere) */
struct client {
    char name[50];
    char email[50];
    char phone[20];
    char active; /* 1 = active, 0 = deleted */
};

/* helper to remove trailing newline from fgets */
static void chomp(char *s) {
    s[strcspn(s, "\n")] = '\0';
}

/* function prototypes - each menu option is a function and receives
   a pointer to the local struct client declared in main */
void addRecord(struct client *rec, const char *filename);
void listRecords(struct client *rec, const char *filename);
int findRecordByName(struct client *rec, const char *filename, const char *name, long *out_offset);
void modifyRecord(struct client *rec, const char *filename);
void deleteRecord(struct client *rec, const char *filename);

int main(void) {
    struct client record; /* the only data structure — local variable in main */
    int option;
    char choice;

    do {
        printf("Welcome to the clients registry (direct file) program!\n");
        printf("You will use a single local record buffer and file operations (fseek) to manage records.\n\n");

        do {
            printf("\nMenu:\n"
                   "1 - Add record\n"
                   "2 - List all records\n"
                   "3 - Search record by name\n"
                   "4 - Modify record\n"
                   "5 - Delete record\n"
                   "6 - Exit\n"
                   "Choose an option: ");
            if (scanf("%d", &option) != 1) { /* invalid input -> exit menu loop */
                option = 6;
                break;
            }
            getchar(); /* consume newline left by scanf */

            switch (option) {
                case 1:
                    addRecord(&record, FILENAME);
                    break;
                case 2:
                    listRecords(&record, FILENAME);
                    break;
                case 3: {
                    char searchName[50];
                    printf("Enter name to search: ");
                    if (fgets(searchName, sizeof searchName, stdin) == NULL) searchName[0] = '\0';
                    chomp(searchName);
                    long offset;
                    if (findRecordByName(&record, FILENAME, searchName, &offset)) {
                        printf("\nRecord found:\n");
                        printf("Name : %s\n", record.name);
                        printf("Email: %s\n", record.email);
                        printf("Phone: %s\n", record.phone);
                    } else {
                        printf("Record with name '%s' not found.\n", searchName);
                    }
                    break;
                }
                case 4:
                    modifyRecord(&record, FILENAME);
                    break;
                case 5:
                    deleteRecord(&record, FILENAME);
                    break;
                case 6:
                    printf("Exiting menu...\n");
                    break;
                default:
                    printf("Invalid option!\n");
            }
        } while (option != 6);

        /* ask whether to restart the whole program */
        do {
            printf("\nDo you want to restart the program? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y') {
                printf("\nRestarting the program...\n\n");
            } else if (choice == 'n' || choice == 'N') {
                printf("\nExiting the program...\n");
            } else {
                printf("\nInvalid input! Please enter 'y' or 'n'.\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    printf("Program finished.\n");
    return 0;
}

/* Append a new record directly to the file.
   Uses the struct pointer passed from main as a buffer. */
void addRecord(struct client *rec, const char *filename) {
    FILE *fp = fopen(filename, "ab");
    if (fp == NULL) {
        perror("Error opening file for append");
        return;
    }

    printf("\n--- Add Record ---\n");
    printf("Name: ");
    if (fgets(rec->name, sizeof rec->name, stdin) == NULL) rec->name[0] = '\0';
    chomp(rec->name);

    printf("Email: ");
    if (fgets(rec->email, sizeof rec->email, stdin) == NULL) rec->email[0] = '\0';
    chomp(rec->email);

    printf("Phone: ");
    if (fgets(rec->phone, sizeof rec->phone, stdin) == NULL) rec->phone[0] = '\0';
    chomp(rec->phone);

    rec->active = 1;
    if (fwrite(rec, sizeof *rec, 1, fp) != 1) {
        perror("Error writing record to file");
    } else {
        printf("Record added.\n");
    }
    fclose(fp);
}

/* List all active records by reading the file sequentially into the single buffer. */
void listRecords(struct client *rec, const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) {
        printf("No records found (file '%s' does not exist).\n", filename);
        return;
    }

    printf("\n--- All Records ---\n");
    int idx = 0;
    while (fread(rec, sizeof *rec, 1, fp) == 1) {
        idx++;
        if (rec->active) {
            printf("\nRecord #%d:\n", idx);
            printf("Name : %s\n", rec->name);
            printf("Email: %s\n", rec->email);
            printf("Phone: %s\n", rec->phone);
        }
    }

    if (idx == 0) {
        printf("(file is empty)\n");
    }
    fclose(fp);
}

/* Search for a record by name. If found, loads it into rec and sets out_offset to byte offset
   of the record in the file (so caller or other functions can fseek to it). Returns 1 if found. */
int findRecordByName(struct client *rec, const char *filename, const char *name, long *out_offset) {
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) return 0;

    long offset = 0;
    while (fread(rec, sizeof *rec, 1, fp) == 1) {
        if (rec->active && strcmp(rec->name, name) == 0) {
            if (out_offset) *out_offset = offset;
            fclose(fp);
            return 1;
        }
        offset += sizeof *rec;
    }

    fclose(fp);
    return 0;
}

/* Modify a record: search by name, if found prompt for new data and overwrite using fseek. */
void modifyRecord(struct client *rec, const char *filename) {
    char searchName[50];
    printf("Enter name of the record to modify: ");
    if (fgets(searchName, sizeof searchName, stdin) == NULL) searchName[0] = '\0';
    chomp(searchName);

    long offset;
    if (!findRecordByName(rec, filename, searchName, &offset)) {
        printf("Record with name '%s' not found.\n", searchName);
        return;
    }

    printf("\n--- Current Record ---\n");
    printf("Name : %s\n", rec->name);
    printf("Email: %s\n", rec->email);
    printf("Phone: %s\n", rec->phone);

    printf("\nEnter new data (leave blank to keep current value):\n");

    char buffer[100];

    printf("Name [%s]: ", rec->name);
    if (fgets(buffer, sizeof buffer, stdin) != NULL) {
        chomp(buffer);
        if (buffer[0] != '\0') strncpy(rec->name, buffer, sizeof rec->name);
    }

    printf("Email [%s]: ", rec->email);
    if (fgets(buffer, sizeof buffer, stdin) != NULL) {
        chomp(buffer);
        if (buffer[0] != '\0') strncpy(rec->email, buffer, sizeof rec->email);
    }

    printf("Phone [%s]: ", rec->phone);
    if (fgets(buffer, sizeof buffer, stdin) != NULL) {
        chomp(buffer);
        if (buffer[0] != '\0') strncpy(rec->phone, buffer, sizeof rec->phone);
    }

    /* ensure null-termination */
    rec->name[sizeof rec->name - 1] = '\0';
    rec->email[sizeof rec->email - 1] = '\0';
    rec->phone[sizeof rec->phone - 1] = '\0';
    rec->active = 1;

    FILE *fp = fopen(filename, "r+b");
    if (fp == NULL) {
        perror("Error opening file for update");
        return;
    }

    if (fseek(fp, offset, SEEK_SET) != 0) {
        perror("Error seeking to record position");
        fclose(fp);
        return;
    }
    if (fwrite(rec, sizeof *rec, 1, fp) != 1) {
        perror("Error writing updated record");
    } else {
        printf("Record updated.\n");
    }
    fclose(fp);
}

/* Mark a record as deleted by setting active=0 and overwriting the record in the file. */
void deleteRecord(struct client *rec, const char *filename) {
    char searchName[50];
    printf("Enter name of the record to delete: ");
    if (fgets(searchName, sizeof searchName, stdin) == NULL) searchName[0] = '\0';
    chomp(searchName);

    long offset;
    if (!findRecordByName(rec, filename, searchName, &offset)) {
        printf("Record with name '%s' not found.\n", searchName);
        return;
    }

    printf("Record found:\n");
    printf("Name : %s\n", rec->name);
    printf("Email: %s\n", rec->email);
    printf("Phone: %s\n", rec->phone);

    printf("Confirm delete? (y/n): ");
    char confirm;
    if (scanf(" %c", &confirm) != 1) {
        /* consume newline and return */
        getchar();
        return;
    }
    getchar(); /* consume newline */

    if (confirm == 'y' || confirm == 'Y') {
        rec->active = 0;
        FILE *fp = fopen(filename, "r+b");
        if (fp == NULL) {
            perror("Error opening file for update");
            return;
        }
        if (fseek(fp, offset, SEEK_SET) != 0) {
            perror("Error seeking to record position");
            fclose(fp);
            return;
        }
        if (fwrite(rec, sizeof *rec, 1, fp) != 1) {
            perror("Error writing deleted record");
        } else {
            printf("Record deleted (marked inactive).\n");
        }
        fclose(fp);
    } else {
        printf("Deletion cancelled.\n");
    }
}