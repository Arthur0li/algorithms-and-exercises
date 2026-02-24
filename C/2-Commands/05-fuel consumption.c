#include<stdio.h>
/* Receive via keyboard:
- the **distance in km**
- the **amount of liters of gasoline consumed**

Calculate the consumption in **km/l** and write a message according to the table:

| Consumption (km/l) | Message |

|---------------:|--------------------|

| less than 8 | Sell the car! |

| between 8 and 14 | Economical! |

| greater than 14 | Super economical! | */
int main (void){
    char choice;
    
    do
    {
        float distance, liters, consumption;

        printf("\nWelcome to the fuel consumption code!\n");
        printf("This code will calculate the fuel consumption of your car!\n\n");

        do
        {
            printf("Please, Type the distance in km: ");
            scanf("%f", &distance);
            if (distance <= 0)
            {
                printf("Invalid distance! Please, try again!\n");
            }
            else{
                break;
            }
        } while (distance <= 0);

        do
        {
            printf("\nPlease, Type the liters of gasoline consumed: ");
            scanf("%f", &liters);
            if (liters <= 0)
            {
                printf("Invalid liters! Please, try again!\n");
            }
            else{
                break;
            }
        } while (liters <= 0);

        consumption = distance / liters;
        printf("\n\nThe fuel consumption is: %.2f km/l\n", consumption);
        
        if (consumption < 8)
        {
            printf("Sell the car!\n\n");
        }
        else if (consumption >= 8 && consumption <= 14)
        {
            printf("Economical!\n\n");
        }
        else
        {
            printf("Super economical!\n\n");
        }

        
        do
        {
            printf("Do you want to restart? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y')
            {
                printf("\nYou chose to restart!\n");
            }
            else if (choice == 'n')
            {
                printf("\nYou choose to end the program!\n");
                printf("Good bye! :)");
                break;
            }
            else
            {
                printf("\nInvalid input! Please try again.\n");
            }
            
        } while (choice != 'y' && choice != 'n');
    } while (choice == 'y');
    
}