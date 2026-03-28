# a while loop that will run as long as the user wants
while True:

    # Try to receive a number; if the number isn't greater than 0 or the user doesn't type a number, the code will display a error message and try again
    try:
        n = int(input("Type a number: "))
        # If the user type a positive number, the code will display all the numbers until it reaches the number entered by the user
        for i in range(0, n + 1):
            print(i)
        if n <= 0:
            print("Error :( the number must be greater than 0. Try again.\n")
            continue
    except ValueError:
        print("Você não digitou um número, tente novamente.\n")
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
