from makeMatriz as mk

# x = numero de linhas 
# y = numero de colunas

matrizA = mk.matrizUniOrdinaria(7,6)
matrizB = mk.matrizUniOrdinaria(7,10)

matrizC = matrizBiOrdinaria(2,7,1)

for y in range(2):
    for x in range(7):
        if y == 0:
            matrizC[x][y] = matrizA[x]
        else:
            matrizC[x][y] = matrizB[x]

printMatrizBi(matrizC,6)