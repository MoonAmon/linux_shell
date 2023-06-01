n=1
i=1

while i <= 200:
    resto = n % 4
    if resto == 0:
        print("%d é divisivel por 4!\n"%n)
    n+=1
    i+=1
