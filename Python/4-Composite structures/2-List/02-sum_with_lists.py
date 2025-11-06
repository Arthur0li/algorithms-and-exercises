while True:
    list_of_numbers = []
    result = 0

    print("\nWelcome to the sum program")

    while True:
        try:
            quantity = int(input("Enter how many times the program will repeat: "))
            break
        except ValueError:
            print("You did not enter a number :(\n")

    for i in range(quantity):
        while True:
            try:
                list_of_numbers.append(int(input("Enter a number: ")))
                break
            except ValueError:
                print("You did not enter a number :(")

    print("\nHere is the sum:", sum(list_of_numbers))
    
    while True:
        choice = input("\nDo you want to restart the program? (y/n): ")

        if choice == 'y':
            print("You chose to restart the program :)")
            break
        
        elif choice == 'n':
            print("You chose to finish the program.")
            exit()

        else:
            print("You typed it wrong :(")
