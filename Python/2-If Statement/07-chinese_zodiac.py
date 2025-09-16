year = int(input("Type a year: "))

if year < 0:
    print("\nError: please type a number greater than -1.")

elif (year - 2000) % 12 == 0:
    print("\n", year, "is the dragon year")

elif (year - 2000) % 12 == 1:
    print("\n", year, "is the snake year")

elif (year - 2000) % 12 == 2:
    print("\n", year, "is the horse year")

elif (year - 2000) % 12 == 3:
    print("\n", year, "is the sheep year")

elif (year - 2000) % 12 == 4:
    print("\n", year, "is the monkey year")

elif (year - 2000) % 12 == 5:
    print("\n", year, "is the rooster year")

elif (year - 2000) % 12 == 6:
    print("\n", year, "is the dog year")

elif (year - 2000) % 12 == 7:
    print("\n", year, "is the pig year")

elif (year - 2000) % 12 == 8:
    print("\n", year, "is the rat year")

elif (year - 2000) % 12 == 9:
    print("\n", year, "is the ox year")

elif (year - 2000) % 12 == 10:
    print("\n", year, "is the tiger year")

elif (year - 2000) % 12 == 11:
    print("\n", year, "is the hare year")