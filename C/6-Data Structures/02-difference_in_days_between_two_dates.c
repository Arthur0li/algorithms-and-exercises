#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

int daysInMonth(int month, int year) {
    static const int mdays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (month == 2 && ( (year%400==0) || (year%4==0 && year%100!=0) ))
        return 29;
    return mdays[month-1];
}

long convertToDays(struct date d) {
    long days = 0;
    for (int y = 1; y < d.year; y++)
        days += ( (y%400==0) || (y%4==0 && y%100!=0) ) ? 366 : 365;
    for (int m = 1; m < d.month; m++)
        days += daysInMonth(m, d.year);
    days += d.day;
    return days;
}

int main(void) {
    struct date date1, date2;
    char choice;
    do {
        printf("Welcome to the date difference program!\n");
        printf("This program calculates the number of days between two dates.\n\n");

        printf("Enter the first date (dd mm yyyy): ");
        scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
        printf("Enter the second date (dd mm yyyy): ");
        scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

        long diff = convertToDays(date2) - convertToDays(date1);
        if (diff < 0) diff = -diff;
        printf("Number of days between the dates: %ld\n", diff);

        do {
            printf("Do you want to restart the program? (y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y' || choice == 'Y') {
                printf("\nRestarting the program...\n\n");
            } else if (choice == 'n' || choice == 'N') {
                printf("\nExiting the program...\n");
            } else {
                printf("\nInvalid input! Please enter 'y' or 'n'.\n");
            }
        } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    } while (choice == 'y' || choice == 'Y');

    printf("Program finished.\n");
    return 0;
}