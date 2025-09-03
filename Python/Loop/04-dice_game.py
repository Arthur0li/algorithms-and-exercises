import random

print('Welcome to the dice game!\n')

while True:
    choice = input('Do you want to roll the dice? (y/n): ')
    if choice.lower() == "n":
        print("Okay, the game is over.")
        break
    elif choice.lower() == "y":
        number = random.randint(1, 6)
        print('The dice rolled:', number)
    else:
        print("❌ Error: you must type 'y' or 'n'.")
        print("Let’s try again.")
