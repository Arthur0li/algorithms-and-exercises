/*
### ➕➖ Exercício 1 — Análise de Dois Números
Escreva um programa que receba **dois números inteiros** e execute as seguintes funções:

- ➕ Se os **dois números forem positivos**, retorne a **soma dos N números existentes entre eles**

- ✖️ Se os **dois números forem negativos**, retorne a **multiplicação dos N números existentes entre eles**

- ➗ Se o **primeiro número for positivo** e o **segundo negativo**, faça a **divisão entre eles**
*/

#include <stdio.h>

// sum function
int sum(int a, int b){
    int sum = 0;
    for (int i = a + 1; i < b; i++)
    {
        sum += i;
    }
    return sum;
}

// multiplication function
int multiply(int a, int b){
    int mult = 1;
    for (int i = a + 1; i < b; i++)
    {
        mult *= i;
    }
    return mult;
}

// division function
int divide(int a, int b){
    return a / b;
}

int main(void){
    char choice;
    do
    {
        int n1, n2;        
        
        printf("Welcome to the analyze numbers code!\n");
        printf("In this code you will be able to analyze two numbers and get some information about them!\n\n");
        printf("Addition: If both numbers are positive, the code will return the sum of the N numbers between them.\n"); 
        printf("Multiplication: If both numbers are negative, the code will return the multiplication of the N numbers between them.\n"); 
        printf("Division: If one number is positive and the other negative, the code will divide them.\n\n");

        printf("Please, enter the first number: ");
        scanf("%d", &n1);

        printf("\nPlease, enter the second number: ");
        scanf("%d", &n2);

        if (n1 > 0 && n2 > 0)
        {
            printf("\nThe sum of the numbers between %d and %d is: %d\n", n1, n2, sum(n1, n2));
        }
        else if (n1 < 0 && n2 < 0)
        {
            printf("\nThe multiplication of the numbers between %d and %d is: %d\n", n1, n2, multiply(n1, n2));
        }
        else if (n1 > 0 && n2 < 0)
        {
            printf("\nThe division of %d and %d is: %d\n", n1, n2, divide(n1, n2));
        }
        

        // Restart code
        printf("You reached the end of this code!\n");
        do
        {
            printf("Do you want to run it again? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y')
            {
                printf("\nYou decide to restart the code!\n\n");
            }
            else if (choice == 'n' || choice == 'N')
            {
                printf("\nYou decided to stop running the code!");
                printf("\nGoodbye! :D");
            }
            else{
                printf("You typed wrong! Please, try again!\n");
            }
            
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
        
    } while (choice == 'y' || choice == 'Y');
    
}