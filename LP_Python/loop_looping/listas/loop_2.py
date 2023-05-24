X = int(0)
I = int(0)
MD = float(0)

while True:
    N = int(input("Digite numeros positivos: "))
    if N<=0:
        break
    X = N + X
    MD+=1
    I+=1

MD=X/I
print("media= %.2f\nsoma= %d"%(MD,X))