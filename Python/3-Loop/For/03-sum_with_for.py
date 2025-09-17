while True:  
    result = 0  

    while True:
        try:
            print("\nWelcome to the sum program!")
            print("In this program, you can sum as many numbers as you want!\n")

            quantity = int(input("Enter the number of values you want to sum: "))
            if quantity <= 0:
                print("You entered a number less than or equal to 0 :( ...")
                print("Please try again!")
                continue
            break 
        except ValueError:
            print("You did not enter a number :(")
            print("Please try again!")

    for i in range(quantity):
        while True:
            try:
                number = float(input(f"Enter number {i+1}: "))
                if number <= 0:
                    print("Error: enter a number greater than 0")
                    continue
                result += number
                break  
            except ValueError:
                print("Error: enter a valid number")

    print(f"\nThe sum of the {quantity} numbers is: {result}\n")

    while True:
        choice = input("Do you want to run the program again? (y/n): ").lower()
        if choice == "y":
            break
        elif choice == "n":
            print("Program terminated!")
            exit()
        else:
            print("Type 'y' for yes or 'n' for no")
