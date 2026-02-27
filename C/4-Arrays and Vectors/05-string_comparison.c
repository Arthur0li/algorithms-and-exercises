#include<stdio.h>
#include<string.h>

int main (void){
    char choice, text1[100], text2[100];
    do
    {
        printf("Welcome to the String Comparison Code!\n");
        printf("This code will read two strings and compare them.\n\n");

        printf("Enter the first string: ");
        scanf("%s", text1);
        printf("Enter the second string: ");
        scanf("%s", text2);

        if(strcasecmp(text1, text2) == 0){
            printf("The strings are equal!\n");
        }
        else{
            printf("The strings are not equal!\n");
        }

        printf("\nYou reached to the end of the sting comaprison code!\n");
        do
        {   
            printf("Do you want to run the program again? (y/n): ");
            scanf(" %c",&choice);
            if (choice == 'y' || choice == 'Y') {
                printf("You choosed to run the program again!\n\n");
            }
            else if (choice == 'n' || choice == 'N')
            {
                printf("You choosed to exit the program. \nGoodbye! :)");
                break;
            }
            else
            {
                printf("Invalid input. Please enter 'y' or 'n':\n\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
        
    } while (choice == 'y' || choice == 'Y');
}