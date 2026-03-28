# this loop keeps the program running until the user decides to stop.
while True:

    # create a list to store the numbers and a variable for the result.
    list_of_numbers = []
    result = 0

    print("\nWelcome to the sum program")

    while True:
        try:
            # ask the user how many numbers they want to enter.
            quantity = int(input("Enter how many times the program will repeat: "))
            break
        except ValueError:
            # if the user types something that is not a number, show an error message.
            print("You did not enter a number :(\n")

    # collect the numbers from the user.
    for i in range(quantity):
        while True:
            try:
                # add each number to the list.
                list_of_numbers.append(int(input("Enter a number: ")))
                break
            except ValueError:
                # if the user types something invalid, show an error message.
                print("You did not enter a number :(")

    # calculate and show the sum of all numbers in the list.
    print("\nHere is the sum:", sum(list_of_numbers))
    
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