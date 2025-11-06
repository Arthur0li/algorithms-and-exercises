while True:
    all_players = []
    num_players = 0

    while True:
        match_count = 0

        print("\nWelcome to the player analysis program! Please type the information below.\n")
        name = input("Enter the player's name: ")

        while True:
            try:
                matches = int(input("Enter how many times this player played: "))
                break
            except ValueError:
                print("Invalid input. Please enter an integer for the number of matches.")

        player = {"name": name,
                  "matches_count": matches,
                  "goals_matches": [],
                  "assists_matches": [],
                  "total_goals": 0,
                  "total_assists": 0}

        for i in range(matches):
            match_count += 1
            print("\nLet's go to the information of", match_count, "° match!")

            while True:
                try:
                    goals = int(input("Enter the number of goals in this match: "))
                    break
                except ValueError:
                    print("Invalid input. Please enter an integer for goals.")

            player["goals_matches"].append(goals)

            while True:
                try:
                    assist = int(input("Enter the number of assists in this match: "))
                    break
                except ValueError:
                    print("Invalid input. Please enter an integer for assists.")

            player["assists_matches"].append(assist)

            player["total_goals"] = sum(player["goals_matches"])
            player["total_assists"] = sum(player["assists_matches"])

        all_players.append(player)
        num_players += 1
        print("\nThe player", player["name"], "played", player["matches_count"], "matches")
        for i in range(match_count):
            print("In match", (i+1), "scored", player["goals_matches"][i], "goals and", player["assists_matches"][i], "assists")

        print("\nIn total there were", player["total_goals"], "goals and", player["total_assists"], "assists.")

        while True:
            choice = input("\nDo you want to add another player? (y/n) ")
            if choice == "y":
                print("You decided to add another player!")
                break
            elif choice == "n":
                print("You decided to close the program! See the players you added:\n")

                print("{:<15}{:<12}{:<15}{:<15}{:<12}{:<15}".format("Name", "Matches", "Goals", "Assists", "Total Goals", "Total Assists"))
                print("-" * 80)

                for i in range(num_players):
                    print("{:<15}{:<12}{:<15}{:<15}{:<12}{:<15}".format(
                        all_players[i]["name"],
                        all_players[i]["matches_count"],
                        str(all_players[i]["goals_matches"]),
                        str(all_players[i]["assists_matches"]),
                        all_players[i]["total_goals"],
                        all_players[i]["total_assists"]))
                break
            else:
                print("You didn't type y or n :(")

        if choice == "n":
            break

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
