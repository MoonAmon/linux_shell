A = list(range(0,12))
B = []
i = len(A)

while i > 0:
    B.append(A[i-1])
    i-=1

print(B)