from secrets import pular1linha, pular2linha


class REGISTRO:
    def __init__(self):
        self.nome = ''
        self.altura = 0.0


Pessoa = [REGISTRO() for _ in range(5)]

opcao = 0

while opcao != 6:
    print("Digite uma das opções: \n "
          "1) Fazer registro das 5 pessoas \n"
          "2) Apresentar os registros (nome e altura) das pessoas com 1.5 m ou menores \n"
          "3) Apresentar os registros (nome e altura) das pessoas com mais de 1.5 m. \n"
          "4) Apresentar os registros (nome e altura) das pessoas com mais de 1.5 m e menos de 2.0 m. \n"
          "5) Apresentar todos os registros com a média extraída de todas as alturas armazenadas. \n"
          "6) Sair do programa \n")

    pular2linha()
    opcao = int(input("Digite: "))

    if opcao == 1:
        for i in range(5):
            print("Registro " + str(i + 1))

            Pessoa[i].nome = input("Digite o nome da pessoa: ")
            Pessoa[i].altura = float(input("Digite a altura da pessoa em metros: "))
            pular1linha()
        print('Registros salvos!')
        print("Aperte um tecla para continuar! ")
        pular2linha()

    elif opcao == 2:
        print("Registros altura menor que 1.5 m. ")
        for i in range(5):
            if Pessoa[i].altura <= 1.5:
                pular2linha()
                print("Nome: " + Pessoa[i].nome)
                print("Altura: " + str(Pessoa[i].altura) + "m")
                pular1linha()
        print("Aperte um tecla para continuar! ")

    elif opcao == 3:
        print("Registros maiores de 1.5 m. ")
        for i in range(5):
            if Pessoa[i].altura > 1.5:
                pular1linha()
                print("Nome: " + Pessoa[i].nome)
                print("Altura: " + str(Pessoa[i].altura) + "m")
        print("Aperte um tecla para continuar! ")

    elif opcao == 4:
        print("Registros maiores de 1.5 m e menor que 2 m")
        for i in range(5):
            if 1.5 < Pessoa[i].altura < 2.0:
                pular1linha()
                print("Nome: " + Pessoa[i].nome)
                print("Altura: " + str(Pessoa[i].altura) + "m")
        print("Aperte um tecla para continuar! ")

    elif opcao == 5:
        soma = 0
        for i in range(5):
            soma += Pessoa[i].altura
        media = soma / 5
        for i in range(5):
            print("Nome: " + Pessoa[i].nome)
            print("Altura: " + str(Pessoa[i].altura) + "m")
            pular1linha()
        print("Média da altura: " + str(media))
        print("Aperte um tecla para continuar! ")

    elif opcao == 6:
        print("Saindo do programa.")

    else:
        print("Opção inválida. Tente novamente.")