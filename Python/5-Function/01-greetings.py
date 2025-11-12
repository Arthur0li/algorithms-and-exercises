def saudacao():
    print("\nVocê escolheu a opção do programa rodar em português!")
    nome_user = input("Digite o seu nome: ")
    print("Olá,", nome_user, "Seja bem vindo!")
        
    while True:
        choice_end = input("\nVocê chegou ao fim do programa, deseja reiniciar? (s/n) ")
        if choice_end == "s":
            print("Você escolheu reiniciar o programa!")
            break
        elif choice_end == "n":
            print("Você escolheu fechar o programa! Tchau tchau! :)")
            exit()
        else:
            print("Você digitou errado! Tente novamante!")

def greetings():
    print("\nYou have chosen the option for the program to run in English!")
    name_user = input("Type your name: ")
    print("Hello,", name_user ,"Welcome!")

    while True:
        escolha_final = input("\nYou've reached the end of the program, do you want to restart? (y/n) ")
        if escolha_final == "y":
            print("You chose to restart the program!")
            break
        elif escolha_final == "n":
            print("You chose to close the program! Bye bye! :)")
            exit()
        else:
            print("You typed it wrong! Try again!")

while True:
    print("\nDigite a linguagem que você quer que rode o código:(p para português e e para inglês)\n" \
    "Enter the language you want the code to run in:(p for Portuguese and e for English)")
    choice = input()

    if choice == "p":
        saudacao()
    elif choice == "e":
        greetings()
    else:
        print("Você digitou errado! Tente novamante!\nYou typed it wrong! Try again!")