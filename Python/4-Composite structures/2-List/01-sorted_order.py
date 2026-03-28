# this loop keeps the program running until the user decides to stop.
while True:

    # create an empty list to store the numbers.
    list = []

    while True:
        try:
            # ask the user how many numbers they want to enter.
            quantity = int(input("\nEnter how many times you want to repeat the program: "))
            break
        except ValueError:
            # if the user types something that is not a number, show an error message.
            print("You typed it wrong, you need to enter a number.")

    # collect the numbers from the user.
    for i in range(quantity):
        while True:
            try:
                # add each number to the list.
                list.append(int(input("Enter a number: ")))
                break
            except ValueError:
                # if the user types something invalid, show an error message.
                print("You typed it wrong, you need to enter a number.")

    # sort the list in ascending order.
    list.sort()
    print("\nHere are the sorted numbers:", list)

    # sort the list in descending order.
    list.sort(reverse=True)
    print("Here are the numbers sorted backwards:", list)

    while True:
        # ask the user if they want to restart the program.
        choice = input("\nDo you want to restart the program? (y/n): ")

        # if the user types 'y', the program restarts.
        if choice == 'y':
            print("You chose to restart the program :)")
            break
        
        elif choice == 'n':
            # if the user types 'n', we end the program.
            print("You chose to finish the program.")
            exit()

        else:
            # if the user types something else, show an error message.
            print("You typed it wrong :(")