num = int(input("Digite um número: "))

if num == 1:
    print("Número não é primo!")
elif num == 2:
    print("Número é primo!")
else:
    div = 2
    while div <= num / 2:
        if num % div == 0:
            print("Número não é primo!")
            break
        div += 1
    else:
        print("Número é primo!")
