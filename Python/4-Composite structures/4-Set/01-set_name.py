# this loop keeps the program running until the user decides to stop.
while True:

    # create a set to store unique names.
    names_set = set()

    print("\nWelcome to the name-adding program using a set")

    while True:
        try:
            # ask how many names the user wants to enter.
            quantity = int(input("Enter the number of names you want to write: "))

            # check if the number is greater than 0.
            if quantity > 0:
                print("You chose", quantity, "times!\n")
                break
            else:
                print("You entered a number less than or equal to zero, try again!\n")

        except ValueError:
            # if the user types something invalid, show an error message.
            print("You did not enter an integer! Try again!\n")

    print("Now it's time to add the names to the set! (Remember that duplicate names will not appear.)")

    # collect names from the user.
    for i in range(quantity):
        name = input("Enter a name: ")

        # add the name to the set (duplicates are ignored automatically).
        names_set.add(name)

    print("\nHere are the names you added!")

    # display all names in the set.
    for names in names_set:
        print(names)

    while True:
        # ask the user if they want to restart the program.
        choice = input("\nDo you want to restart the program? (y/n): ")

        # if the user types 'y', the program restarts.
        if choice == "y":
            print("You chose to restart the program!")
            break

        elif choice == "n":
            # if the user types 'n', we end the program.
            print("You chose to end the program, bye! :)")
            exit()

        else:
            # if the user types something else, show an error message.
            print("You entered it incorrectly, try again!")