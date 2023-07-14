lista=[1,2,3,4,5,6,7,8,9,10]
pesquisa = 7
começo = 1
final = len(lista)

while True:

    if começo < final:
        meio = int((começo + final) / 2)
        if pesquisa == lista[meio]:
            print("Foi localizado na posição %d"%meio)
            break
        elif pesquisa < lista[meio]:
            final = meio - 1
        else:
            começo = meio + 1
    else:
        print("Não foi localizado!")
        break