# Display a message, store the value entered by the user and convert it to an integer.
years = int(input("Type how old the dog is: "))

# Use the entered value to decide which calculation the code needs to perform
if years <= 2:
    human_years = years * 10.5
else:
    human_years = 2 * 10.5 + (years - 2) * 4

print(f"\nThe dog's age in human years is: {human_years}")