from makeMatriz import matrizBiOrdinaria,printMatrizBi,matrizBiAleatorio

matrizA = matrizBiAleatorio(4, 5, 10)
matrizB = matrizBiAleatorio(4, 5, 10)
fat = 1

for y in range(4):
    for x in range(5):
        for i in range(matrizA[x][y], 1, -1):
            fat *= i
        matrizB[x][y] = fat
        fat = 1

print("matriz A:")
printMatrizBi(matrizA, 5)

print("matriz B:")
printMatrizBi(matrizB, 5)