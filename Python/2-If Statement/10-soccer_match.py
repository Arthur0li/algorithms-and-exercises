team_1 = input("Type the name of the home team: ")
team_2 = input("Type the name of the visiting team: ")

number_1 = int(input("\nNow type number of goals scored by the home team: "))
number_2 = int(input("Now type number of goals scored by the visiting team: "))

if number_1 > number_2:
    print("\nThe", team_1, "won", number_1, "-", number_2, "against", team_2)

elif number_2 > number_1:
    print("\nThe", team_2, "won", number_2, "-", number_1, "against", team_1)

else:
    print("No team won, there was a", number_1, "-", number_2, "draw")