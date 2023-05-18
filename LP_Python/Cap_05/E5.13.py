div = float(input("Digite o valor inicial da divida R$"))
taxaM = float(input("Digite a taxa de juros %"))
pagM = float(input("Digite o valor pago mensalmente R$"))

taxaM = taxaM / 100
divT = 0
pagT = 0
meses = 0
taxaT = 0
taxaMT = 0

while div > 0:
    taxaT = taxaM * div
    taxaMT += taxaT
    div = div + taxaM
    pagT += pagM
    div = div - pagM
    meses += 1

print("Total de meses: %d\n Total pago R$%.2f\n Total de juros pago R$%.2f"%(meses,pagT,taxaMT))

