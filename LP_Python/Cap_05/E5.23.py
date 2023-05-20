num = int(input("Digite o numero: "))
Cnum = 1

while True:
    menu = int(input("Digite a opção do menu:\n adição: 1\n subtração: 2\n multiplicação: 3\n divisão: 4\n : "))

    if menu == 1:
        while True:
            x = num + Cnum
            print("%d + %d = %d" % (num, Cnum, x))
            Cnum += 1
            if Cnum > 10:
                Cnum = 1
                break

    elif menu == 2:
        while True:
            x = num - Cnum
            print("%d - %d = %d" % (num, Cnum, x))
            Cnum += 1
            if Cnum > 10:
                Cnum = 1
                break

    elif menu == 3:
        while True:
            x = num * Cnum
            print("%d * %d = %d" % (num, Cnum, x))
            Cnum += 1
            if Cnum > 10:
                Cnum = 1
                break

    elif menu == 4:
        while True:
            x = num / Cnum
            print("%d / %d = %.2f" % (num, Cnum, x))
            Cnum += 1
            if Cnum > 10:
                Cnum = 1
                break

    elif menu == 0:
        break

    else:
        print("Numero inválido!")
