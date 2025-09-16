letter = input("Type a letter, please: ").lower()

if letter == 'y':
    print("\nThe letter y sometimes is a vowel.")
elif letter in 'aeiou':
    print("\nThe letter is a vowel.")
else:
    print("\nThe letter is a consonant.")