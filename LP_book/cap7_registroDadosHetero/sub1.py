import secrets as sp


class AGENDA:
    def __init__(self):
        self.nome = None
        self.endereco = None
        self.telefone = None


Agenda = [AGENDA() for _ in range(10)]


def cadatro():
    for i in range(10):
        nome = input("Digite o nome do contato %d: " % i)
        Agenda[i].nome = nome.capitalize()
        Agenda[i].endereco = input("Digite o endereço do contato: ")
        Agenda[i].telefone = input("Digite o numero de telefone do contato: ")


def pesquisarContato(pesquisa):
    """

    :type pesquisa:str
    """
    achou = False
    cont = 0
    while achou is False and cont < 10:
        if pesquisa == Agenda[cont].nome:
            achou = True
        else:
            cont += 1
    if achou is True:
        print("---- Contato encontrado ----")
        sp.pularlinha()
        print("Nome: " + Agenda[cont].nome)
        print("Tel: " + Agenda[cont].telefone)
        print("Endereço: " + Agenda[cont].endereco)
    else:
        print("Contato " + pesquisa + " não encontrado!")


def exibirContato():
    for i in range(10):
        print("-- Contato " + str(1 + i))
        sp.pularlinha()
        print("Nome: " + Agenda[i].nome)
        print("Tel: " + Agenda[i].telefone)
        print("Endereço: " + Agenda[i].endereco)


def classificarContato():
    pass


while True:
    print("---- Agenda ----")
    sp.pularlinha()
    print("Digite um número para selecionar as opções\n"
          "\n"
          "1 - Cadastrar 10 contatos\n"
          "2 - Exibir todos os contatos\n"
          "3 - Pesquisar contato por nome\n"
          "4 - Exibir contatos em ordem alfabetica\n"
          "5 - Sair do programa\n")
    opcao = input(' ')
    try:
        opcao = int(opcao)
    except ValueError:
        print("Opção inválida! Digite um número de 1 a 5!")
    if opcao == 1:
        cadatro()
    elif opcao == 2:
        exibirContato()
    elif opcao == 3:
        nome = input("Digite o nome do contato para pesquisa: ")
        pesquisa = nome.capitalize()
        pesquisarContato(pesquisa)
    elif opcao == 4:
        classificarContato()
    elif opcao == 5:
        print("Saindo...")
        break
    else:
        print("Opção inválida!\n")
