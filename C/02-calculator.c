#include <stdio.h>

int main(void){
    float number1 = 0.0;
    float number2 = 0.0;
    float sum = 0.0;
    float subtraction = 0.0;
    float division = 0.0;
    float multiplication = 0.0;

    printf(" Welcome to your friendly C calculator! \n");
    printf("You can enter two numbers, and I'll show you the results of:\n");
    printf("addition, subtraction, multiplication, and division.\n\n");

    printf(" Please enter the first number: ");
    scanf("%f", &number1);
    printf(" Now, enter the second number: ");
    scanf("%f", &number2);

    sum = number1 + number2;
    subtraction = number1 - number2;
    multiplication = number1 * number2;
    division = number1 / number2;

    printf("\n Here are your results:\n");
    printf("Addition: %f\n", sum);
    printf("Subtraction: %f\n", subtraction);
    printf("Multiplication: %f\n", multiplication);
    printf("Division: %f\n", division);

    printf("\n That's it! Thanks for using this calculator. :D\n");

    return 0;
}