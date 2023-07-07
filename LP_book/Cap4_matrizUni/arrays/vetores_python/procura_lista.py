l=[15,85,4,255,100]
p=int(input("Digite o valor a procurar: "))
achou=False
x=0
while x<len(l):
    if l[x]==p:
        achou=True
        break
    x+=1
if achou:
    print("%d achado na posição: %d"%(p,x))
else:
    print("%d Não encontrado!"%p)