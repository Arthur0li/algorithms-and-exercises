#include <stdio.h>
#include <string.h>

int main(void){
    char text[100],  choice;
    do
    {
        printf("Welcome to the String Length Reader!\n");
        printf("This code will read a string and print its length.\n");

        printf("Enter a string: ");
        scanf("%s", text);

        printf("The length of the string is: %d\n", strlen(text));

        printf("\nYou reached to the end of the string size reader code!\n");
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
            
        } while (choice != 'y' && choice != 'Y');
    } while (choice == 'y' || choice == 'Y');
}