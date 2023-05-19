num=int(input("Digite o numero: "))
Cnum=0

while True:
    menu = int(input("Digite a opção do menu:\n adição: 1\n subtração: 2\n divisão: 3\n multiplicação: 4\n : "))

    if menu == 1:
        while Cnum<=10:
            x = num + Cnum
            print("%d + %d = %d"%(num,cnum,x))
            cnum += 1

    if menu == 2