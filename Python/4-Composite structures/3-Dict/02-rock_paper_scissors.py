import random

while True:

    print("\nWelcome to the rock, paper and scissors game!, please chose a option...")
    options = {1: "Paper", 2: "Scissors", 3: "Rock"}
    choice_machine = random.choice(list(options.values()))

    while True:
        try:
            choice_user = int(input("\nChoose one option: 1-Paper, 2-Scissors, 3-Rock: "))
            if choice_user not in options:
                print("You didn't choose one of the options...")
                print("Please try again!")
            else:
                break
        except ValueError:
            print("You did not enter a number :(")
            print("Please try again!")

    print("\nYou chose", options[choice_user])
    print("The machine chose", choice_machine)

    if choice_machine == options[choice_user]:
        print("It's a tie!")
    elif (choice_machine == "Scissors" and options[choice_user] == "Paper") or \
         (choice_machine == "Paper" and options[choice_user] == "Rock") or \
         (choice_machine == "Rock" and options[choice_user] == "Scissors"):
        print("The machine won!")
    else:
        print("You won!")
    
    while True:
        choice = input("\nDo you want to restart the program? (y=yes/n=no): ")
        if choice.lower() == "y":
            print("You chose to restart the program!")
            break
        elif choice.lower() == "n":
            print("You chose to exit the program, goodbye! :)")
            exit()
        else:
            print("You typed it wrong, try again!")