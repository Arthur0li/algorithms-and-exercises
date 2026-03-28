// the stdio.h header file is required to use the basic functions.
#include<stdio.h>

// the main function is the entry point of the program.
int main(void){
    int total_seconds;
    int rest;
    int hours;
    int minutes;
    int seconds;

    printf("Welcome to the second conversion code!!\n");
    printf("This code will determine a time based on the seconds entered by the user.\n\n");
    printf("To start, type the seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds/3600;
    rest = total_seconds % 3600;
    minutes = rest / 60;
    seconds = rest % 60;


    printf("The final total_seconds is %dh %dmin %ds",hours,minutes,seconds);
}