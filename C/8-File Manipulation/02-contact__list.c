#include <stdio.h>
#include <string.h>

#define SIZE 4
#define FILENAME "contacts.dat"

struct contact {
    char name[50];
    char phone[20];
    int day;   /* birthday day */
    int month; /* birthday month */
};

/* function prototypes */
void readContacts(struct contact *contacts, int n);
void displayContacts(const struct contact *contacts, int n);
int saveToFile(const struct contact *contacts, int n, const char *filename);
int loadFromFile(struct contact *contacts, int n, const char *filename);

/* helper to remove trailing newline from fgets */
static void chomp(char *s) {
    s[strcspn(s, "\n")] = '\0';
}

int main(void) {
    struct contact contacts[SIZE]; /* local vector of structures */
    int option;
    char choice;

    do {
        /* welcome message */
        printf("Welcome to the contacts agenda program!\n");
        printf("This program manages up to %d contacts and can save/load them to a file.\n\n", SIZE);

        /* initialize contacts to empty strings / zeros (optional but helpful) */
        for (int i = 0; i < SIZE; i++) {
            contacts[i].name[0] = '\0';
            contacts[i].phone[0] = '\0';
            contacts[i].day = 0;
            contacts[i].month = 0;
        }

        do {
            printf("\nMenu:\n"
                   "1 - Enter all contacts\n"
                   "2 - Display all contacts\n"
                   "3 - Save contacts to file\n"
                   "4 - Load contacts from file\n"
                   "5 - Exit\n"
                   "Choose an option: ");
            if (scanf("%d", &option) != 1) break;
            getchar(); /* discard pending newline */

            switch (option) {
                case 1:
                    readContacts(contacts, SIZE);
                    break;
                case 2:
                    displayContacts(contacts, SIZE);
                    break;
                case 3:
                    if (saveToFile(contacts, SIZE, FILENAME))
                        printf("Contacts saved to '%s'.\n", FILENAME);
                    else
                        printf("Error saving contacts to file.\n");
                    break;
                case 4:
                    if (loadFromFile(contacts, SIZE, FILENAME))
                        printf("Contacts loaded from '%s'.\n", FILENAME);
                    else
                        printf("Error loading contacts from file (file may not exist or be invalid).\n");
                    break;
                case 5:
                    printf("Exiting...\n");
                    break;
                default:
                    printf("Invalid option!\n");
            }
        } while (option != 5);

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

/* read n contacts into the array pointed by contacts */
void readContacts(struct contact *contacts, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Contact %d ---\n", i + 1);

        printf("Name: ");
        if (fgets(contacts[i].name, sizeof contacts[i].name, stdin) == NULL) {
            contacts[i].name[0] = '\0';
        } else {
            chomp(contacts[i].name);
        }

        printf("Phone: ");
        if (fgets(contacts[i].phone, sizeof contacts[i].phone, stdin) == NULL) {
            contacts[i].phone[0] = '\0';
        } else {
            chomp(contacts[i].phone);
        }

        printf("Birthday day (1-31): ");
        if (scanf("%d", &contacts[i].day) != 1) contacts[i].day = 0;
        printf("Birthday month (1-12): ");
        if (scanf("%d", &contacts[i].month) != 1) contacts[i].month = 0;
        getchar(); /* discard pending newline after reading numbers */
    }
}

/* display n contacts from the array pointed by contacts */
void displayContacts(const struct contact *contacts, int n) {
    printf("\n--- Contacts List ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nContact %d:\n", i + 1);
        printf("Name:    %s\n", contacts[i].name[0] ? contacts[i].name : "(empty)");
        printf("Phone:   %s\n", contacts[i].phone[0] ? contacts[i].phone : "(empty)");
        if (contacts[i].day >= 1 && contacts[i].month >= 1)
            printf("Birthday: %02d/%02d\n", contacts[i].day, contacts[i].month);
        else
            printf("Birthday: (not set)\n");
    }
}

/* save array of n contacts to a binary file; returns 1 on success, 0 on failure */
int saveToFile(const struct contact *contacts, int n, const char *filename) {
    FILE *fp = fopen(filename, "wb");
    if (fp == NULL) return 0;
    size_t wrote = fwrite(contacts, sizeof(struct contact), n, fp);
    fclose(fp);
    return wrote == (size_t)n;
}

/* load up to n contacts from a binary file into the array pointed by contacts;
   returns 1 on success (read n records or more), 0 on failure */
int loadFromFile(struct contact *contacts, int n, const char *filename) {
    FILE *fp = fopen(filename, "rb");
    if (fp == NULL) return 0;
    size_t read = fread(contacts, sizeof(struct contact), n, fp);
    fclose(fp);
    return read == (size_t)n;
}