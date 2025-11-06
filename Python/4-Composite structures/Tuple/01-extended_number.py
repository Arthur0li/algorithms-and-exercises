while True:
    extended_numbers = ('Zero', 'One', 'Two', 'Three', 'Four', 'Five', 'Six', 'Seven', 'Eight', 'Nine', 'Ten',
                        'Eleven','Twelve', 'Thirteen', 'Fourteen', 'Fifteen', 'Sixteen', 'Seventeen',
                        'Eighteen', 'Nineteen', 'Twenty')
    print("\nWelcome to the program!")
    while True:
        try:
            number = int(input("Enter an integer between 0 and 20: "))
            if number < 0 or number > 20:
                print("Error, you entered a number outside the allowed range.")
                continue
            break

        except ValueError:
            print("You did not enter a number, what a pity :(")

    print("The number you entered was:", extended_numbers[number])

    while True:
        choice = input("\nDo you want to run the code again? (Enter y or n) ").lower()

        if choice == 'y':
            print("You chose to restart the program!")
            break
        elif choice == 'n':
            print("You chose to end the program! Thank you for using it :)")
            exit()
        else:
            print("You did not enter y or n :(")
