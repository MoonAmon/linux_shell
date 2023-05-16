n = int(input("Tabuada de: "))
x = int(input("Inicio da tabuado: "))
y = int(input("Fim da tabuada: "))

while x<=y:
    resul=n*x
    print("%d*%d=%d"%(n,x,resul))
    x=x+1