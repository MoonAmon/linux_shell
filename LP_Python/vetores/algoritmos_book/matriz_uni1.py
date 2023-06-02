soma=0
md= list(range(0,8))
for x in range(0,8,1):
    md[x]=float(input("Digite nota %d:" % x))
    soma+=md[x]

média=soma/8
x=0
for x in range(0,8,1):
    print("md %d: %.2f"%(x,md[x]))
          
print("Média geral: %.2f" % média)