from makeMatriz import printMatrizBi,matrizBiAleatorio,matrizUniOrdinaria

matrizA = matrizBiAleatorio(8, 8, 20)
matrizB = matrizUniOrdinaria(8, 0)
somatorioTotalDosElementos = 0

for y in range(8):
    for x in range(8):
        for i in range(8):
            if i == x:
                matrizB[i] += matrizA[x][y]

printMatrizBi(matrizA, 6)

for i in matrizB:
    print(i)

for i in matrizB:
    somatorioTotalDosElementos += i

print("Somatorio total dos elementos da matriz B: %d" % somatorioTotalDosElementos)
