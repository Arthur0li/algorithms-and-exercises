#include <stdio.h>

char string1[11];
char string2[11];

int compareStrings(const char *p1, const char *p2) {
    while (*p1 && *p1 == *p2) {
        p1++; 
        p2++;
    }
    return (*p1 == '\0' && *p2 == '\0') ? 1 : 0;
}

int main(void) {
    char choice;

    do {
        printf("Welcome to the string comparison program!\n");
        printf("This program compares two strings with a maximum of 10 characters.\n\n");

        printf("Enter the first string (max. 10 chars): ");
        scanf("%10s", string1);

        printf("Enter the second string (max. 10 chars): ");
        scanf("%10s", string2);

        if (compareStrings(string1, string2))
            printf("The strings are equal.\n");
        else
            printf("The strings are different.\n");

        do {
            printf("\nDo you want to restart the program? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y') {
                printf("\nRestarting the program...\n\n");
            } 
            else if (choice == 'n' || choice == 'N') {
                printf("\nExiting the program...\n");
            } 
            else {
                printf("\nInvalid input! Please enter 'y' or 'n'.\n");
            }

        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    printf("Program finished.\n");
    return 0;
}