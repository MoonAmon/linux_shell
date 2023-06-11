pratos = 5
pilha = list(range(1,pratos+1))
while True:
    print("\nExistem %d patros na pilha" % len(pilha))
    print("Pilha atual:",pilha)
    print("Digite E para empilhar um novo prato,")
    print("ou D para desempilhar. S para sair.")
    operação = input("Operação (E, D ou S):")
    if operação == "D":
        if(len(pilha))>0:
            lavado = pilha.pop(-1)
            print("Prato %d lavado" % lavado)
        else:
            print("Pilha vazia!")
    elif operação == "E":
        pratos+=1
        pilha.append(pratos)
    elif operação == "S":
        break
    else:
        print("Operação inválida! Digite apenas E, D ou S!")