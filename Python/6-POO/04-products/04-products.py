"""
caracteristicas (atributos)
- cor
- altura
- largura

métodos do control remoto:
- passar de canal
- mexer no volume
- abrir o netflix
- desligar a tv
""" 

"""
todos os atributos(informações) tem que colocar no método init
o self é o propio controle remoto, ele faz uma referência a um atributo de um método de uma classe, 
para ele saber que tal atributo é um atributo, precisa do self 
"""

"""
instância =  um objeto que usou uma classe para ser criado
 todas as instanias tem todos os métodos da classe que está usando
"""

class Controle_Remoto:
    def __init__(self, cor, altura, largura): 
        self.cor = cor
        self.altura = altura
        self.largura = largura
    
    def passar_canal(self, botao):
        if botao == "+":
            print("Aumentar o canal!")
        elif botao == "-":
            print("Diminuir um canal!")

controle_remoto = Controle_Remoto("Preto", 10, 5)
print (controle_remoto.cor) #atributo não precisa de um parêntese no final
controle_remoto.passar_canal("+") #método sempre tem um parêntese no final

controle_remoto2 = Controle_Remoto("Cinza", 8, 7)
print (controle_remoto2.cor)
controle_remoto2.passar_canal("-") #método sempre tem um parêntese no final