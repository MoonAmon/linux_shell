num1=int(input("Digite o primeiro numero: "))
num2=int(input("Digite o segundo numero: "))

R=0
i=0

while i!=num2:
    R=num1+R
    i=i+1

print("Resultado: %d"% R)
