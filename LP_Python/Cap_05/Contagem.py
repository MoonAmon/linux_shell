pontos=0
questoes=1

while questoes<=3:
    resposta=input("Respota da questão %d: "%questoes)
    if questoes==1 and resposta=="b" or resposta=="B":
        pontos=pontos+1
    if questoes == 2 and resposta == "a":
        pontos = pontos + 1
    if questoes == 3 and resposta == "c":
        pontos = pontos + 1
    questoes+=1
print("O aluno fez %d ponto(s)"%pontos)

