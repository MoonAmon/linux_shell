lista1 = [0, 0, 0, 0]
lista2 = [0, 0, 0, 0]

lista3 = []

x = 0

while x < len(lista1):
    lista1[x] = int(input("item %d:" % (x + 1)))
    x += 1
x = 0

while x < len(lista2):
    lista2[x] = int(input("item %d:" % (x + 1)))
    x += 1
x = 0

while True:
    lista3.append(lista1[x])
    lista3.append(lista2[x])
    x += 1
    if x == len(lista1):
        print(lista3)
        break
