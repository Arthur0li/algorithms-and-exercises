# welcome message and instructions for the user
print('Welcome to the electronic piggy bank, this program will add the numbers you type until you type "exit".\n')
print('If you type a letter the program will indicate that you did not type a number and continue adding numbers.\n')

# the result variable will store the total value of the piggy bank.
result = 0


while True:
    # we will ask the user to type a value to add to the piggy bank.
    money_string = input("Type a value you want to add: ")

    # If the user types "exit", we will print the total value stored and break the loop.
    if money_string.lower() == "exit":
        print("\nThe total value stored was:", result)
        break

    # If the user types something that isn't a number, we will print an error message and continue the loop.
    try:
        money_float = float(money_string)
        result += money_float
    except ValueError:
        print("❌ Error: You must type a number or 'exit'.")
