# function to run the program in Portuguese.
def saudacao():

    print("\nVocê escolheu a opção do programa rodar em português!")

    # ask the user's name.
    nome_user = input("Digite o seu nome: ")

    # greet the user.
    print("Olá,", nome_user, "Seja bem vindo!")
        
    while True:
        # ask if the user wants to restart the program.
        choice_end = input("\nVocê chegou ao fim do programa, deseja reiniciar? (s/n) ")

        # if the user types 's', restart the program.
        if choice_end == "s":
            print("Você escolheu reiniciar o programa!")
            break

        elif choice_end == "n":
            # if the user types 'n', end the program.
            print("Você escolheu fechar o programa! Tchau tchau! :)")
            exit()

        else:
            # if the user types something else, show an error message.
            print("Você digitou errado! Tente novamante!")


# function to run the program in English.
def greetings():

    print("\nYou have chosen the option for the program to run in English!")

    # ask the user's name.
    name_user = input("Type your name: ")

    # greet the user.
    print("Hello,", name_user, "Welcome!")

    while True:
        # ask if the user wants to restart the program.
        escolha_final = input("\nYou've reached the end of the program, do you want to restart? (y/n) ")

        # if the user types 'y', restart the program.
        if escolha_final == "y":
            print("You chose to restart the program!")
            break

        elif escolha_final == "n":
            # if the user types 'n', end the program.
            print("You chose to close the program! Bye bye! :)")
            exit()

        else:
            # if the user types something else, show an error message.
            print("You typed it wrong! Try again!")


# main loop of the program.
while True:

    # ask the user to choose a language.
    print("\nDigite a linguagem que você quer que rode o código:(p para português e e para inglês)\n"
          "Enter the language you want the code to run in:(p for Portuguese and e for English)")

    choice = input()

    # call the Portuguese function.
    if choice == "p":
        saudacao()

    # call the English function.
    elif choice == "e":
        greetings()

    else:
        # if the user types something invalid, show an error message.
        print("Você digitou errado! Tente novamante!\nYou typed it wrong! Try again!")