# this loop keeps the program running until the user decides to stop.
while True:

    # tuples to store all numbers, even numbers, and odd numbers.
    all_numbers = ()
    tuple_even = ()
    tuple_odd = ()

    while True:
        try:
            # ask the user how many numbers they want to enter.
            quantity = int(input("\nEnter the quantity of numbers you want to add: "))
            break
        except ValueError:
            # if the user types something that is not a number, show an error message.
            print("You did not enter a number, what a pity :(")

    # collect the numbers from the user and store them in a tuple.
    for i in range(quantity):
        number = int(input("Enter a number: "))
        all_numbers = all_numbers + (number,)

    # separate the numbers into even and odd tuples.
    for i in range(quantity):
        # check if the number is even.
        if all_numbers[i] % 2 == 0:
            tuple_even = tuple_even + (all_numbers[i],)
        else:
            # if the number is odd.
            tuple_odd = tuple_odd + (all_numbers[i],)

    # show all results to the user.
    print("\nHere is the complete tuple:", all_numbers)
    print("Here is the tuple even numbers:", tuple_even)
    print("Here is the tuple odd numbers:", tuple_odd)

    while True:
        # ask the user if they want to restart the program.
        choice = input("\nDo you want to restart the program? (y/n): ")

        # if the user types 'y', the program restarts.
        if choice == 'y':
            print("You chose to restart.")
            break

        elif choice == 'n':
            # if the user types 'n', we end the program.
            print("You chose to finish the program.")
            exit()

        else:
            # if the user types something else, show an error message.
            print("You typed wrong :(")