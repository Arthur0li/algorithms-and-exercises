#include<stdio.h>

int main(){
    char choice;
    int guess;
    char response;
    int min = 0;
    int max = 100;
    
    do{
        printf("Welcome to the guessing game!\n");
        printf("This code will try to guess the whole number that you type!\n");
        printf("Please, think a number from 0 to 100!\n\n");

        do
        {
            guess = (min + max) / 2;
            printf("Is the number %d? (< > =): ", guess);
            scanf(" %c", &response);

            switch (response)
            {
            case '>':
                min = guess + 1;
                break;
            
            case '<':
                max = guess - 1;
                break;

            case '=':
                printf("The number is %d!\n", guess);
                break;

            default:
                printf("Invalid response! Please, try again!\n");
            }
        } while (response != '=');
        
        do
        {
            printf("\nYou've reached the the end of this code!");
            printf("\nDo you want to continue? (y/n): ");
            scanf(" %c", &choice);
            if (choice  == 'y'){
                printf("You decided to restart the code!\n\n");
                guess = 0;
                min = 0;
                max = 100;
            }
            else if (choice == 'n'){
                printf("\nYou decided to stop the code!\n");
                printf("Bye Bye! See you next time! :)");
            }
            else{
                printf("You didn't choose, try again!\n");
            }
        } while (choice != 'y' && choice != 'n');
    } while (choice == 'y');
}