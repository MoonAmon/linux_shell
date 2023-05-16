km=float(input("Digite a distância percorrida: "))

if km>200:
    tax=km*0.5
    print("Valor R$%.2f"%tax)

else:
    tax=km*0.45
    print("Valor R$%.2f"%tax)