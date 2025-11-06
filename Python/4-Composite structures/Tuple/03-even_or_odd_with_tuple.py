while True:
    all_numbers = ()
    tuple_even = ()
    tuple_odd = ()

    while True:
        try:
            quantity = int(input("\nEnter the quantity of numbers you want to add: "))
            break
        except ValueError:
            print("You did not enter a number, what a pity :(")

    for i in range(quantity):
        number = int(input("Enter a number: "))
        all_numbers = all_numbers + (number,)

    for i in range(quantity):
        if tuple[i] % 2 == 0:
            tuple_even = tuple_even + (tuple[i],)
        else:
            tuple_odd = tuple_odd + (tuple[i],)

    print("\nHere is the complete tuple:", tuple)
    print("Here is the tuple even numbers:", tuple_even)
    print("Here is the tuple odd numbers:", tuple_odd)

    while True:
        choice = input("\nDo you want to restart the program? (y/n): ")

        if choice == 'y':
            print("You chose to restart.")
            break

        elif choice == 'n':
            print("You chose to finish the program.")
            exit()

        else:
            print("You typed wrong :(")