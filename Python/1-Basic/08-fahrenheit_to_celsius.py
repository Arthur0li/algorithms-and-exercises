# Display a message, store the value entered by the user and convert it to an float.
Fahrenheit = float(input("Type the temperature in Fahrenheit: "))

# Display a message and the final result
print("\nthe", Fahrenheit, "°F in Celsius is:", ((Fahrenheit - 32) * 5) / 9, "°C")