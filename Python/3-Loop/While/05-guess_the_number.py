# import the random module to generate a random number for the game.
import random

# generate a random number between 1 and 100.
number = random.randint(1, 100)

print('Welcome to the number guessing game!\n')

# this variable will count how many attempts the user makes.
attempts = 0

while True:
    # we ask the user to type a number.
    try:
        guess = int(input('Type a number: '))
    except ValueError:
        # if the user types something that is not a number, we show an error message.
        print('You did not type a number, please try again...\n')
        continue

    # increase the number of attempts by 1.
    attempts += 1

    # if the user guesses the correct number, we end the game.
    if guess == number:
        print(f'Congratulations, you got it right in {attempts} attempts! :)')
        break
    else:
        # if the guess is wrong, we tell the user.
        print('Wrong guess!')

        # if the guess is lower than the number, we say that it is lower.
        if guess < number:
            print('The number you typed is lower.\n')
        else:
            # if the guess is higher than the number, we say that it is higher.
            print('The number you typed is higher.\n')