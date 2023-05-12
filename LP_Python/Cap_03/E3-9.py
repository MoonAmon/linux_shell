dias=int(input("Digite o numero de dias: "))
horas=int(input("Digite o numero de horas: "))
minutos=int(input("Digite o numero de minutos: "))
segundos=int(input("Digite o numero de segundos: "))

segTotal=(minutos*60)+(horas*3600)+(dias*86400)+(segundos)

print("Total de %d segundos!"%segTotal)