from makeMatriz import printMatrizBi,matrizBiAleatorio

matrizA = matrizBiAleatorio(7, 7, 233)
contador = 0

for y in range(7):
    for x in range(7):
        if matrizA[x][y] % 2 == 0:
            contador += 1


printMatrizBi(matrizA, 5)
print("Exitem %d elementos pares na matriz A!" % contador)