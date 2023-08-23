import numpy as np
from tkinter import *

root = Tk()
root.title("Diario")
root.geometry('400x300')
cont = 0


class DIARIO:
    def __init__(self):
        self.nome = None
        self.nota = list(range(4))


diario = [DIARIO() for _ in range(5)]


def cadastro():
    top_cad = Toplevel()
    top_cad.title('Cadastro de alunos')

    frame1 = LabelFrame(top_cad, text="Digite o nome do aluno.")
    frame1.grid(row=2, column=1, padx=10, pady=10)

    nome_aluno = Entry(frame1, borderwidth=3, width=40)
    nome_aluno.grid(row=0, column=0, padx=10, pady=10)

    frame2 = LabelFrame(top_cad, text="Digite as notas bimestrais.")
    frame2.grid(row=4, column=1, padx=10, pady=10)

    exibir1 = Text(frame1, width=40, height=1)
    exibir1.grid(row=7, column=0, padx=10, pady=10)

    nota_1 = Text(top_cad, width=5, height=1, borderwidth=3)
    nota_1.grid(row=3, column=0, padx=10, pady=10)
    nota_2 = Text(top_cad, width=5, height=1, borderwidth=3)
    nota_2.grid(row=3, column=1, padx=10, pady=10)
    nota_3 = Text(top_cad, width=5, height=1, borderwidth=3)
    nota_3.grid(row=3, column=2, padx=10, pady=10)
    nota_4 = Text(top_cad, width=5, height=1, borderwidth=3)
    nota_4.grid(row=3, column=3, padx=10, pady=10)

    def exibir_nome():
        global cont
        exibir1.insert(END, str(diario[cont].nome))

    def cad_dados(nome):
        global cont
        diario[cont].nome = nome
        nome_aluno.delete(0,END)
        cont += 1

    btn_cad = Button(top_cad, text='Cadastrar', padx=5, pady=5, command=lambda: cad_dados(nome_aluno.get()))
    btn_cad.grid(row=4, column=1, padx=10, pady=10)

    btn_exibir = Button(top_cad, text='Exibir', padx=5, pady=5, command=exibir_nome)
    btn_exibir.grid(row=5, column=1, padx=10, pady=10)




def pesquisa():
    nomePesquisa = ""  # Defina aqui como deseja obter o nome a ser pesquisado
    achou = False
    cont = 0
    while achou is False and cont < 5:
        if nomePesquisa == diario[cont].nome:
            achou = True
        else:
            cont += 1


def exibir():
    pass


button_cadastro = Button(root, text="Cadastro de Aluno", padx=30, pady=30, command=cadastro)
button_cadastro.pack()
button_pesquisa = Button(root, text="Procurar Registros", padx=30, pady=30, command=pesquisa)
button_pesquisa.pack()
button_exibir = Button(root, text="Exibir Registros", padx=30, pady=30, command=exibir)
button_exibir.pack()
button_sair = Button(root, text="Sair", padx=30, pady=30)
button_sair.pack()

root.mainloop()
#