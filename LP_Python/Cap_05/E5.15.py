
codigo = 0
total = 0


while True:
    codigo = int(input("Digite o código do produto: "))
    if codigo == 1:
        total += 0.50
    elif codigo == 2:
        total += 1
    elif codigo == 3:
        total += 4
    elif codigo == 5:
        total += 7
    elif codigo == 9:
        total += 8
    elif codigo == 0:
        break
    else:
        print("Código inválido!")

print("Total R$%.2f"%(total))