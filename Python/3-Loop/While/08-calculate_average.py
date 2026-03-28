# this loop keeps the program running until the user decides to stop.
while True:
    print("\nWelcome to the average program! Enter two numbers to get their average.")

    while True:
        try:
            # ask the user to enter the first number.
            number1 = float(input("Enter the first number: "))
            break
        except ValueError:
            # if the user types something that is not a number, we show an error message.
            print('You did not type a number, please try again...\n')

    while True:
        try:
            # ask the user to enter the second number.
            number2 = float(input("Enter the second number: "))
            break
        except ValueError:
            # if the user types something that is not a number, we show an error message.
            print('You did not type a number, please try again...\n')

    # calculate the average of the two numbers.
    result = (number1 + number2) / 2

    # show the result to the user.
    print(f"The average of the two numbers is: {result}\n")

    while True:
        # ask the user if they want to run the program again.
        choice = input("Do you want to play again? (y=yes / n=no): ").lower()

        # if the user types 'y', the program restarts.
        if choice == 'y':
            break
        elif choice == 'n':
            # if the user types 'n', we end the program.
            print("Thanks for playing! Goodbye :)")
            exit()
        else:
            # if the user types something else, we show an error message.
            print("❌ Error: you must type 'y' or 'n'. Let's try again.")