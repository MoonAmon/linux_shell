tamanho=10
nome=[]

for x in range(0,(tamanho),1):
    N=input("Digite nome %d: " % (x+1))
    nome.append(N)

print("Nomes:", nome)