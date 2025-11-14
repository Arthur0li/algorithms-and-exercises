class Cliente:
    def __init__(self, nome, email, plano):
        self.nome = nome
        self.email = email
        self.planos_disponiveis = ("basic", "premium")
        if plano in self.planos_disponiveis:
            self.plano = plano
        else:
            raise Exception("plano invalido")
    
    def mudar_plano(self, novo_plano):
        if novo_plano in self.planos_disponiveis:
            self.plano = novo_plano
        else:
            print("plano invalido")

    def ver_filme(self, filme, plano_filme):
        if self.plano == plano_filme:
            print("ver filme", filme)
        elif self.plano == "premium":
            print("ver filme", filme)
        elif self.plano == "basic" and plano_filme == "premium":
            print("Faça um upgrade")
        else:
            print("plano inválido")
        
cliente = Cliente('Arthur', 'Aethur@gmail.com', 'basic')
print(cliente.plano)
cliente.ver_filme("harry poter", "premium")

cliente.mudar_plano("premium")
print(cliente.plano)
cliente.ver_filme("harry poter", "premium")