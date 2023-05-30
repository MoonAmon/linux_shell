RESTO= float (0)
SOMAP= float (0)
SOMAI= float (0)
CONTP= float (0)
CONTI= float (0)
MDI= float (0)


for i in range(1,11,1):
    N = int(input("Digite %d numeros: "%i))
    RESTO = N%2
    if RESTO==0:
        CONTP+=1
        SOMAP+=N
    else:
        CONTI+=1
        SOMAI+=N
        MDI=SOMAI/CONTI

print("contagem de num pares: %d\n soma dos num pares: %d\n "%(CONTP,SOMAP))
print("contagem de num impares: %d\n media dos num impares: %.2f"%(CONTI,MDI))


