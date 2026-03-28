# import the random module to generate random numbers for the dice rolls.
import random

print('Welcome to the dice game!\n')

while True:
    # we will ask the user if they want to roll the dice.
    choice = input('Do you want to roll the dice? (y/n): ')

    # If they type "n", we will end the game.
    if choice.lower() == "n":
        print("Okay, the game is over.")
        break

    # If they type "y", we will roll the dice and print the result.
    elif choice.lower() == "y":
        number = random.randint(1, 6)
        print('The dice rolled:', number)

    # If they type something that isn't "y" or "n", we will print an error message and ask them to try again.
    else:
        print("❌ Error: you must type 'y' or 'n'.")
        print("Let’s try again.")
