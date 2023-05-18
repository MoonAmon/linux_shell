money = float(input("Digite o deposito inicial R$"))
taxa = float(input("Digite a taxa de juros %"))

i = 0
total = 0
taxa = taxa / 100

while i <= 24:
    taxaT = taxa * money
    total = taxaT + money
    total2 = total + money
    i += 1

print("Total depois dos 24 meses R$%.2f" % (total2))
