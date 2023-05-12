cigDia=int(input("Digite a quantidade de cigarros fumados por dia "))
cigAno=int(input("Digite em anos desde que começou a fumar "))


totalDia=cigAno*365
cigTotal=cigDia*totalDia
deadMin=cigTotal*10
deadHour=deadMin/60
deadDay=deadHour/24

print("Você perdeu %d dias"%deadDay)