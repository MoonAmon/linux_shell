N = 0
I = 1
X = 0
RESTO: int = 0

while True:
    N += 1
    print("número atual: %d" % N)
    RESTO = N % 2
    if RESTO == 0:
        X += N
        print("somatório: %d" % X)
    I += 1
    if I > 500:
        break