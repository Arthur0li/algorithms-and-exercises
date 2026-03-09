#include <stdio.h>
#include <string.h>

#define SIZE 4

struct record {
    char name[50];
    char address[50];
    char city[30];
    char state[3];
    char zip[10];
};

void registerRecords(struct record *people, int size) {
    for (int i = 0; i < size; i++) {
        printf("\n--- Record %d ---\n", i + 1);
        printf("Name: ");
        fgets((people + i)->name, 50, stdin);
        strtok((people + i)->name, "\n");

        printf("Address: ");
        fgets((people + i)->address, 50, stdin);
        strtok((people + i)->address, "\n");

        printf("City: ");
        fgets((people + i)->city, 30, stdin);
        strtok((people + i)->city, "\n");

        printf("State (UF): ");
        fgets((people + i)->state, 3, stdin);
        getchar();

        printf("ZIP: ");
        fgets((people + i)->zip, 10, stdin);
        getchar();
    }
}

void displayRecords(struct record *people, int size) {
    printf("\n--- Records List ---\n");
    for (int i = 0; i < size; i++) {
        printf("\nRecord %d:\n", i + 1);
        printf("Name:    %s\n", (people + i)->name);
        printf("Address: %s\n", (people + i)->address);
        printf("City:    %s\n", (people + i)->city);
        printf("State:   %s\n", (people + i)->state);
        printf("ZIP:     %s\n", (people + i)->zip);
    }
}

int main(void) {
    struct record people[SIZE];
    int option;
    char choice;

    do {
        printf("Welcome to the registration program!\n");
        printf("This program allows registering and displaying up to %d records.\n\n", SIZE);

        do {
            printf("\n===== MENU =====\n");
            printf("1 - Register\n");
            printf("2 - Display\n");
            printf("0 - Exit\n");
            printf("Option: ");
            if (scanf("%d", &option) != 1) break;
            getchar();

            switch (option) {
                case 1:
                    registerRecords(people, SIZE);
                    break;
                case 2:
                    displayRecords(people, SIZE);
                    break;
                case 0:
                    printf("Ending the program...\n");
                    break;
                default:
                    printf("Invalid option!\n");
            }
        } while (option != 0);

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