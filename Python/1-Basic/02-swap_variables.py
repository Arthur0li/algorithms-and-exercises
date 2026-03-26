# Display a message and store the value entered by the user.
x = input("Type the first number: ")
y = input("Type the second number: ")

# swap the values of the variables
x, y = y, x

# Display a message and the final result
print("\nNow the first number is:", x)
print("And the second number is:", y)