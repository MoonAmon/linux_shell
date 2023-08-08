import numpy as np
from tkinter import *

root = Tk()
root.title("Diario")


class DIARIO:
    def __init__(self):
        self.nome = None
        self.nota = list(range(4))


diario = [DIARIO() for _ in range(5)]


def cadastro():
    top_cad = Toplevel()
    top_cad.title('Cadastro de alunos')
    frame1 =



def pesquisa(nomePesquisa):
    achou = False
    cont = 0
    while achou is False and cont < 5:
        if nomePesquisa == diario[cont].nome:
            achou = True
        else:
            cont+=1



def exibir():
    pass


button_cadastro = Button(root, text="Cadastro de Aluno", padx=30, pady=30, command=cadastro).pack()
button_pesquisa = Button(root, text="Procurar Registros", padx=30, pady=30, command=pesquisa).pack()
button_exibir = Button(root, text="Exibir Registros", padx=30, pady=30, command=exibir).pack()
button_sair = Button(root, text="Sair", padx=30, pady=30)
root.mainloop()
