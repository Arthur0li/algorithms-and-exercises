# this loop keeps the program running until the user decides to stop.
while True:

    # list to store all players.
    all_players = []

    # variable to count how many players were added.
    num_players = 0

    while True:

        # variable to count matches.
        match_count = 0

        print("\nWelcome to the player analysis program! Please type the information below.\n")

        # ask for the player's name.
        name = input("Enter the player's name: ")

        while True:
            try:
                # ask how many matches the player played.
                matches = int(input("Enter how many times this player played: "))
                break
            except ValueError:
                # show error if input is invalid.
                print("Invalid input. Please enter an integer for the number of matches.")

        # create a dictionary to store player data.
        player = {
            "name": name,
            "matches_count": matches,
            "goals_matches": [],
            "assists_matches": [],
            "total_goals": 0,
            "total_assists": 0
        }

        # collect match data.
        for i in range(matches):
            match_count += 1
            print("\nLet's go to the information of", match_count, "° match!")

            while True:
                try:
                    # ask number of goals in the match.
                    goals = int(input("Enter the number of goals in this match: "))
                    break
                except ValueError:
                    print("Invalid input. Please enter an integer for goals.")

            # store goals.
            player["goals_matches"].append(goals)

            while True:
                try:
                    # ask number of assists in the match.
                    assist = int(input("Enter the number of assists in this match: "))
                    break
                except ValueError:
                    print("Invalid input. Please enter an integer for assists.")

            # store assists.
            player["assists_matches"].append(assist)

            # update totals.
            player["total_goals"] = sum(player["goals_matches"])
            player["total_assists"] = sum(player["assists_matches"])

        # add player to the list.
        all_players.append(player)

        # increase player count.
        num_players += 1

        # show player summary.
        print("\nThe player", player["name"], "played", player["matches_count"], "matches")

        for i in range(match_count):
            print("In match", (i+1), "scored", player["goals_matches"][i],
                  "goals and", player["assists_matches"][i], "assists")

        print("\nIn total there were", player["total_goals"],
              "goals and", player["total_assists"], "assists.")

        while True:
            # ask if the user wants to add another player.
            choice = input("\nDo you want to add another player? (y/n) ")

            if choice == "y":
                print("You decided to add another player!")
                break

            elif choice == "n":
                # show all players in a formatted table.
                print("You decided to close the program! See the players you added:\n")

                print("{:<15}{:<12}{:<15}{:<15}{:<12}{:<15}".format(
                    "Name", "Matches", "Goals", "Assists", "Total Goals", "Total Assists"))
                print("-" * 80)

                for i in range(num_players):
                    print("{:<15}{:<12}{:<15}{:<15}{:<12}{:<15}".format(
                        all_players[i]["name"],
                        all_players[i]["matches_count"],
                        str(all_players[i]["goals_matches"]),
                        str(all_players[i]["assists_matches"]),
                        all_players[i]["total_goals"],
                        all_players[i]["total_assists"]
                    ))
                break
            else:
                # invalid input.
                print("You didn't type y or n :(")

        # if the user chose to stop adding players, exit this loop.
        if choice == "n":
            break

    while True:
        # ask if the user wants to restart the program.
        choice = input("\nDo you want to restart the program? (y=yes/n=no): ")

        if choice.lower() == "y":
            print("You chose to restart the program!")
            break

        elif choice.lower() == "n":
            # end the program.
            print("You chose to exit the program, goodbye! :)")
            exit()

        else:
            # invalid input.
            print("You typed it wrong, try again!")