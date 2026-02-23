#include <stdio.h>
int main(void){
    int number1;
    int number2;

    printf("Type the first number: ");
    scanf("%d",&number1);
    printf("\nType the second number: ");
    scanf("%d",&number2);

    //changing the variable values
    
    number1 = number1 + number2;
    number2 = number1 - number2;
    number1 = number1 - number2;

    printf("\nNow the first number is: %d",number1);
    printf("\nAnd now the second number is: %d",number2);
}