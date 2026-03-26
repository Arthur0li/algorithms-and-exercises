import random

# Create the roulette wheel:
# Includes "0", "00", and numbers from 1 to 36
roleta = ["0", "00"] + list(range(1, 37))

# Define red numbers based on standard roulette rules
red_numbers = [1, 3, 5, 7, 9, 12, 14, 16, 18, 19, 21, 23, 25, 27, 30, 32, 34, 36]

# Generate black numbers (numbers from 1 to 36 that are not red)
black_numbers = [n for n in range(1, 37) if n not in red_numbers]

# Define low and high ranges
low_numbers = list(range(1, 19))   # 1 a 18
high_numbers = list(range(19, 37)) # 19 a 36

# Randomly select a number from the roulette wheel
number = random.choice(roleta)

# Display the result
print("\nThe roulette wheel landed on:", number)

# Check if the result is 0 or 00 (special case)
if number == "0" or number == "00":
    print("Pay", number)
else:
    print("Pay", number)

    if number in red_numbers:
        print("Pay Red")
    elif number in black_numbers:
        print("Pay Black")

    if number % 2 == 0:
        print("Pay Even")
    else:
        print("Pay Odd")

    if number in low_numbers:
        print("Pay 1 to 18")
    elif number in high_numbers:
        print("Pay 19 to 36")
