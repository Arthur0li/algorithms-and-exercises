# Display a message, store the value entered by the user and convert it to an integer.
years = int(input("Type the years: "))
months = int(input("Type the months: "))
days = int(input("Type days: "))

# Display a message and the final result
print("\nYou have lived", years*365+months*30+days, "days.")
