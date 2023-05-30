
for i in range(1,10,1):
    codi = int(input("Digite o codigo do func %d: "%i))
    horas = int(input("Digite a horas trabalhadas: "))
    depen = int(input("Digite o número de dependentes do func: "))
    salbr = (horas*12)+(depen*40)
    desco = (salbr*0.085)+(salbr*0.05)
    salliq = salbr - desco
    print("\nFuncionario num= %d\nTotal desconto= R$%.2f\nSalário liquido= R$%.2f \n"%(codi,desco,salliq))