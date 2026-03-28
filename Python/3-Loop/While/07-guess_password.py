# import the random module to generate a random password.
import random 

while True:

    # generate a list with numbers 1, 2 and 3 in random order (no repetition).
    password_numbers = random.sample([1, 2, 3], 3)

    # convert the list of numbers into a string password.
    password = ''.join(str(num) for num in password_numbers)

    print("\nWelcome to the Password Guessing Game!")
    print("Your challenge is to guess a 3-digit password (numbers are 1, 2, 3, all different).")

    # this variable will count how many attempts the user makes.
    attempts = 0

    while True:
        # ask the user to guess the password.
        guess = input("Enter your guess: ")

        # increase the number of attempts by 1.
        attempts += 1

        # if the guess is correct, we show a success message and stop the loop.
        if guess == password:
            print("Congratulations! You guessed the password:", password)
            print("It took you", attempts, "attempts.")
            break
        else:
            # if the guess is wrong, we ask the user to try again.
            print("Wrong guess, try again...\n")

    while True:
        # ask the user if they want to play again.
        choice = input("Do you want to play again? (y=yes / n=no): ").lower()

        # if the user types 'y', the game restarts.
        if choice == 'y':
            break
        elif choice == 'n':
            # if the user types 'n', we end the program.
            print("Thanks for playing! Goodbye :)")
            exit()
        else:
            # if the user types something else, we show an error message.
            print("❌ Error: you must type 'y' or 'n'. Let's try again.")