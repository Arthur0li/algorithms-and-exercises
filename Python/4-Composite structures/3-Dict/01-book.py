# this loop keeps the program running until the user decides to stop.
while True:

    print("\nWelcome to the book information program\n")

    # create a dictionary to store book information.
    dict_book = {"Title": "", "Author": "", "Year": "", "Pages": ""}

    # ask the user to enter the book title and author.
    dict_book["Title"] = input("Enter a title: ")
    dict_book["Author"] = input("Enter an author: ")

    while True:
        try:
            # ask the user to enter the year (must be a number).
            dict_book["Year"] = int(input("Enter a year: "))
            break
        except ValueError:
            # if the user types something invalid, show an error message.
            print("You typed it wrong, you need to enter a number")

    while True:
        try:
            # ask the user to enter the number of pages.
            dict_book["Pages"] = input("Enter the number of pages: ")
            break
        except ValueError:
            # this error is unlikely here, but we keep the pattern.
            print("You typed it wrong, you need to enter a number")

    # show dictionary values, keys, and items.
    print("\nDictionary values:", dict_book.values())
    print("Dictionary keys:", dict_book.keys())
    print("Dictionary items:", dict_book.items(), "\n")

    # show the dictionary in an organized way.
    print("Organized:")
    for k, v in dict_book.items():
        print(k, "→", v)

    while True:
        # ask the user if they want to restart the program.
        choice = input("\nDo you want to restart the program? (y/n): ")

        # if the user types 'y', the program restarts.
        if choice == 'y':
            print("You chose to restart the program :)")
            break

        elif choice == 'n':
            # if the user types 'n', we end the program.
            print("Bye Bye :)")
            exit()

        else:
            # if the user types something else, show an error message.
            print("You typed it wrong :(")