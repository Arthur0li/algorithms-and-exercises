# a while loop that will run as long as the user wants
while True:

    # Try to receive a number; if the number isn't greater than 0 or the user doesn't type a number, the code will display a error message and try again
    try:
        i = 0
        number = int(input('Welcome to the multiplication table simulator! Please enter a number: '))
        if number <= 0:
            print("Error :( The number must be greater than 0. Please try again.\n")
            continue
        
        # If the user type a positive number, the code will display all the multiplication table of the number entered by the user until it reaches 10
        for i in range(1, 11):
            result = number * i
            print(f"{number} x {i} = {result}")
        
    except ValueError:
        print("Invalid input :(. You need to enter a number!!")
        continue
    
    # a while loop that will ask the user if they want to restart the code
    while True:
        choice = input("Do you want to play again? (y=yes / n=no): ").lower()
        if choice == 'y':
            break 
        elif choice == 'n':
            print("Thanks for playing!")
            exit() 
        else:
            print("Error: you must type 'y' or 'n'. Let's try again.")
