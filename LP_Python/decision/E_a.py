n1=int(input("Digite primeiro número: "))
n2=int(input("Digite segundo número: "))

if n1<n2:
    x=n2-n1
    print("A diferença entre %d e %d: %d"%(n2,n1,x))
else:
    x=n1-n2
    print("A diferença entre %d e %d: %d" % (n1, n2, x))