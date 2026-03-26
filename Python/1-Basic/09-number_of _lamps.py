# Display a message, store the value entered by the user and convert it to an float.
wattage = float(input("Type the wattage of the lamps: "))
width = float(input("Type the width of the room: "))
length = float(input("Type the length of the room: "))

# Display a message and the final result
print("\n the number of bulbs you need is:", ((width*length)*18)/wattage)