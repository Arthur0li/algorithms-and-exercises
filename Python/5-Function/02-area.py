def rectangle_square():
    print("\nVocê escolheu retângulo/quadrado!")

    while True:
        try:
            x = float(input("Digite o primeiro lado: "))
            if x <= 0:
                print("Você digitou um lado menor ou igual a 0, tente novamente\n")
            else:
                print("O primeiro lado que digitou foi", x)
                break
        except ValueError:
            print("Você não digitou um número! Tente Novamente!\n")
    
    while True:
        try:
            y = float(input("\nDigite o segundo lado: "))
            if y <= 0:
                print("Você digitou um lado menor ou igual a 0, tente novamente\n")
            else:
                print("O segundo lado que digitou foi", y)
                break
        except ValueError:
            print("Você não digitou um número! Tente Novamente!\n")
    
    print("\nA área é igual a:", x*y)

def circle():
    print("\nVocê escolheu circulo!")

    while True:
        try:
            r = float(input("Digite o raio: "))
            if r <= 0:
                print("Você digitou o raio menor ou igual a 0, tente novamente\n")
            else:
                print("O raio que digitou foi", r)
                break
        except ValueError:
            print("Você não digitou um número! Tente Novamente!\n")
    
    print("\nA área é igual a:", (r**2)*3.14)

def triangle():
    print("\nVocê escolheu triângulo!")
    
    while True:
        try:
            b = float(input("Digite a base do triângulo: "))
            if b <= 0:
                print("Você digitou uma base menor ou igual a 0, tente novamente\n")
            else:
                print("A base que digitou foi", b)
                break
        except ValueError:
            print("Você não digitou um número! Tente Novamente!\n")
        
    while True:
        try:
            h = float(input("\nDigite a altura do triangulo: "))
            if h <= 0:
                print("Você digitou uma altura menor ou igual a 0, tente novamente\n")
            else:
                print("A altura que digitou foi", h)
                break
        except ValueError:
            print("Você não digitou um número! Tente Novamente!\n")


    print("\nA área é igual a:", (b*h)/2)

while True:    
    while True:
        print("\nBem vindo ao código de cálculo de áreas, escolha qual área você quer calcular:")
        choice = input("r = Retangulo and Square / c = Círculo / t = triângulo ").strip().lower()

        if choice == "r":
            rectangle_square()
            break
        elif choice == "c":
            circle()
            break
        elif choice == "t":
            triangle()
            break
        else:
            print("Você digitou errado, tente novamente")
    
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