from makeMatriz import printMatrizBi

matrizA = [[0 for i in range(5)] for j in range(4)]

for y in range(5):
    for x in range(4):
        print("digite os dados:")
        matrizA[x][y] = input()

printMatrizBi(matrizA, 5)