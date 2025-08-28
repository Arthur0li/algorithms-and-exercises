choice = ""

while choice != "yes" and choice != "no":
    choice = input("Do you want to type a number? (Type 'yes' or 'no'): ").lower()
    if choice != "yes" and choice != "no":
        print("Invalid answer, try again.\n")

if choice == "yes":
    print("You chose:", choice)

    while True:
        try:
            number = float(input("Type a number, please: "))
            print("You typed:", number)
            break
        except ValueError:
            print("This isn't a number! Try again.\n")

else:
    print("Ok, see you next time!")