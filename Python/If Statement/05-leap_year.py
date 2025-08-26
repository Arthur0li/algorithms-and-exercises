year = int(input("Type the year, please: "))

if year % 400 == 0:
    print("\n", year, "is a leap year.")

elif year % 100 == 0:
    print("\n", year, "is not a leap year.")

elif year % 4 == 0:
    print("\n", year, "is a leap year.")

else:
    print("\n", year, "is not a leap year.")