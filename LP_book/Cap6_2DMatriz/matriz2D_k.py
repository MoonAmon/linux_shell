from makeMatriz import printMatrizBi,matrizBiAleatorio

matrizA = matrizBiAleatorio(5, 5, 20)
somatorio = 0

for y in range(5):
    for x in range(5):
        if x == y:
            somatorio += matrizA[x][y]

printMatrizBi(matrizA, 7)
print("Resultado do somatorio da diagonal: %d"%somatorio)