class Aluno:
    def __init__(self):
        self.NOME = ""
        self.TURMA = ""
        self.SALA = 0
        self.NOTAS = [0.0] * 4


# Lista para armazenar os alunos
ALUNO = [Aluno() for _ in range(8)]

# Loop para obter as informações dos alunos
for i in range(8):
    print("\nAluno", i + 1)

    ALUNO[i].NOME = input("Digite o nome: ")
    ALUNO[i].TURMA = input("Digite a turma: ")
    ALUNO[i].SALA = int(input("Digite a sala: "))

    print("Digite as notas dos 4 bimestres:")
    for j in range(4):
        ALUNO[i].NOTAS[j] = float(input())

for i in range(7):
    for j in range(i + 1, 8, 1):
        if ALUNO[i].NOME > ALUNO[j].NOME:
            X = ALUNO[i]
            ALUNO[i] = ALUNO[j]
            ALUNO[j] = X

# Loop para imprimir as informações dos alunos e suas notas
print("\nInformacoes dos alunos e suas notas:")
for i in range(8):
    print("\nAluno", i + 1)
    print("Nome:", ALUNO[i].NOME)
    print("Turma:", ALUNO[i].TURMA)
    print("Sala:", ALUNO[i].SALA)

    print("Notas:", end=" ")
    for j in range(4):
        print(ALUNO[i].NOTAS[j], end=" ")
    print()
