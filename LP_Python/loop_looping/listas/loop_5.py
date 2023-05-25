CountTotal = 0
CountFem = 0 
CountMan = 0
CountKid = 0
CountFemL = 0
nLivros = 0
CountIdade = 0
CountMenNL = 0

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
PCnl = (nLivros/CountTotal) * 100

print("qnt de livros lidos por crianças menores de 10 anos: %d\nnúmero de mulheres que leram 5 livros ou mais: %d\nmedia da idade dos homens que leram menos que 5 livros: %.2f\npercentual de pessoas que nao leram nenhum livro %.2f%%\n "%(CountKid,CountFemL,MDmenl,PCnl))
