#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int serie,livros,redacao;
    int flag = 1;
    int alunostotal = 0;
    int livrostotal = 0;
    int alunos3 = 0;
    int alunos3nr = 0;
    int alunos4 = 0;
    int mlivros = 0;
    int escolha = 1;

    while (flag==1)
    {
        printf("Digite a serie do aluno (1)primeira, (2)segunda, (3)terceira, (4)quarta: ");
        scanf("%d",&serie);
        printf("Digite a quantidade de livros lidos por mês: ");
        scanf("%d",&livros);
        printf("Digite se gosta ou não de fazer redação (1) sim, (0) não: ");
        scanf("%d",&redacao);

        if (serie == 3)
        {
            alunos3++;

            if (redacao == 0)
            {
                alunos3nr++;
            }
            
        }

        if (serie == 4)
        {
            alunos4++;

            if (mlivros<livros)
            {
                mlivros=livros;
            }
            
        }

        livrostotal+=livros;
        alunostotal++;

        printf("Deseja continuar (1)sim, (0)não : ");
        scanf("%d",&escolha);

        if (escolha==0)
        {
            flag=0;
        } else {
            printf("Próximo aluno...\n");
        }
        
    }
    
    float PCnredacao = ((float)alunos3nr/alunos3)*100;
    printf("Maior quantidade de livros lido por um(a) aluno(a) da quarta série= %d\n",mlivros);
    printf("Quantidade de alunos da terceira série= %d\n",alunos3);
    printf("Percentual de alunos que não gosta de redação da terceira série= %.2f%\n",PCnredacao);

    return 0;
}
