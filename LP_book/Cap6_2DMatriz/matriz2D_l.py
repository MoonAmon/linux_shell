from makeMatriz import printMatrizBi,matrizBiAleatorio

matrizA = matrizBiAleatorio(15, 15, 20)
somatorioDosParesDiagonal = 0

for y in range(15):
    for x in range(15):
        if x == y and x % 2 == 0:
            somatorioDosParesDiagonal += matrizA[x][y]

print("Resultado da soma dos elementos pares da diagonal: %d" % somatorioDosParesDiagonal)
print("\n")
printMatrizBi(matrizA, 7)