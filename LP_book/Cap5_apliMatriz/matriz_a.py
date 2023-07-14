matrizA=[2,34,1,5,6,47,6,8]
i=0
j=0

while i < len(matrizA):
    j = i + 1
    while j < len(matrizA):
        if matrizA[j] > matrizA[i]:
            X = matrizA[i]
            matrizA[i] = matrizA[j]
            matrizA[j] = X
        j += 1
    i +=1

print(matrizA)