#include <stdio.h>

#define SIZE 4

struct address {
    char name[50];
    char street[100];
    char city[50];
    char state[3];
    char zip[10];
};

void receiveData(struct address *a, int n);
void printData(const struct address *a, int n);

int main(void) {
    struct address addresses[SIZE];
    int option;
    char choice;
    do {
        printf("Welcome to the address book program!\n");
        printf("This program will receive and print addresses for %d entries.\n\n", SIZE);

        do {
            printf("\nMenu:\n"
                   "1 - Receive all data\n"
                   "2 - Print all data\n"
                   "3 - Exit\n"
                   "Choose an option: ");
            if (scanf("%d", &option) != 1) break;
            getchar();
            switch (option) {
                case 1:
                    receiveData(addresses, SIZE);
                    break;
                case 2:
                    printData(addresses, SIZE);
                    break;
                case 3:
                    printf("Exiting...\n");
                    break;
                default:
                    printf("Invalid option!\n");
            }
        } while (option != 3);

        printf("You have reached the end of the program!\n");
        do
        {
            printf("Do you want to restart the program? (y/n): ");
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

    return 0;
}

void receiveData(struct address *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nAddress %d\n", i+1);
        printf("Name: ");
        scanf(" %49[^\n]", a[i].name);
        printf("Address: ");
        scanf(" %99[^\n]", a[i].street);
        printf("City: ");
        scanf(" %49[^\n]", a[i].city);
        printf("State (2 letters): ");
        scanf(" %2[A-Za-z]", a[i].state);
        printf("ZIP: ");
        scanf(" %9[0-9]", a[i].zip);
        getchar();
    }
}

void printData(const struct address *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Address %d ---\n", i+1);
        printf("Name:    %s\n", a[i].name);
        printf("Address: %s\n", a[i].street);
        printf("City:    %s\n", a[i].city);
        printf("State:   %s\n", a[i].state);
        printf("ZIP:     %s\n", a[i].zip);
    }
}