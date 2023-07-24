from makeMatriz import printMatrizBi,matrizBiOrdinaria

matrizA = matrizBiOrdinaria(5, 5, 25)
matrizB = matrizBiOrdinaria(5, 5, 0)

for y in range(5):
    for x in range(5):
        if y == x:
            matrizB[x][y] = 3 * matrizA[x][y]
        else:
            matrizB[x][y] = 2 * matrizA[x][y]

printMatrizBi(matrizB,5)