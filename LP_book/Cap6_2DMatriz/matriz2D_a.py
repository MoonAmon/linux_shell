from makeMatriz import matrizBiAleatorio,printMatrizBi
import makeMatriz

matriazA = matrizBiAleatorio(5,5,1000)
matriazB = matrizBiAleatorio(5,5,1)
matriazC = matrizBiAleatorio(5,5,0)

for x in range(5):
    for y in range(5):
        matriazC[x][y] = matriazA[x][y] + matriazB[x][y]

printMatrizBi(matriazC,10)