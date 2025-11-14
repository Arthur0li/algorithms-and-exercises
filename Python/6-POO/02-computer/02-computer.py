class Computador:
    def __init__(self, marca, memoria_ram, placa_de_video):
        self.marca = marca
        self.memoria_ram = memoria_ram
        self.placa_de_video = placa_de_video
    
    def Ligar(self):
        print("Estou ligando")
    
    def Desligar(self):
        print("Estou desligando")

    def Exibir(self):
        print(self.marca, self.memoria_ram, self.placa_de_video)


marca_main = input("Digite a marca do comuptador: ")
memoria_main = input("Digite a memoria do comuptador: ")
placa_main = input("Digite a placa do comuptador: ")
computador1 = Computador(marca_main,memoria_main,placa_main)

computador1.Ligar()
computador1.Desligar()
computador1.Exibir()