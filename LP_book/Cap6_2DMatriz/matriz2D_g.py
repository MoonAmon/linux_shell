from makeMatriz import matrizBiAleatorio,printMatrizBi,matrizBiAleatorioFloat, matrizBiOrdinaria

matrizA = matrizBiAleatorioFloat(5, 4, 50)
matrizB = matrizBiOrdinaria(5, 4, 1)

for y in range(5):
    for x in range(4):
       matrizB[x][y] = 273.15 + matrizA[x][y]

for linha in matrizB:
    for elemento in linha:
        elementoFormat = str(elemento).split(".")[0]
        print(str(elementoFormat).center(6) + "K", end=" ")
    print()
print()
