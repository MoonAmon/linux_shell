num1=int(input("Digite o numerador: "))
op=input("Digite o sinal da operação: ")
num2=int(input("Digite o numero sobre: "))

if op== "+":
    x=num1+num2
    print("Resultado da soma: %d"%x)

elif op== "-":
    x=num1-num2
    print("Resultado da subtração: %d"%x)

elif op== "/":
    x=num1/num2
    print("Resultado da divisão: %.2f"%x)

elif op== "*":
    x=num1*num2
    print("Resultado da multiplicação: %d"%x)

else:
    print("Sinal da operação inválido!")