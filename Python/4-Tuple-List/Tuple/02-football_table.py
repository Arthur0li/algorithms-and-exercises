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

while True:
    while True:

        try:
            print("\nWelcome to the Brasileirão 2024 table")
            print("You can choose:")
            print("1 - See the teams that qualified for the Copa Libertadores.")
            print("2 - See the teams that qualified for the Copa Sudamericana.")
            print("3 - See the teams that were relegated to the second division.")
            print("4 - See the table.")
            print("5 - See the table in alphabetical order.")

            choice = int(input("Type a number between 1 and 5 to make a choice: "))

            if choice < 1 or choice > 5:
                print("You didn't type a number between 1 and 5. :(")
                continue
            break

        except ValueError:
            print("You didn't type a number. :(")

    if choice == 1:
        print("\nYou chose to view the teams that qualified for the Copa Libertadores. Here they are:")
        for i in teams_position[:8]:
            print(i)

    elif choice == 2:
        print("\nYou chose to view the teams that qualified for the Copa Sudamericana. Here they are:")
        for i in teams_position[8:14]:
            print(i)

    elif choice == 3:
        print("\nYou chose to view the teams that were relegated to the second division. Here they are:")
        for i in teams_position[16:20]:
            print(i)

    elif choice == 4:
        print("\nYou chose to view the table. Here are the teams:")
        for i in range(20):
            i2 = i + 1
            print(i2, teams_position[i])

    else:
        print("\nYou chose to view the table in alphabetical order. Here are the teams:")
        for i in teams_alphabetic:
            print(i)

    while True:
        choice2 = input("\nDo you want to run the program again? (Type 'y' or 'n'): ").lower()

        if choice2 == 'y':
            print("You chose to restart the program! :)")
            break
        elif choice2 == 'n':
            print("You chose to exit. Goodbye! :)")
            exit()
        else:
            print("You didn't type 'y' or 'n'. Please try again!")
