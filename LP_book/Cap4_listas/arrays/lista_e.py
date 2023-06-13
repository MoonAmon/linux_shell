A=list(range(1,15))
B=list(range(1,15))
fat=1
resultadoA=0
resultadoB=0
fatA=1
fatB=0
for indice,i in enumerate(A):
    fatA=i
    while fat<i:
        fatA*=fat
        fat+=1
    fat=1
    B[indice]=fatA
    print(A,B)
print(A,B)


