# the choice variable will store the user's answer to whether they want to type a number or not.
choice = ""

# The loop will continue until the user types "yes" or "no"
while choice != "yes" and choice != "no":
    choice = input("Do you want to type a number? (Type 'yes' or 'no'): ").lower()
    if choice != "yes" and choice != "no":
        print("Invalid answer, try again.\n")

# If the user types "yes", we will ask them to type a number. We will use a try-except block to handle the case where the user types something that isn't a number.
if choice == "yes":
    print("You chose:", choice)

    while True:
        try:
            number = float(input("Type a number, please: "))
            print("You typed:", number)
            break
        except ValueError:
            print("This isn't a number! Try again.\n")

# If the user types "no", we will print a goodbye message.
else:
    print("Ok, see you next time!")