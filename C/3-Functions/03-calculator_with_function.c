#include <stdio.h>

float sum(float a, float b){
    return a + b;
}

float sub(float a, float b){
    return a - b;
}

float mult(float a, float b){
    return a * b;
}

float div(float a, float b){
    if (b == 0){
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}

int main (void){
    char choice;

    do{
        float num1, num2, result;
        char operation_choice;

        printf("Welcome to the calculator code!\n");
        printf("In this code you will be able to calculate the sum, subtraction, multiplication and division.\n\n");

        printf("Please, enter the first number: ");
        scanf("%f", &num1);
        printf("Please, enter the second number: ");
        scanf("%f", &num2);
        printf("Please, enter the operation you want to do (+, -, *, /): ");
        scanf(" %c", &operation_choice);

        do{
            if (operation_choice != '+' && operation_choice != '-' && operation_choice != '*' && operation_choice != '/') {
                printf("Invalid operation! Please enter a valid operation (+, -, *, /): ");
                scanf(" %c", &operation_choice);
            }
        } while (operation_choice != '+' && operation_choice != '-' && operation_choice != '*' && operation_choice != '/');

        if (operation_choice == '+') {
            result = sum(num1, num2);
        } else if (operation_choice == '-') {
            result = sub(num1, num2);
        } else if (operation_choice == '*') {
            result = mult(num1, num2);
        } else if (operation_choice == '/') {
            result = div(num1, num2);
        } 
        printf("The result is: %.2f\n\n", result);

        do{
            printf("You reached to the end of the code! Do you want to restart it? (Y/N): ");
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