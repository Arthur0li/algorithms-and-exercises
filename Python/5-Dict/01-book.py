while True:
    dict_book = {"Title": "", "Author": "", "Year": "", "Pages": ""}

    dict_book["Title"] = input("Enter a title: ")
    dict_book["Author"] = input("Enter an author: ")
    while True:
        try:
            dict_book["Year"] = int(input("Enter a year: "))
            break
        except ValueError:
            print("You typed it wrong, you need to enter a number")
            
    while True:
        try:
            dict_book["Pages"] = input("Enter the number of pages: ")
            break
        except ValueError:
            print("You typed it wrong, you need to enter a number")

    print("\nDictionary values:", dict_book.values())
    print("Dictionary keys:", dict_book.keys())
    print("Dictionary items:", dict_book.items(), "\n")

    print("Organized:")
    for k, v in dict_book.items():
        print(k, "→", v)

    while True:
        choice = input("\nDo you want to restart the program? (y/n): ")
        if choice == 'y':
            print("You chose to restart the program :)")
            break
        elif choice == 'n':
            print("Bye Bye :)")
            exit()
        else:
            print("You typed it wrong :(")