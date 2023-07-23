from makeMatriz import matrizBiOrdinaria,matrizUniOrdinaria,printMatrizBi

matrizA = matrizUniOrdinaria(12, 10)
matrizB = matrizUniOrdinaria(12, 20)
matrizC = matrizBiOrdinaria(2, 12, 5)


for y in range(2):
    for x in range(12):
        if y == 0:
            matrizC[x][y] = 2 * matrizA[x]
        else:
            matrizC[x][y] = matrizB[x] - 5

printMatrizBi(matrizC, 5)
