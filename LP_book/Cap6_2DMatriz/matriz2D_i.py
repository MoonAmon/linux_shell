from makeMatriz import printMatrizBi, matrizBiOrdinaria

fat = 1
cont = 0
matrizA = matrizBiOrdinaria(7, 7, 12)
matrizB = matrizBiOrdinaria(7, 7, 0)

for y in range(7):
    for x in range(7):
        if x == y and x % 2 != 0 and y % 2 !=0:
            for i in range(matrizA[x][y], 1, -1):
                fat *= i
            matrizB[x][y] = fat
            fat = 1
        else:
            for i in range(1, matrizA[x][y] + 1):
                cont += i
            matrizB[x][y] = cont
            cont = 0

printMatrizBi(matrizB, 10)