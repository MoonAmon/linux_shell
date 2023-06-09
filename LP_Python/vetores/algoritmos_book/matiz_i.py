A = list(range(10,20))
B = list(range(0,10))
C = list(range(20,30))
D = []
i = 0

while i<len(A):
    D.append(A[i])
    D.append(B[i])
    D.append(C[i])
    i+=1

print(D)