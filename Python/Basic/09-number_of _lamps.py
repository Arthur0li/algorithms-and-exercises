'''
Write an algorithm to calculate and print the number of light bulbs needed to illuminate a given room in a residence.

Input data: the power of the bulb used (in watts), and the dimensions of the room (width and length, in meters).

Consider that the required power is 18 watts per square meter.
'''

wattage = float(input("Type the wattage of the lamps: "))
width = float(input("Type the width of the room: "))
length = float(input("Type the length of the room: "))

print("\n the number of bulbs you need is:", ((width*length)*18)/wattage)