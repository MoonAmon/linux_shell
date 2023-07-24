from makeMatriz import printMatrizBi,matrizBiAleatorio

matrizA = matrizBiAleatorio(7, 10, 100)
contadorNumPares = 0
contadorNumImpares = 0
porcentagemNumPares = 0
porcentagemNumImpares = 0

for y in range(7):
    for x in range(10):
        if matrizA[x][y] % 2 == 0:
            contadorNumPares += 1
        else:
            contadorNumImpares += 1

porcentagemNumPares = (contadorNumPares / 70) * 100
porcentagemNumImpares = (contadorNumImpares / 70) * 100

printMatrizBi(matrizA, 7)
print("\n A porcentagem de números pares na matriz A: %.2f  \n A porcentagem de números impares na matriz A: %.2f"%(porcentagemNumPares,porcentagemNumImpares))