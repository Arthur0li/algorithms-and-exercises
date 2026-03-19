'''
The input command has a drawback; by default, it returns a string.
To change this, we must type the variable type before the input.

In this code the user will type, the code will convert the number to a float, and after this the code will display the final result!
'''

number = float(input("Type the number, please: "))

print("\nThe successor of the", number, "is", number - 1)