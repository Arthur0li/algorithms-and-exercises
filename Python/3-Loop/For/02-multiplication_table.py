while True:

    try:
        i = 0
        number = int(input('Welcome to the multiplication table simulator! Please enter a number: '))
        if number <= 0:
            print("Error :( The number must be greater than 0. Please try again.\n")
            continue

        for i in range(1, 11):
            result = number * i
            print(f"{number} x {i} = {result}")
        
    except ValueError:
        print("Invalid input :(. You need to enter a number!!")
        continue
    
    while True:
        choice = input("Do you want to play again? (y=yes / n=no): ").lower()
        if choice == 'y':
            break 
        elif choice == 'n':
            print("Thanks for playing!")
            exit() 
        else:
            print("Error: you must type 'y' or 'n'. Let's try again.")
