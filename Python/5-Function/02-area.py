# function to calculate the area of a rectangle or square.
def rectangle_square():

    print("\nYou chose rectangle/square!")

    while True:
        try:
            # ask for the first side.
            x = float(input("Enter the first side: "))

            # check if the value is valid.
            if x <= 0:
                print("You entered a side less than or equal to 0, try again\n")
            else:
                print("The first side you entered was", x)
                break
        except ValueError:
            # show error if input is invalid.
            print("You did not enter a number! Try again!\n")
    
    while True:
        try:
            # ask for the second side.
            y = float(input("\nEnter the second side: "))

            if y <= 0:
                print("You entered a side less than or equal to 0, try again\n")
            else:
                print("The second side you entered was", y)
                break
        except ValueError:
            print("You did not enter a number! Try again!\n")
    
    # calculate and show the area.
    print("\nThe area is:", x * y)


# function to calculate the area of a circle.
def circle():

    print("\nYou chose circle!")

    while True:
        try:
            # ask for the radius.
            r = float(input("Enter the radius: "))

            if r <= 0:
                print("You entered a radius less than or equal to 0, try again\n")
            else:
                print("The radius you entered was", r)
                break
        except ValueError:
            print("You did not enter a number! Try again!\n")
    
    # calculate and show the area (π ≈ 3.14).
    print("\nThe area is:", (r ** 2) * 3.14)


# function to calculate the area of a triangle.
def triangle():

    print("\nYou chose triangle!")
    
    while True:
        try:
            # ask for the base.
            b = float(input("Enter the base of the triangle: "))

            if b <= 0:
                print("You entered a base less than or equal to 0, try again\n")
            else:
                print("The base you entered was", b)
                break
        except ValueError:
            print("You did not enter a number! Try again!\n")
        
    while True:
        try:
            # ask for the height.
            h = float(input("\nEnter the height of the triangle: "))

            if h <= 0:
                print("You entered a height less than or equal to 0, try again\n")
            else:
                print("The height you entered was", h)
                break
        except ValueError:
            print("You did not enter a number! Try again!\n")

    # calculate and show the area.
    print("\nThe area is:", (b * h) / 2)


# main loop of the program.
while True:

    while True:
        # show menu options to the user.
        print("\nWelcome to the area calculation program! Choose which shape you want to calculate:")

        # ask the user to choose a shape.
        choice = input("r = Rectangle/Square / c = Circle / t = Triangle ").strip().lower()

        # call the corresponding function.
        if choice == "r":
            rectangle_square()
            break

        elif choice == "c":
            circle()
            break

        elif choice == "t":
            triangle()
            break

        else:
            # invalid input.
            print("You typed it wrong, try again")
    
    while True:
        # ask if the user wants to restart the program.
        choice_end = input("\nYou reached the end of the program. Do you want to restart? (y/n) ").strip().lower()

        if choice_end == "y":
            print("You chose to restart the program!")
            break

        elif choice_end == "n":
            # end the program.
            print("You chose to close the program! Bye bye! :)")
            exit()

        else:
            # invalid input.
            print("You typed it wrong! Try again!")