#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(NULL));
    int number;
    int number_guess;
    char choice;
    do
    {
        number_guess = rand() % 101;

        printf("\nWelcome to the guessing game!\n");
        printf("This code will try to guess the whole number that you type!\n\n");

        do
        {
            printf("Please, type a number from 0 to 100: ");
            scanf("%d", &number);

            if (number < 1 || number > 99) {
                printf("Invalid number! Try again.\n\n");
            }
            else if (number > number_guess)
            {
                printf("The number you typed is above the machine number.\n");
                printf("Try Again!\n\n");
            }
            else if (number < number_guess)
            {
                printf("The number you typed is bellow the machine number.\n");
                printf("Try Again!\n\n");
            }
        } while (number != number_guess);
        
        printf("Correct! The machine number was %d\n", number_guess);

        do
        {
            printf("\nDo you want to restart the code? (y=yes / n = no): ");
            scanf(" %c", &choice);
            if (choice == 'y'){
                printf("You decided to restart the code!\n");
            }
            else if (choice == 'n'){
                printf("You decided to close  the code!\n");
                printf("Bye Bye! :)");
            }
            else{
                printf("You didn't choose, try again!\n");
            }
        } while (choice != 'y' && choice != 'n');

    } while (choice == 'y');
    
}