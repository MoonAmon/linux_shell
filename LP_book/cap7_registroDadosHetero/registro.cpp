#include <stdlib.h>
#include <stdio.h>

typedef float bimestre[4];

typedef struct 
{
    char nome[50];
    char turma;
    int sala;
    bimestre notas;
} cad_aluno;


int main(int argc, char const *argv[])
{   
    cad_aluno aluno[8];
    int i, j;

    for ( i = 0; i < 8; i++)
    {
        printf("\nAluno %d\n", i+1);

        printf("Digite o nome do aluno: ");
        scanf("%s ", aluno[i].nome);

        printf("Digite a turma do aluno: ");
        scanf("%c ",&aluno[i].turma);

        printf("Digite o nome do aluno: ");
        scanf("%d", &aluno[i].sala);

        for ( j = 0; j < 4; j++)
        {
            printf("Digite a nota do %d bimestre do aluno: \n",j+1);
            scanf("%f", &aluno[i].notas[j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}
