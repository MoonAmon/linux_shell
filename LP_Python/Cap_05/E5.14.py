
CTnum = 1
md = 0
num = 0
soma = 0

while True:
    num = int(input("Digite um numero ou digite 0 para sair: "))
    if num == 0:
        break

    soma += num
    CTnum += CTnum
    md = soma / CTnum

print("resultado:\n soma: %d\n media: %.2f"%(soma,md))