salario=float(input("Digite o valor do salario: "))
aumento=float(input("Digite o reajuste: "))

aumento=aumento/100
ASal=salario*aumento
BSal=ASal+salario

print("Novo salario R$ %.2f"%BSal)