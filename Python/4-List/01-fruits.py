while True:
    i = 0
    while True:
        try:
            print("Welcome to the fruit list!")
            quant = int(input("To start, enter the number of fruits you want to add: "))
            if quant <= 0:
                print("\nYou entered a number less than or equal to 0 :(")
                print("Try again!\n")    
                continue

        except ValueError:
            print("\nYou did not enter a valid number :(")
            print("Try again!\n")
            continue

        list = []

        for i in range(quant):
            fruits = input("Enter a fruit: ")
            list.append(fruits)

        print("\nFinal list:")
        print(list, "\n")

        while True:
            choice = input("Do you want to restart the program? (Type y/n): ").lower()
            if choice == "y":
                print("You chose to restart the program!\n")
                break
            elif choice == "n":
                print("You chose to close the program!\n")
                exit()
            else:
                print("Type 'y' for yes or 'n' for no")
