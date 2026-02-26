#include<stdio.h>

int read_matrix(int x[2][3]) {
    printf("Please type a number for the vector!\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Print a number!\n ");
            scanf(" %d", &x[i][j]);
        }
    }
    return 0;
}

int main (void){
    char choice;
    do{
        int first_matrix[2][3];
        int second_matrix[2][3];

        printf("Welcome to the matrix sum program!\n");
        printf("In this program, you will enter values ​​into two 2x3 matrices, and then the program will calculate them!\n\n");

        printf("To begin, let's complete the first matrix!!\n");
        read_matrix(first_matrix);

        printf("\nThe first matrix:\n");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                    printf("%d ", first_matrix[i][j]);
            }
            printf("\n");
        }

        printf("\nNow let's start completing the second matrix!\n");
        read_matrix(second_matrix);
        
        printf("\nThe second matrix:\n");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                    printf("%d ", second_matrix[i][j]);
            }
            printf("\n");
        }

        printf("\nNow let's show the final result!\n");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                    printf("%d ", first_matrix[i][j] + second_matrix[i][j]);
            }
            printf("\n");
        }

        printf("\nYou reached the end of this code!\n");
        do
        {
            printf("Do you want to run it again? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y') {
                printf("\nYou decide to restart the code!\n\n");
            } else if (choice == 'n' || choice == 'N') {
                printf("\nYou decided to stop running the code!");
                printf("\nGoodbye! :D\n");
            } else {
                printf("You typed wrong! Please, try again!\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
        
    } while(choice == 'y' || choice == 'Y');
}