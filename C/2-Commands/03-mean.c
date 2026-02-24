#include<stdio.h>

int main(){
    int number;
    char choice;

    do{
    int count = 0;
    int sum = 0;
    printf("Welcome to the mean calculator!\n");
    printf("This code will calculate the mean of the numbers that you type!\n");
    printf("You can exit the code by typing a negative number!\n\n");
    
    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if(number < 0){
            break;
        }
        sum += number;
        count++;
    } while (number >= 0);
    
    printf("\nThe mean of the numbers that you typed is: %.2f\n", (float)sum / count);

    do
    {
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);
        if(choice == 'y'){
            printf("You decided to restart the code! yay! :)\n\n");
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