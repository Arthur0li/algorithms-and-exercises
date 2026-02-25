#include <stdio.h>

int factorial(int number){
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    return fact;
}

int main(void){
    char choice;
    
    do
    {   
        int user_number;

        printf("Welcome to the factorial code!\n");
        printf("In this code you will be able to calculate the factorial of a number!\n\n");

        printf("Please type a number! ");
        scanf("%d", &user_number);
        printf("The factorial of %d is: %d\n", user_number, factorial(user_number));

        do{
            printf("\n\nYou reached to the end of the code! Do you want to restart it? (Y/N): ");
            scanf (" %c", &choice);
            if (choice == 'y' || choice == 'Y'){
                printf("\nYou decide to restart the code!\n\n");
            }
            else if (choice == 'n' || choice == 'N'){
                printf("\nYou decided to stop running the code!");
                printf("\nGoodbye! :D");
            }
            else{
                printf("You typed wrong! Please, try again!\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
    } while (choice == 'y' || choice == 'Y');
    
}