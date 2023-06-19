A=list(range(1,21))
B=[]
cont=-1

while True:
    B.append(A[cont])
    cont-=1
    if len(B)==len(A):
        print(B)
        break