print('Welcome to the electronic piggy bank, this program will add the numbers you type until you type "exit".\n')
print('If you type a letter the program will indicate that you did not type a number and continue adding numbers.\n')

result = 0

while True:
    money_string = input("Type a value you want to add: ")

    if money_string.lower() == "exit":
        print("\nThe total value stored was:", result)
        break

    try:
        money_float = float(money_string)
        result += money_float
    except ValueError:
        print("❌ Error: You must type a number or 'exit'.")
