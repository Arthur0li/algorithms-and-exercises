while True:
    names_set = set()
    print("\nWelcome to the name-adding program using a set")
    while True:
        try:
            quantity = int(input("Enter the number of names you want to write: "))
            if quantity > 0:
                print("You chose", quantity, "times!\n")
                break
            else:
                print("You entered a number less than or equal to zero, try again!\n")
        except ValueError:
            print("You did not enter an integer! Try again!\n")

    print("Now it's time to add the names to the set! (Remember that duplicate names will not appear.)")
    for i in range(quantity):
        name = input("Enter a name: ")
        names_set.add(name)

    print("\nHere are the names you added!")
    for names in names_set:
        print(names)

    while True:
        choice = input("\nDo you want to restart the program? (y/n): ")
        if choice == "y":
            print("You chose to restart the program!")
            break
        elif choice == "n":
            print("You chose to end the program, bye! :)")
            exit()
        else:
            print("You entered it incorrectly, try again!")
