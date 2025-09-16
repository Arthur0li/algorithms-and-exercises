i = 1
while True:
    while True:
        try:
            print("\nWelcome to the numeric pyramid program")
            number = int(input("Enter an integer: "))
            if number <= 0:
                print("You entered a number less than or equal to 0 :(")
                print("Please try again!")
                continue
            break
        except ValueError:
            print("You typed it wrong, please try again!")

    for i in range(1, number+1):
        for j in range(1, i+1):
            print(j, end=" ")
        print()

    while True:
        choice = input("Do you want to run the program again? (y/n): ").lower()
        if choice == "y":
            break
        elif choice == "n":
            print("Program terminated!")
            exit()
        else:
            print("Type 'y' for yes or 'n' for no")
