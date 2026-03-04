#include<stdio.h>

int calculateDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int k = year % 100;
    int j = year / 100;
    int f = day + (13 * (month + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j);
    return f % 7;
}

int main(void){
    char choice;
    do
    {
        int day_user, month_user, year_user;

        printf("Welcome to the Day of the Week Calculator!\n");
        printf("This code will determine the day of the week for any given date.\n");

        printf("\nPlease enter the day: ");
        scanf("%d", &day_user);

        printf("Please enter the month: ");
        scanf("%d", &month_user);

        printf("Please enter the year: ");
        scanf("%d", &year_user);

        int day_of_week = calculateDayOfWeek(day_user, month_user, year_user);

        printf("\nThe day of the week for %02d/%02d/%d is: ", day_user, month_user, year_user);
        switch (day_of_week)
        {
            case 0:
                printf("Saturday");
                break;
            case 1:
                printf("Sunday");
                break;
            case 2:
                printf("Monday");
                break;
            case 3:
                printf("Tuesday");
                break;
            case 4:
                printf("Wednesday");
                break;
            case 5:
                printf("Thursday");
                break;
            case 6:
                printf("Friday");
                break;
        }

        printf("\n\nYou reached the end of the program.");
        do
        {
            printf("\nDo you want to try again? (y/n) ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y')
            {
                printf("\nRestarting the program...\n\n");
            }
            else if (choice == 'n' || choice == 'N')
            {
                printf("\nExiting the program...");
            }
            else
            {
                printf("\nInvalid input. Please enter 'y' or 'n'.");
            }
            
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
        
    } while(choice == 'y' || choice == 'Y');
}