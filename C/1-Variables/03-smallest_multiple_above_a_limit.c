#include<stdio.h>
#include<math.h>
int main(void){
    float number;
    float limit;
    float result;

    printf("Welcome to the code!\n");
    printf("This code will determine the smallest multiple of an integer that is greater than a specified minimum limit.\n\n");
    printf("To start, type a number: ");
    scanf("%f",&number);
    printf("\nNow type a number that will be the limit: ");
    scanf("%f",&limit);

    result = floor(limit/number);
    result = (result+1)*number;

    printf("The smallest multiple of an integer that is greater than a minimum limit is: %f",result);
}