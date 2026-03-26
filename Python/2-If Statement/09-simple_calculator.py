# Display a message, store the value entered by the user and convert it to an float.
number_1 = float(input("Type the first number: "))
number_2 = float(input("Type the second number: "))

# Allows the user to choose the operation to be performed.
print("\n1 = sum; 2 = subtraction; 3 = multiplication; 4 = division;")
choice = int(input("Now type the operation: "))

# uses the numbers entered by users and shows the result of the chosen operation.
if choice != 1 and choice != 2 and choice != 3 and choice != 4:
    print("\nError")

elif choice == 1:
    print("\nThe result is:", number_1+number_2)

elif choice == 2:
    print("\nThe result is:", number_1-number_2)

elif choice == 3:
    print("\nThe result is:", number_1*number_2)

elif choice == 4:
    print("\nThe result is:", number_1/number_2)