class Programa():
    def __init__(self, titulo, descricao, trailer):
        self.titulo = titulo
        self.descricao = descricao
        self.trailer= trailer

    def exibir_descricao(self):
        print("Descrição:",self.descricao)

'''serie e filmes são SUBclasses'''
'''A classe Programa é uma SUPERclasse das classes Serie e Filme'''

class Serie(Programa):
    def exibir_descricao(self):
        super().exibir_descricao()
        print("Tem 10 episódios")
    '''super: você adiciona um método da classe mãe em uma classe filha, você reaproveita a classe existente'''
    pass

class Filme(Programa):
    pass

round6 = Serie("Round6", "Série de suspense de sobrevivencia", "trailer_round6.mp4")
nao_olhe_para_cima = Filme("Não olhe para cima", "Filme de suspense de apocalipse", "trailer_naoolhe.mp4")

print(round6.trailer)
print(nao_olhe_para_cima.trailer)

round6.exibir_descricao()
nao_olhe_para_cima.exibir_descricao()