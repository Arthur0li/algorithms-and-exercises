#include <stdio.h>

int main(void) {
    char choice;
    do {
        int total[10], even[10], odd[10];
        int ecount = 0, ocount = 0;

        printf("Welcome to the separation by position code!\n");
        printf("In this code you will be able to separate the components of a vector into two\n");
        printf("one with even indices and another with odd indices.\n\n");
        printf("Please enter 10 integers:\n");

        for (int i = 0; i < 10; i++) {
            if (scanf("%d", &total[i]) != 1) {
                printf("Input error\n");
                return 1;
            }
        }

        printf("\nThis was the numbers that you typed:\n");
        for (int i = 0; i < 10; i++) {
            printf("%d ", total[i]);
        }

        printf("\n\nNow we will start to show the numbers into two vectors!\n\n");
        for (int i = 0; i < 10; i++) {
            if (total[i] % 2 == 0) {
                even[ecount++] = total[i];
            } else {
                odd[ocount++] = total[i];
            }
        }

        printf("This is the even numbers\n");
        for (int i = 0; i < ecount; i++) {
            printf("%d ", even[i]);
        }

        printf("\n\nThis is the odd numbers\n");
        for (int i = 0; i < ocount; i++) {
            printf("%d ", odd[i]);
        }

        printf("\n\nYou reached the end of this code!\n");
        do {
            printf("Do you want to run it again? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y') {
                printf("\nYou decide to restart the code!\n\n");
            } else if (choice == 'n' || choice == 'N') {
                printf("\nYou decided to stop running the code!");
                printf("\nGoodbye! :D\n");
            } else {
                printf("You typed wrong! Please, try again!\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    return 0;
}