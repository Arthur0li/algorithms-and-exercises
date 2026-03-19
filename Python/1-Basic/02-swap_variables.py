'''
The "input" command allowed displaying a message to the user and receiving the information that the user would type.
In this file we can see the command being used to display a message and receive a number!
In the final version, the code will change the number variables.
'''

x = input("Type the first number: ")
y = input("Type the second number: ")

x, y = y, x

print("\nNow the first number is:", x)
print("And the second number is:", y)