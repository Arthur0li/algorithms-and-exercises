# this loop keeps the program running until the user decides to stop.
while True:

    # create two sets to store the numbers.
    A = set()
    B = set()

    print("\nWelcome to the set math operations program!\n")

    while True:
        try:
            # ask how many elements the first set will have.
            quantidade = int(input("Enter the number of elements for the first set: "))

            # check if the number is valid.
            if quantidade > 0:
                print("You entered", quantidade, "times!\n")
                break
            else:
                print("You entered a number less than or equal to zero! Try again!\n")

        except ValueError:
            # if the user types something invalid, show an error message.
            print("You did not enter an integer! Try again!\n")

    print("Now it's time for you to enter the elements of the first set!")

    # collect elements for set A.
    for i in range(quantidade):
        while True:
            try:
                number = int(input("Enter a number! "))

                # only accept positive numbers.
                if number > 0:
                    A.add(number)
                    break
                else:
                    print("You entered a number less than or equal to zero! Try again!\n")

            except ValueError:
                print("You did not enter an integer!\n")

    print("Here is the first set:", A)

    print("\nNow it's time for you to enter the elements of the second set!")

    while True:
        try:
            # ask how many elements the second set will have.
            quantidade = int(input("Enter the number of elements for the second set: "))

            if quantidade > 0:
                print("You entered", quantidade, "times!\n")
                break
            else:
                print("You entered a number less than or equal to zero! Try again!\n")

        except ValueError:
            print("You did not enter an integer! Try again!\n")

    print("Now it's time for you to enter the elements of the second set!")

    # collect elements for set B.
    for i in range(quantidade):
        while True:
            try:
                number = int(input("Enter a number! "))

                # only accept positive numbers.
                if number > 0:
                    B.add(number)
                    break
                else:
                    print("You entered a number less than or equal to zero! Try again!\n")

            except ValueError:
                print("You did not enter an integer!\n")

    print("Here is the second set:", B)

    print("\nNow let's show the results of the operations!\n")

    # show set operations results.
    print("Here is the union of the sets: ", A | B)
    print("Here is the intersection of the sets: ", A & B)
    print("Here are the elements present in A but not in B: ", A - B)
    print("Here are the elements present in B but not in A: ", B - A)
    print("Here is the symmetric difference: ", A ^ B)

    while True:
        # ask the user if they want to exit or restart.
        choice = input("\nDo you want to exit the program? (y/n) ")

        # if the user types 'y', we end the program.
        if choice == "y":
            print("\nYou chose to exit the program!")
            print("Bye! :)")
            exit()

        elif choice == "n":
            # if the user types 'n', we restart the program.
            print("You chose to restart the program!")
            break

        else:
            # if the user types something else, show an error message.
            print("You typed it wrong, please enter again!")