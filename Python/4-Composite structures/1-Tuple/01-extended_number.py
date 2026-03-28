# this loop keeps the program running until the user decides to stop.
while True:

    # tuple that stores numbers written in words from 0 to 20.
    extended_numbers = (
        'Zero', 'One', 'Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine', 'Ten',
        'Eleven', 'Twelve', 'Thirteen', 'Fourteen', 'Fifteen', 'Sixteen', 'Seventeen',
        'Eighteen', 'Nineteen', 'Twenty'
    )

    print("\nWelcome to the program!")

    while True:
        try:
            # ask the user to enter a number between 0 and 20.
            number = int(input("Enter an integer between 0 and 20: "))

            # check if the number is within the allowed range.
            if number < 0 or number > 20:
                print("Error, you entered a number outside the allowed range.")
                continue

            break

        except ValueError:
            # if the user types something that is not a number, we show an error message.
            print("You did not enter a number, what a pity :(")

    # show the number written in words using the tuple index.
    print("The number you entered was:", extended_numbers[number])

    while True:
        # ask the user if they want to run the program again.
        choice = input("\nDo you want to run the code again? (Enter y or n) ").lower()

        # if the user types 'y', the program restarts.
        if choice == 'y':
            print("You chose to restart the program!")
            break
        elif choice == 'n':
            # if the user types 'n', we end the program.
            print("You chose to end the program! Thank you for using it :)")
            exit()
        else:
            # if the user types something else, we show an error message.
            print("You did not enter y or n :(")