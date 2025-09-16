import time

choice = '...'

while True:

    print('Welcome to the simple countdown timer!')

    while True:
        try:
            seconds = int(input('Enter the number of seconds you want to count down: '))
            if seconds > 0:
                break
            else:
                print("You entered a negative number.\n")
        except ValueError:
            print("You didn't enter a positive integer number, please try again.\n")
            continue 

    while seconds != 0:
        print(seconds)
        time.sleep(1)
        seconds -= 1

    print('⏰ Time is up! :)')
    
    while True: 
        choice = input('Do you want to start the timer again? (y=yes/n=no): ').lower()
        if choice == 'y':
            break 
        elif choice == 'n':
            print("Ok, bye bye :)")
            exit() 
        else:
            print("❌ Error: you must type 'y' or 'n'. Let’s try again.")