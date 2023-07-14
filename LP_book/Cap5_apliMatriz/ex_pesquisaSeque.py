lista=[12,4,2,5,15,3,535,2,34,6,8]
resp=True
acha=False
pesquisa = 60
i = 0

while resp == True:
    if i < len(lista) and acha == False:
        if pesquisa == lista[i]:
            acha=True
        else:
            i+=1
    elif acha == True:
        print("Foi localizado na posição %d"%int(i))
        break
    else:
        print("Não foi localizado na lista!")
        break