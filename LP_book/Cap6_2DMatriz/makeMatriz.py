import random

def matrizNumAleatorio(matriz):
    num = 0
    tamanho = len(matriz)
    for num in range(tamanho):
        matriz[num] = random.randint(1, 999)
    return matriz

def matrizBiAleatorio(tamanhoX, tamanhoY, ateNum):
    matriz = [[0 for i in range(tamanhoX)] for j in range(tamanhoY)]
    x = 0
    y = 0
    for x in range(tamanhoX):
        for y in range(tamanhoY):
            matriz[x][y] = random.randint(0, ateNum)
    return matriz

def nomeAleatorio(tamanho):
    vogais = 'aeiou'
    consoantes = 'bcdfghjklmnpqrstvwxyz'
    nome = ''
    for i in range(tamanho):
        if i % 2 == 0:
            nome += random.choice(consoantes)
        else:
            nome += random.choice(vogais)
        return nome.capitalize()

def printMatrizBi(matriz, tamanhoElemento):
    for linha in matriz:
        for elemento in linha:
            print(str(elemento).center(tamanhoElemento,"."), end="  ")
        print()