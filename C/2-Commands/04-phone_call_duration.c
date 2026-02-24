#include<stdio.h>

int main(void){
    char choice;

    do{
        int hours, minutes, seconds;
        int final_hours, final_minutes, final_seconds;
        int total_hours, total_minutes, total_seconds;
        int rest;

        printf("Welcome to the phone call duration code!");
        printf("This code will calculate the time that you was in a phone call!\n\n");

        do
        {
            printf("Please, Type the hours that you start the phone call: ");
            scanf("%d", &hours);
            if (hours < 0 || hours > 23)
            {
                printf("Invalid hours! Please, try again!\n");
            }
            else{
                break;
            }
        } while (hours < 0 || hours > 23);
        
        do
        {
            printf("Please, Type the minutes that you start the phone call: ");
            scanf("%d", &minutes);
            if (minutes < 0 || minutes > 59)
            {
                printf("Invalid minutes! Please, try again!\n");
            }
            else{
                break;
            }
        } while (minutes < 0 || minutes > 59);
        
        do
        {
            printf("Please, Type the seconds that you start the phone call: ");
            scanf("%d", &seconds);
            if (seconds < 0 || seconds > 59)
            {
                printf("Invalid seconds! Please, try again!\n");
            }
            else{
                break;
            }
        } while (seconds < 0 || seconds > 59);

        printf("\n\nNow let's go to the time when the call ended!\n\n");
        do{
            printf("Please, Type the hours that the call ended: ");
            scanf("%d", &final_hours);
            if (final_hours < 0 || final_hours > 23)
            {
                printf("Invalid hours! Please, try again!\n");
            }
            else{
                break;
            }
        } while (final_hours < 0 || final_hours > 23);

        do{
            printf("Please, Type the minutes that the call ended: ");
            scanf("%d", &final_minutes);
            if (final_minutes < 0 || final_minutes > 59)
            {
                printf("Invalid minutes! Please, try again!\n");
            }
            else{
                break;
            }
        } while (final_minutes < 0 || final_minutes > 59);

        do{
            printf("Please, Type the seconds that the call ended: ");
            scanf("%d", &final_seconds);
            if (final_seconds < 0 || final_seconds > 59)
            {
                printf("Invalid seconds! Please, try again!\n");
            }
            else{
                break;
            }
        } while (final_seconds < 0 || final_seconds > 59);

        total_seconds = (final_hours * 3600 + final_minutes * 60 + final_seconds) - (hours * 3600 + minutes * 60 + seconds);
        total_hours = total_seconds/3600;
        rest = total_seconds % 3600;
        total_minutes = rest / 60;
        total_seconds = rest % 60;

        printf("\n\nThe final time is %dh %dmin %ds \n\n",total_hours,total_minutes,total_seconds);

        do
        {
            printf("You reach the end of the code! Do you want restart?(y/n): ");
            scanf(" %c", &choice);
            if (choice == 'y')
            {
                printf("Yay! You decided to restart! :D\n\n");
            }
            else if (choice == 'n')
            {
                printf("You decided to stop the code!\nBye Bye! :D");
            }
            else{
                printf("You typed wrong, try again!");
            }        
        } while (choice != 'y' && choice != 'n');
    } while(choice == 'y');
}