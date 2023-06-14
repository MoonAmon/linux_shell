entrada = input().split()
N = int(entrada[0])
K = int(entrada[1])
sequencia = list(map(int, input().split()))
soma=0
somatotal=0
cont=0

for num in sequencia:
    if soma==0 and num == K:
        cont+=1
        
    somatotal+=num
    if somatotal==K:
        cont+=1
    elif somatotal>K:
        somatotal=0
print(cont)