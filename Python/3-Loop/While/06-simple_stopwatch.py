# import the time module to create the countdown delay.
import time

# this variable will store the user's choice to restart or stop the timer.
choice = '...'

while True:

    print('Welcome to the simple countdown timer!')

    while True:
        try:
            # ask the user how many seconds the countdown should have.
            seconds = int(input('Enter the number of seconds you want to count down: '))
            if seconds > 0:
                break
            else:
                # if the number is not positive, we show an error message.
                print("You entered a negative number.\n")
        except ValueError:
            # if the user types something that is not a number, we show an error message.
            print("You didn't enter a positive integer number, please try again.\n")
            continue

    # count down until the number reaches zero.
    while seconds != 0:
        print(seconds)
        time.sleep(1)
        seconds -= 1

    print('⏰ Time is up! :)')
    
    while True:
        # ask the user if they want to start the timer again.
        choice = input('Do you want to start the timer again? (y=yes/n=no): ').lower()
        if choice == 'y':
            break
        elif choice == 'n':
            # if the user says no, we end the program.
            print("Ok, bye bye :)")
            exit()
        else:
            # if the user types something else, we show an error message.
            print("❌ Error: you must type 'y' or 'n'. Let’s try again.")