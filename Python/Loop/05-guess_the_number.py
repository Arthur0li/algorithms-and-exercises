import random

number = random.randint(1,100)

print('Welcome to the number guessing game!\n')

attempts = 0 

while True:
    try:
        guess = int(input('Type a number: '))
    except ValueError:
        print('You did not type a number, please try again...\n')
        continue 
    
    attempts += 1

    if guess == number:
        print(f'Congratulations, you got it right in {attempts} attempts! :)')
        break
    else:
        print('Wrong guess!')
        if guess < number:
            print('The number you typed is lower.\n')
        else:
            print('The number you typed is higher.\n')