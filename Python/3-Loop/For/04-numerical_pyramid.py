# a while loop that will run as long as the user wants
while True:
    while True:
        # Try to receive a number; if the number isn't greater than 0 or the user doesn't type a number, the code will display a error message and try again
        try:
            print("\nWelcome to the numeric pyramid program")
            number = int(input("Enter an integer: "))
            if number <= 0:
                print("You entered a number less than or equal to 0 :(")
                print("Please try again!")
                continue
            break
        except ValueError:
            print("You typed it wrong, please try again!")

    # If the user type a positive number, the code will display a numeric pyramid with the number entered by the user
    for i in range(1, number+1):
        for j in range(1, i+1):
            print(j, end=" ")
        print()

    # a while loop that will ask the user if they want to restart the code
    while True:
        choice = input("Do you want to run the program again? (y/n): ").lower()
        if choice == "y":
            break
        elif choice == "n":
            print("Program terminated!")
            exit()
        else:
            print("Type 'y' for yes or 'n' for no")
