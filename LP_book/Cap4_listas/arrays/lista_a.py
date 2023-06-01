A=[]
B=[]
x=0
while x<8:
    elemento=int(input("Digite o conteúdo da lista A posisão %d: "%x))
    A.append(elemento)
    B.append(A[x]*3)
    x+=1
x=0
while x<8:
    print("Resultado lista B posição %d: %d"%(x,B[x]))
    x+=1