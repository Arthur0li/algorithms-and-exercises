length_1 = float(input("Type the first length of the triangle: "))
length_2 = float(input("Type the second length of the triangle: "))
length_3 = float(input("Type the third length of the triangle: "))

if length_1 == length_2 == length_3:
    print("\nThis is an equilateral triangle.")
elif length_1 == length_2 or length_1 == length_3 or length_2 == length_3:
    print("\nThis is an isosceles triangle.")
else:
    print("\nThis is a scalene triangle.")