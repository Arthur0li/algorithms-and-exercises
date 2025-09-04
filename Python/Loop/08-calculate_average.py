while True:
    print("\nWelcome to the average program! Enter two numbers to get their average.")

    while True:
        try:
            number1 = float(input("Enter the first number: "))
            break 
        except ValueError:
            print('You did not type a number, please try again...\n')

    while True:
        try:
            number2 = float(input("Enter the second number: "))
            break
        except ValueError:
            print('You did not type a number, please try again...\n')

    result = (number1 + number2) / 2
    print(f"The average of the two numbers is: {result}\n")


    while True:
        choice = input("Do you want to play again? (y=yes / n=no): ").lower()
        if choice == 'y':
            break 
        elif choice == 'n':
            print("Thanks for playing! Goodbye :)")
            exit() 
        else:
            print("❌ Error: you must type 'y' or 'n'. Let's try again.")  
