class Canal:
    def __init__(self, nome, descricao, inscrito, nacionalidade):
        '''
        __init_: método construtor padrão conhecido como método mágico, mas podemos criar nossos p´ropios métodos
        toda função dentrop de uma classse é um método
        
        self representa a instancia que executa o init (canal_lancode)
        todo método dentro de uma classe recebe um self
        '''
        self.nome = nome
        self.desc = descricao
        self.inscrito = inscrito
        self.nacio = nacionalidade
    
    def inscrver(self, quantidade=1):
        self.inscrito += quantidade

class CanalEmpresarial(Canal):
    def __init__(self, nome, descricao, inscrito, nacionalidade):
        super().__init__(nome, descricao, inscrito, nacionalidade)

        self.equipe = ['Duolingo', 'Liian']

        '''
        Como estamos herdando do canal precisamos pegar tudo da clase que estamos herdando
        usando esse tipo de init
        '''
    
canal_lancode = Canal('lan Code', 'Código', 300, 'Brazil')
canal_guanabara = Canal('Guanabara', 'Desc foda', 10000,'Brazil')
canal_duolingo = CanalEmpresarial('duolingo', 'desc linguagem', 10000000, 'USa')

print(canal_duolingo.equipe )


print(canal_lancode.nome,canal_lancode.desc,canal_lancode.inscrito,canal_lancode.nacio)
print(canal_guanabara.nome, canal_guanabara.desc, canal_guanabara.inscrito, canal_guanabara.nacio)

print("Quantidade de inscritos atuais: ", {canal_lancode.inscrito})
canal_lancode.inscrver()
print("Quantidade de inscritos atuais: ", {canal_lancode.inscrito})

