#include <stdio.h>

#define DAYS_PER_MONTH 30
#define MONTHS_PER_YEAR 12

struct date {
    int day;
    int month;
    int year;
};

void readDates(struct date *p) {
    for (int i = 0; i < 2; i++) {
        printf("Enter date %d (dd mm yyyy): ", i + 1);
        scanf("%d %d %d", &p[i].day, &p[i].month, &p[i].year);
    }
}

int totalDays(struct date *d) {
    return d->year * MONTHS_PER_YEAR * DAYS_PER_MONTH +
           d->month * DAYS_PER_MONTH +
           d->day;
}

int main(void) {
    struct date dates[2];
    char choice;

    do {
        printf("Welcome to the date difference program!\n");
        printf("This program calculates an approximate difference in days between two dates.\n\n");

        printf("=== Date Difference ===\n");
        readDates(dates);

        int total1 = totalDays(&dates[0]);
        int total2 = totalDays(&dates[1]);
        int difference = total1 - total2;
        if (difference < 0) difference = -difference;

        printf("The approximate difference in days is: %d days\n", difference);

        do {
            printf("\nDo you want to restart the program? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'y' || choice == 'Y') {
                printf("\nRestarting the program...\n\n");
            }
            else if (choice == 'n' || choice == 'N') {
                printf("\nExiting the program...\n");
            }
            else {
                printf("\nInvalid input! Please enter 'y' or 'n'.\n");
            }

        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    printf("Program finished.\n");
    return 0;
}