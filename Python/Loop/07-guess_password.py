import random 

while True:

    password_numbers = random.sample([1, 2, 3], 3)  
    password = ''.join(str(num) for num in password_numbers)  

    print("\nWelcome to the Password Guessing Game!")
    print("Your challenge is to guess a 3-digit password (numbers are 1, 2, 3, all different).")

    attempts = 0  

    while True:
        guess = input("Enter your guess: ")
        attempts += 1  

        if guess == password:
            print("Congratulations! You guessed the password:", password)
            print("It took you", attempts, "attempts.")
            break  
        else:
            print("Wrong guess, try again...\n")

    while True:
        choice = input("Do you want to play again? (y=yes / n=no): ").lower()
        if choice == 'y':
            break  
        elif choice == 'n':
            print("Thanks for playing! Goodbye :)")
            exit()  
        else:
            print("❌ Error: you must type 'y' or 'n'. Let's try again.")