#include <stdio.h>

void print_results(int a, int b, int and_result, int or_result, int xor_result) {
    printf("Input values: %d and %d\n", a, b);
    printf("AND result: %d (0x%x)\n", and_result, and_result);
    printf("OR result: %d (0x%x)\n", or_result, or_result);
    printf("XOR result: %d (0x%x)\n\n", xor_result, xor_result);
}

int main (void){
    char choice;
    do{
        int n1, n2;
        printf("welcome to the bitwise operations program!\n");
        printf("This code will perform bitwise AND, OR, and XOR operations on two integers!\n\n");
        
        printf("Enter the first integer: ");
        scanf("%d", &n1);
        printf("Enter the second integer: ");
        scanf("%d", &n2);

        int and_result = n1 & n2;
        int or_result = n1 | n2;
        int xor_result = n1 ^ n2;

        printf("\nThe program will now display the results of the bitwise operations in both decimal and hexadecimal formats:\n");
        print_results(n1, n2, and_result, or_result, xor_result);

        printf("You have reached the end of the program!\n");
        do
        {
            printf("Do you want to restart the program? (y/n): ");
            scanf(" %c", &choice);
            if(choice == 'y' || choice == 'Y'){
                printf("\nRestarting the program...\n\n");
            } else if (choice == 'n' || choice == 'N') {
                printf("\nExiting the program...\n");
            } else {
                printf("\nInvalid input! Please enter 'y' or 'n'.\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
    }while (choice == 'y' || choice == 'Y');
}