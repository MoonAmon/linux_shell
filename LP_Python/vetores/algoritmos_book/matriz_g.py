A = ["lousi", "maniu", "koko", "doidu"]
B = ["ande", "emanu", "kiki", "abora"]
C = []
cont = 0

for e in A:
    C.append(e)

for e in B:
    C.append(e)

while cont < len(C):
    print(C[cont].title())
    cont += 1
