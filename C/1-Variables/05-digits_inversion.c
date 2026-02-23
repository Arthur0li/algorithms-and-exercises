#include<stdio.h>

int main(void){
    char number[4];

    printf("Welcome to the digits inversion code!\n");
    printf("This code will reverse a number with 3 digits!\n\n");
    printf("Type a number with 3 digits: ");
    scanf("%3s", number);
    printf("Número lido: %s\n", number);
    printf("Número gerado: %c%c%c\n", number[2], number[1], number[0]);
}