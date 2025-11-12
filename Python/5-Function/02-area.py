def rectangle_square():
    print("\nYou chose rectangle/square!")

    while True:
        try:
            x = float(input("Enter the first side: "))
            if x <= 0:
                print("You entered a side less than or equal to 0, try again\n")
            else:
                print("The first side you entered was", x)
                break
        except ValueError:
            print("You did not enter a number! Try again!\n")
    
    while True:
        try:
            y = float(input("\nEnter the second side: "))
            if y <= 0:
                print("You entered a side less than or equal to 0, try again\n")
            else:
                print("The second side you entered was", y)
                break
        except ValueError:
            print("You did not enter a number! Try again!\n")
    
    print("\nThe area is:", x * y)


def circle():
    print("\nYou chose circle!")

    while True:
        try:
            r = float(input("Enter the radius: "))
            if r <= 0:
                print("You entered a radius less than or equal to 0, try again\n")
            else:
                print("The radius you entered was", r)
                break
        except ValueError:
            print("You did not enter a number! Try again!\n")
    
    print("\nThe area is:", (r ** 2) * 3.14)


def triangle():
    print("\nYou chose triangle!")
    
    while True:
        try:
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
            h = float(input("\nEnter the height of the triangle: "))
            if h <= 0:
                print("You entered a height less than or equal to 0, try again\n")
            else:
                print("The height you entered was", h)
                break
        except ValueError:
            print("You did not enter a number! Try again!\n")

    print("\nThe area is:", (b * h) / 2)


while True:    
    while True:
        print("\nWelcome to the area calculation program! Choose which shape you want to calculate:")
        choice = input("r = Rectangle/Square / c = Circle / t = Triangle ").strip().lower()

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
            print("You typed it wrong, try again")
    
    while True:
        choice_end = input("\nYou reached the end of the program. Do you want to restart? (y/n) ").strip().lower()
        if choice_end == "y":
            print("You chose to restart the program!")
            break
        elif choice_end == "n":
            print("You chose to close the program! Bye bye! :)")
            exit()
        else:
            print("You typed it wrong! Try again!")
