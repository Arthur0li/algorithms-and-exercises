class Vendedor:
    def __init__(self, nome, vendas, meta):
        self.nome = nome
        self.vendas = vendas
        self.meta = meta
    
    def vendeu(self, vendas):
        self.vendas = vendas

    def bateu_meta(self, meta):
        if self.vendas >= meta:
            print(self.nome, "conseguiu bater a meta :D")
        else:
            print(self.nome, "não conseguiu bater a meta :(")

nome = input("Digite o nome do vendedor: \n")
vendas = int(input("Digite a quantidade de vendas: \n"))
meta = int(input("Digite a meta da quantidade de vendas: \n"))

vendedor1 = Vendedor(nome, vendas, meta)
vendedor1.vendeu(vendas)
vendedor1.bateu_meta(meta)

nome = input("Digite o nome do vendedor 2: \n")
vendas = int(input("Digite a quantidade de vendas: \n"))
meta = int(input("Digite a meta da quantidade de vendas: \n"))

vendedor2 = Vendedor(nome, vendas, meta)
vendedor2.vendeu(vendas)
vendedor2.bateu_meta(meta)

# dá para usar classes de outros arquivos importando a classe desejada.