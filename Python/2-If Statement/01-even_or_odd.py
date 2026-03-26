# Display a message, store the value entered by the user and convert it to an integer.
number = int(input("Type a number, please: ")) 

# check the value and show whether the number is even or odd
if number % 2 == 0:
    print("\n", number ," is even.")

else:
    print("\n", number ," is odd.")