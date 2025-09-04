while True:
    try:
        n = int(input("Type a number: "))
        for i in range(0, n + 1):
            print(i)

    except ValueError:
        print("Você não digitou um número, tente novamente.\n")
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
