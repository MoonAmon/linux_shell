a=[]
b=list(range(8))

for i in range(0,8,1):
    numA=int(input("num %a para matriz A: "%i))
    a.append(numA)

for i in range(0,8,1):
    b[i]=a[i]*3

print("",b)