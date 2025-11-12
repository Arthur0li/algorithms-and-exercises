def addition(a, b):
    return a + b

def subtraction(a, b):
    return a - b

def division(a, b):
    return a / b

def multiplication(a, b):
    return a * b

while True:
    print("\nWelcome to the Function Calculator!!")
    print("Enter two numbers!")
    while True:
        try:
            n1 = float(input("\nEnter the first number: "))
            break
        except ValueError:
            print("You entered something wrong! Try again!")

    while True:
        try:
            n2 = float(input("\nEnter the second number: "))
            break
        except ValueError:
            print("You entered something wrong! Try again!")

    while True:
        print("\nWhich operation do you want to perform?")
        choice = input("m - Multiplication || d - Division || s - Subtraction || a - Addition: ").strip().lower()
        if choice == "m":
            print("\nThe result of the multiplication is", multiplication(n1, n2))
            break
        elif choice == "d":
            print("\nThe result of the division is", division(n1, n2))
            break
        elif choice == "s":
            print("\nThe result of the subtraction is", subtraction(n1, n2))
            break
        elif choice == "a":
            print("\nThe result of the addition is", addition(n1, n2))
            break
        else:
            print("You didn’t choose one of the options, try again!")

    while True:
        final_choice = input("\nDo you want to restart the program? (y/n): ")
        if final_choice == "y":
            print("You chose to restart the program!")
            break
        elif final_choice == "n":
            print("You chose to close the program! Goodbye!")
            exit()
        else:
            print("You entered something wrong! Try again!!")