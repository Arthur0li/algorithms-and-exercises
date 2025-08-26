shape = int(input("Type the number of sides of your shape (between 3 and 10): "))

if shape < 3 or shape > 10:
    print("\nError: please type a number between 3 and 10.")

elif shape == 3:
    print("\nYour shape is a triangle")

elif shape == 4:
    print("\nYour shape is a square")

elif shape == 5:
    print("\nYour shape is a pentagon")

elif shape == 6:
    print("\nYour shape is a hexagon")

elif shape == 7:
    print("\nYour shape is a heptagon")

elif shape == 8:
    print("\nYour shape is an octagon")

elif shape == 9:
    print("\nYour shape is a nonagon")

elif shape == 10:
    print("\nYour shape is a decagon")