notas = [6, 6, 3, 1, 7]
soma = 0
x = 0
while x < 5:
    soma += notas[x]
    x += 1
print("Média: %5.2f" % (soma / x))
