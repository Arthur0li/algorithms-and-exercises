# tuple with the teams in their ranking positions.
teams_position = (
    "Botafogo",
    "Palmeiras",
    "Flamengo",
    "Fortaleza",
    "Internacional",
    "São Paulo",
    "Corinthians",
    "Bahia",
    "Cruzeiro",
    "Vasco da Gama",
    "EC Vitória",
    "Atlético-MG",
    "Fluminense",
    "Grêmio",
    "Juventude",
    "Bragantino",
    "Athletico-PR",
    "Criciúma",
    "Atlético-GO",
    "Cuiabá",
)

# tuple with the teams in alphabetical order.
teams_alphabetic = (
    "Athletico-PR",
    "Atlético-GO",
    "Atlético-MG",
    "Bahia",
    "Botafogo",
    "Bragantino",
    "Corinthians",
    "Criciúma",
    "Cruzeiro",
    "Cuiabá",
    "EC Vitória",
    "Flamengo",
    "Fluminense",
    "Fortaleza",
    "Grêmio",
    "Internacional",
    "Juventude",
    "Palmeiras",
    "São Paulo",
    "Vasco da Gama",
)

# this loop keeps the program running until the user decides to stop.
while True:
    while True:
        try:
            # show the menu options to the user.
            print("\nWelcome to the Brasileirão 2024 table")
            print("You can choose:")
            print("1 - See the teams that qualified for the Copa Libertadores.")
            print("2 - See the teams that qualified for the Copa Sudamericana.")
            print("3 - See the teams that were relegated to the second division.")
            print("4 - See the table.")
            print("5 - See the table in alphabetical order.")

            # ask the user to choose an option.
            choice = int(input("Type a number between 1 and 5 to make a choice: "))

            # check if the option is valid.
            if choice < 1 or choice > 5:
                print("You didn't type a number between 1 and 5. :(")
                continue
            break

        except ValueError:
            # if the user types something that is not a number, show an error message.
            print("You didn't type a number. :(")

    # option 1: show teams qualified for Libertadores.
    if choice == 1:
        print("\nYou chose to view the teams that qualified for the Copa Libertadores. Here they are:")
        for i in teams_position[:8]:
            print(i)

    # option 2: show teams qualified for Sudamericana.
    elif choice == 2:
        print("\nYou chose to view the teams that qualified for the Copa Sudamericana. Here they are:")
        for i in teams_position[8:14]:
            print(i)

    # option 3: show relegated teams.
    elif choice == 3:
        print("\nYou chose to view the teams that were relegated to the second division. Here they are:")
        for i in teams_position[16:20]:
            print(i)

    # option 4: show full table with positions.
    elif choice == 4:
        print("\nYou chose to view the table. Here are the teams:")
        for i in range(20):
            i2 = i + 1
            print(i2, teams_position[i])

    # option 5: show teams in alphabetical order.
    else:
        print("\nYou chose to view the table in alphabetical order. Here are the teams:")
        for i in teams_alphabetic:
            print(i)

    while True:
        # ask the user if they want to run the program again.
        choice2 = input("\nDo you want to run the program again? (Type 'y' or 'n'): ").lower()

        # if the user types 'y', the program restarts.
        if choice2 == 'y':
            print("You chose to restart the program! :)")
            break
        elif choice2 == 'n':
            # if the user types 'n', we end the program.
            print("You chose to exit. Goodbye! :)")
            exit()
        else:
            # if the user types something else, show an error message.
            print("You didn't type 'y' or 'n'. Please try again!")