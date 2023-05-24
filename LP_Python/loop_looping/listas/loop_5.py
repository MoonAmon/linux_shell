CountTotal = int(0)
CountFem = int(0) 
CountMan = int(0)
CountKid = int(0)
CountFemL = int(0)
nLivros = int(0)
CountIdade = int(0)
CountMenNL = int(0)

while True:
    sexo = str(input("Digite o sexo do participante: "))
    idade = int(input("Digite a idade do participante: "))
    livros = int(input("Digite a quantidade de livros lidos em 2006: "))
    if idade<0:
        break
    CountTotal+=1
    

    if sexo=="f":
        CountFem+= 1

    elif sexo=="m":
        CountMan+=1

    if livros==0:
        nLivros+=1

    if idade>10:
        CountKid+=1

    if sexo=="f" and livros>=5:
        CountFemL+=1

    if sexo=="m" and livros<5:
        CountIdade+=idade
        CountMenNL+=1

MDmenl = CountIdade/CountMenNL
MDnl = 
print()