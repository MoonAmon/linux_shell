numeroDecimal=float(input())
listaBinario=[]
restoDivDecimal=0
controle=(-1)
resto=0

if numeroDecimal==1:
    print("0001")

while numeroDecimal>1:
    restoDivDecimal=numeroDecimal%2
    numeroDecimal=numeroDecimal/2
    if restoDivDecimal == 0:
        listaBinario.append("0")
    if restoDivDecimal == 1: 
        listaBinario.append("1")

tamanhoListaBinario=len(listaBinario) 

for i in listaBinario:
    print(i)