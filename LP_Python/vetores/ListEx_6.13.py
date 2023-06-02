l=[-10,-8,0,1,2,5,-2,-4]
máximo=l[0]
minimo=l[0]
soma=0


for e in l:
    if e > máximo:
        máximo = e
    if e < minimo:
        minimo = e
soma+=e
md=soma/8
print("Menor valor:%d\n Maior valor:%d\n Média:%.2f"%(minimo,máximo,md))