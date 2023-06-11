baralho = input("Digite as cartas do baralho: ")

# Cria um conjunto com todas as cartas possíveis
cartas_possiveis = set()
for numero in range(1, 14):
    for naipe in ['C', 'E', 'U', 'P']:
        carta = f"{numero:02d}{naipe}"
        cartas_possiveis.add(carta)

# Cria um conjunto com as cartas informadas pelo usuário
cartas_informadas = set()
for i in range(0, len(baralho), 3):
    carta = baralho[i:i+3]
    cartas_informadas.add(carta)

# Verifica se há cartas faltando no baralho
cartas_faltando = cartas_possiveis - cartas_informadas

# Verifica se há cartas duplicadas no baralho
cartas_duplicadas = [carta for carta in cartas_informadas if baralho.count(carta) > 1]

# Imprime a saída conforme as verificações
naipes = ['Copas', 'Espadas', 'Ouros', 'Paus']
for naipe in naipes:
    if len(cartas_faltando) == 0 and len(cartas_duplicadas) == 0:
        print(0)
    elif len(cartas_faltando) > 0:
        print(len(cartas_faltando))
    else:
        print('erro')