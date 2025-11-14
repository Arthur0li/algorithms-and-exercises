class Jogador:
    def __init__(self, altura, velocidade, passe, drible, precisao):
        self.altura = altura
        self.velocidade = velocidade
        self.passe = passe
        self.drible = drible
        self.precisao = precisao

    def passar(self):
        print("Mirar")
        print("Encostar a bola com a força do passe do joaador")
    
    def chutar(self):
        print("Mirar")
        print("Encostar a bola com a força do chute do joaador")

    def defender(self):
        print("Tentar tirar a bola do adversário")

class Jogador_Goleiro(Jogador): 
    """Herança, essa classe recebe como herança da classe Jogador(Classe mãe) todos os atributos e métodos"""
    def agarrar(self):
        print("Pular")
        print("Se esticar para pegar a bola")
    
    def defender(self): 
        '''Polimofirsmo
          a mesma função defender entre duas classes que são originadas de uma mesma classe e que essa função
          defender se apresenta de diferente formas'''
        esta_fora_area = False
        if esta_fora_area:
            print("usar apenas os pés, cabeça, ombro")
        else:
            print("Usar qualquer parte do corpo")

class Jogador_Linha(Jogador):
    '''Polimofirsmo
    a mesma função defender entre duas classes que são originadas de uma mesma classe e que essa função
    defender se apresenta de diferente formas'''
    def defender(self):
        print("Usar apenas os pés, cabeça, ombro")
        print("Tentar tirar a bola do adversário")


jogador1= Jogador_Goleiro(190, 60, 79, 20, 67)
jogador2= Jogador_Linha(175, 90, 80, 86, 89)

jogador1.defender()
jogador2.defender()