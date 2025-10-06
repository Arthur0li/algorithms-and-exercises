while True:
    list = []
    while True:
        try:
            quantity = int(input("\nEnter how many times you want to repeat the program: "))
            break
        except ValueError:
            print("You typed it wrong, you need to enter a number.")

    for i in range(quantity):
        while True:
            try:
                list.append(int(input("Enter a number: ")))
                break
            except ValueError:
                print("You typed it wrong, you need to enter a number.")

    list.sort()
    print("Here are the sorted numbers:", list)

    while True:
        choice = input("Do you want to restart the program? (y/n): ")

        if choice == 'y':
            print("You chose to restart the program :)")
            break
        
        elif choice == 'n':
            print("You chose to finish the program.")
            exit()

        else:
            print("You typed it wrong :(")