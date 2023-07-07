list1=[]
list2=[]
list3=[]
while True:
    n=int(input("Digite um número list 1 (0 sair): "))
    if n==0:
        break
    list1.append(n)

x=0
while x<len(list1):
    n=int(input("Digite um número list 2: "))
    x+=1
    list2.append(n)

x=0

list3.append(list1)
list3.append(list2)
print(list3)