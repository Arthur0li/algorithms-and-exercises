#include <stdio.h>

int main(void) {
    int value, sum = 0, count = 0;
    double average;
    int *pValue  = &value;
    int *pSum    = &sum;
    int *pCount  = &count;
    double *pAvg = &average;
    char choice;

    do {
        printf("Welcome to the positive integers accumulator!\n");
        printf("Enter positive integers (negative to stop):\n");

        while (1) {
            printf("Number: ");
            scanf("%d", pValue);
            if (*pValue < 0) break;
            *pSum  += *pValue;
            (*pCount)++;
        }

        if (*pCount > 0) {
            *pAvg = (double)(*pSum) / *pCount;
            printf("\n%d values were entered.\n", *pCount);
            printf("Total sum: %d\n", *pSum);
            printf("Average: %.2f\n", *pAvg);
        } else {
            printf("\nNo positive value was entered.\n");
        }

        do {
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

    printf("Program finished.\n");
    return 0;
}