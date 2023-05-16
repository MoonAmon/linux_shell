sal=float(input("Digite o valor do seu sálario R$"))
Vcasa=int(input("Digite o valor da casa a ser financiada R$"))
anos=int(input("Digite o tempo em anos: "))

meses=anos*12
Psal=sal*0.3
Vprest=Vcasa/meses

if Vprest<=Psal:
    print("Financiamento aprovado!\n Valor R$%.2f em meses %d"%(Vprest,meses))

else:
    print("Financiamento reprovado!\n Prestação acima do valor permitido!\n Valor R$%.2f em meses %d" %(Vprest,meses))