valor=float(input("Digite o total da compra R$ "))
desc=float(input("Digite o desconto % "))

Tdesc=desc/100
Tvalor=valor*Tdesc
valor=valor-Tvalor

print("Novo valor R$%.2f"%valor)