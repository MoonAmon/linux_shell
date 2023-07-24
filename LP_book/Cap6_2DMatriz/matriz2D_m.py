from makeMatriz import printMatrizBi,matrizBiAleatorio

matrizA = matrizBiAleatorio(5, 5, 100)
somatorioDaDiagonalImpares = 0

for y in range(5):
    for x in range(5):
        if x == y and x % 2 == 0 and y % 2 == 0:
           somatorioDaDiagonalImpares += matrizA[x][y]

printMatrizBi(matrizA, 5)
print("\n Resultado da soma da diagonal impares: %d" % somatorioDaDiagonalImpares)