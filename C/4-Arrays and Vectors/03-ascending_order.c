#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int SIZE = 10;
    char choice = 'y';

    while (choice == 'y' || choice == 'Y') {
        int vetor[SIZE];
        int i, j, num;

        printf("\nWelcome to the Ascending Order Sorter!\n");

        printf("Insertion sort - enter %d integers\n", SIZE);
        for (i = 0; i < SIZE; i++) {
            printf("Enter number %d: ", i + 1);
            while (scanf("%d", &num) != 1) {
                printf("Invalid input. Please enter an integer: ");
                while (getchar() != '\n'); // clear invalid input
            }

            /* insertion step */
            j = i - 1;
            while (j >= 0 && vetor[j] > num) {
                vetor[j + 1] = vetor[j];
                j--;
            }
            vetor[j + 1] = num;
        }

        printf("\nValues in ascending order:\n");
        for (i = 0; i < SIZE; i++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");

        /* ask whether to run again */
        do {
            printf("Do you want to run the program again? (y/n): ");
            if (scanf(" %c", &choice) != 1) {
                /* clear input if something weird was entered */
                while (getchar() != '\n');
                choice = '\0';
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

        if (choice == 'n' || choice == 'N') {
            printf("Exiting the program. Goodbye!\n");
            break;
        }
        /* if 'y' or 'Y', loop repeats */
    }

    return 0;
}