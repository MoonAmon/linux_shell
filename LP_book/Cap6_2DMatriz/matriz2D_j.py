from makeMatriz import printMatrizBi,matrizBiOrdinaria,matrizBiAleatorio

matrizA = matrizBiAleatorio(5, 6, 20)
matrizB = matrizBiOrdinaria(5, 6, 0)

for y in range(5):
    for x in range(6):
        if matrizA[x][y] % 2 == 0:
            matrizB[x][y] = matrizA[x][y] + 5
        else:
            matrizB[x][y] = matrizA[x][y] - 4

printMatrizBi(matrizB, 10)
print("\n")
printMatrizBi(matrizA, 10)