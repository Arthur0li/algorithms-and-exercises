// the stdio.h header file is required to use the basic functions.
#include <stdio.h>

// the main function is the entry point of the program.
int main(void){
    // declaring the variables
    int number1;
    int number2;

    // asking the user to input the values of the variables
    printf("Type the first number: ");
    scanf("%d",&number1);
    printf("\nType the second number: ");
    scanf("%d",&number2);

    //changing the variable values
    
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    // printing the new values of the variables
    printf("\nNow the first number is: %d",number1);
    printf("\nAnd now the second number is: %d",number2);
}