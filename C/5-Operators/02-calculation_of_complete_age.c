#include<stdio.h>

/*Write a program to determine a person's age in years, months, and days.

The program should receive the following via keyboard input:
- the date of birth (day, month, and year)
- the current date (day, month, and year)*/

int calculation(int birth_day, int birth_month, int birth_year, int current_day, int current_month, int current_year){
    int age_years = current_year - birth_year;
    int age_months = current_month - birth_month;
    int age_days = current_day - birth_day;

    if (age_days < 0) {
        age_months--;
        if (current_month == 1) {
            age_years--;
            age_months = 11;
        } else {
            age_months--;
        }
    }

    if (age_months < 0) {
        age_years--;
        age_months += 12;
    }

    printf("\nAge: %d years, %d months, %d days\n", age_years, age_months, age_days);
}

int main(void){
    char choice;
    do
    {
        int birth_day, birth_month, birth_year;
        int current_day, current_month, current_year;

        printf("\nWelcome to the age calculator program!\n");
        printf("This code will calculate your age in years, months, and days!\n\n");

        printf("Enter day of birth: ");
        scanf("%d", &birth_day);

        printf("\nEnter month of birth: ");
        scanf("%d", &birth_month);

        printf("\nEnter year of birth: ");
        scanf("%d", &birth_year);

        printf("\n\nNow, let's enter the current date!\n");
        printf("Enter current day: ");
        scanf("%d", &current_day);

        printf("\nEnter current month: ");
        scanf("%d", &current_month);

        printf("\nEnter current year: ");
        scanf("%d", &current_year);

        calculation(birth_day, birth_month, birth_year, current_day, current_month, current_year);

        printf("\nYou reached the end of the program!\n");
        do
        {
            printf("Do you want to calculate another age? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y'){
                printf("You decided to calculate another age!\n\n");
            }
            else if (choice == 'n' || choice == 'N'){
                printf("Exiting the program. Goodbye!\n");
            }
            else{
                printf("Invalid input. Please enter 'y' or 'n'.\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
        
    } while (choice == 'y' || choice == 'Y');   
}