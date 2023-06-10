#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int alunos = 0;
    int Talunos = 0;
    float nota = 0;
    float total = 0;
    float media = 0;
    int cont = 1;

    printf("Digite o numero de alunos: \n");
    scanf("%d",&alunos);
    Talunos=alunos;
    while (alunos>0)
    {   
        printf("Digite a nota do aluno %d: \n",cont);
        scanf("%d",&nota);
        total+=nota;
        alunos--;
        cont++;
    }
    media=total/Talunos;
    printf("Média da turma = %.2f\n",media);
    


    return 0;
}

