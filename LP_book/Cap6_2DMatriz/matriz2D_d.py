from makeMatriz import printMatrizBi,matrizBiOrdinaria,matrizUniOrdinaria
fat = 1
matrizA = matrizUniOrdinaria(10,20)
matrizC = matrizBiOrdinaria(3,10,0)

for y in range(3):
    for x in range(10):
        if y == 0:
            matrizC[x][y] = 5 + matrizA[x]
        elif y == 1:
            for i in range(matrizA[x],1,-1):
                fat *= i
            matrizC[x][y] = fat
            fat = 1
        else:
            matrizC[x][y] = matrizA[x] * matrizA[x]

printMatrizBi(matrizC,5)

            

