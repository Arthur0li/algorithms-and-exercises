# import the random module to allow the machine to make a random choice.
import random

# this loop keeps the program running until the user decides to stop.
while True:

    print("\nWelcome to the rock, paper and scissors game!, please chose a option...")

    # dictionary with the available options.
    options = {1: "Paper", 2: "Scissors", 3: "Rock"}

    # the machine randomly chooses one of the options.
    choice_machine = random.choice(list(options.values()))

    while True:
        try:
            # ask the user to choose an option by number.
            choice_user = int(input("\nChoose one option: 1-Paper, 2-Scissors, 3-Rock: "))

            # check if the chosen number is valid.
            if choice_user not in options:
                print("You didn't choose one of the options...")
                print("Please try again!")
            else:
                break
        except ValueError:
            # if the user types something that is not a number, show an error message.
            print("You did not enter a number :(")
            print("Please try again!")

    # show the choices.
    print("\nYou chose", options[choice_user])
    print("The machine chose", choice_machine)

    # check the result of the game.
    if choice_machine == options[choice_user]:
        print("It's a tie!")

    # conditions where the machine wins.
    elif (choice_machine == "Scissors" and options[choice_user] == "Paper") or \
         (choice_machine == "Paper" and options[choice_user] == "Rock") or \
         (choice_machine == "Rock" and options[choice_user] == "Scissors"):
        print("The machine won!")

    # if it's not a tie or machine win, the user wins.
    else:
        print("You won!")
    
    while True:
        # ask the user if they want to restart the game.
        choice = input("\nDo you want to restart the program? (y=yes/n=no): ")

        # if the user types 'y', the game restarts.
        if choice.lower() == "y":
            print("You chose to restart the program!")
            break

        elif choice.lower() == "n":
            # if the user types 'n', we end the program.
            print("You chose to exit the program, goodbye! :)")
            exit()

        else:
            # if the user types something else, show an error message.
            print("You typed it wrong, try again!")