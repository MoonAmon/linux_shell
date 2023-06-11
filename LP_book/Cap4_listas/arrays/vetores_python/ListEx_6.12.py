l=[]
while True:
    n=int(input("Digite um numero (0 para sair): "))
    if n==0:
        break
    l.append(n)
minimo=l[0]
for e in l:
    if e<minimo:
        minimo=e
print(minimo)