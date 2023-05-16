sal=float(input("Digite seu salario: "))

if sal>=1250:
    plus=sal*0.1
    newsal=plus+sal
    print("Novo salario R$%.2f"%newsal)

else:
    plus=sal*0.15
    newsal=plus+sal
    print("Novo salario R$.2f"%newsal)
