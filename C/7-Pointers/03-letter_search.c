#include <stdio.h>

char letterArray[] = "bdfhjkm oqsuwy";  

int searchLetter(char letter) {
    for (const char *p = letterArray; *p; p++) {
        if (*p == letter) return 1;
    }
    return 0;
}

int main(void) {
    char letter;
    char choice;

    do {
        printf("Welcome to the letter search program!\n");
        printf("This program checks whether a letter exists in a predefined array.\n\n");

        printf("Enter a letter to search: ");
        scanf(" %c", &letter);

        if (searchLetter(letter))
            printf("The letter '%c' WAS found in the array.\n", letter);
        else
            printf("The letter '%c' WAS NOT found in the array.\n", letter);

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