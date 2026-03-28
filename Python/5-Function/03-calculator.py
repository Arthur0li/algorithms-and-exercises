# function to perform addition.
def addition(a, b):
    return a + b

# function to perform subtraction.
def subtraction(a, b):
    return a - b

# function to perform division.
def division(a, b):
    return a / b

# function to perform multiplication.
def multiplication(a, b):
    return a * b


# this loop keeps the program running until the user decides to stop.
while True:

    print("\nWelcome to the Function Calculator!!")
    print("Enter two numbers!")

    while True:
        try:
            # ask for the first number.
            n1 = float(input("\nEnter the first number: "))
            break
        except ValueError:
            # show error if input is invalid.
            print("You entered something wrong! Try again!")

    while True:
        try:
            # ask for the second number.
            n2 = float(input("\nEnter the second number: "))
            break
        except ValueError:
            print("You entered something wrong! Try again!")

    while True:
        # ask the user which operation they want to perform.
        print("\nWhich operation do you want to perform?")
        choice = input("m - Multiplication || d - Division || s - Subtraction || a - Addition: ").strip().lower()

        # perform multiplication.
        if choice == "m":
            print("\nThe result of the multiplication is", multiplication(n1, n2))
            break

        # perform division.
        elif choice == "d":
            print("\nThe result of the division is", division(n1, n2))
            break

        # perform subtraction.
        elif choice == "s":
            print("\nThe result of the subtraction is", subtraction(n1, n2))
            break

        # perform addition.
        elif choice == "a":
            print("\nThe result of the addition is", addition(n1, n2))
            break

        else:
            # invalid option.
            print("You didn’t choose one of the options, try again!")

    while True:
        # ask if the user wants to restart the program.
        final_choice = input("\nDo you want to restart the program? (y/n): ")

        # if the user types 'y', restart the program.
        if final_choice == "y":
            print("You chose to restart the program!")
            break

        elif final_choice == "n":
            # if the user types 'n', end the program.
            print("You chose to close the program! Goodbye!")
            exit()

        else:
            # invalid input.
            print("You entered something wrong! Try again!!")