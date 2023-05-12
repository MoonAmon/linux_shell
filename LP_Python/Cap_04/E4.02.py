vel=int(input("Digite sua velocidade "))

if vel>80:
    kmPass=vel-80
    Multa=kmPass*5

    print("Multa R$%.2f"%Multa)