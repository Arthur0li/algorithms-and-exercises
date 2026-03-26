# Display a message and store the value entered by the user.
letter = input("Type a letter, please: ").lower() 

# compare the input and display a message depending on the letter typed by the user.
if letter == 'y':
    print("\nThe letter y sometimes is a vowel.") 
elif letter in 'aeiou':
    print("\nThe letter is a vowel.")
else:
    print("\nThe letter is a consonant.")