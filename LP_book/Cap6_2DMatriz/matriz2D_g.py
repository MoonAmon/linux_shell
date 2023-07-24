from makeMatriz import matrizBiAleatorioFloat, matrizBiOrdinaria

matrizA = matrizBiAleatorioFloat(5, 4, 50)
matrizB = matrizBiOrdinaria(5, 4, 1)

for y in range(5):
    for x in range(4):
       matrizB[x][y] = 273.15 + matrizA[x][y]

for linha in matrizA:
    for elemento in linha:
        elementoFormat = '{:.2f}'.format(elemento)
        print(str(elementoFormat).center(6) + "C°", end=" ")
    print()
print()

for linha in matrizB:
    for elemento in linha:
        elementoFormat = '{:.2f}'.format(elemento)
        print(str(elementoFormat).center(6) + "K", end=" ")
    print()
print()
