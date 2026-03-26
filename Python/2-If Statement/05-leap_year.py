# Display a message, store the value entered by the user and convert it to an integer.
year = int(input("Type the year, please: "))

# checks whether the year entered by the user is a leap year or not.
if year % 400 == 0:
    print("\n", year, "is a leap year.")

elif year % 100 == 0:
    print("\n", year, "is not a leap year.")

elif year % 4 == 0:
    print("\n", year, "is a leap year.")

else:
    print("\n", year, "is not a leap year.")