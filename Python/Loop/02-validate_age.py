while True:
    try:
        age = int(input("Type an age between 0 and 100: "))
        if age < 0 or age > 100:
            print("this number need to be between 0 and 100\n")
        else:
            print("You typed:", age)
            break
    
    except:
        print("Invalid answer. Please type a number\n")        