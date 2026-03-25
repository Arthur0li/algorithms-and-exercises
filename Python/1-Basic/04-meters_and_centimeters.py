'''
The "input" command allowed displaying a message to the user and receiving the information that the user would type.
In this file we can see the command being used to display a message and receive a number!
The input command has a drawback; by default, it returns a string.
To change this, we must type the variable type before the input.

In this code the user will type, the code will convert the number to a float, and after this the code will display the final result of the conversion!
'''

meters = float(input("Type a meter, please: "))

print("\nThe", meters, "in centimeters is", meters*100)