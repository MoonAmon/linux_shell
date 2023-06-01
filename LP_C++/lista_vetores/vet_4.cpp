#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    printf("\nDigite o número de alunos: ");
    scanf("%d",&n);
    float G1[n],G2[n],soma[n],media[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nDigite a nota G1 do aluno %d: ",i+1);
        scanf("%f",&G1[i]);
        printf("\nDigite a nota G2 do aluno %d: ",i+1);
        scanf("%f",&G2[i]);
    }
    for (int i = 0; i < n; i++)
    {   
        soma[i]=G1[i]+G2[i];
        media[i]=soma[i]/2;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Aluno número %d\nMédia: %.2f\n Nota G1: %.2f\n Nota G2: %.2f\n",i+1,media[i],G1[i],G2[i]);
    }
    
    


    return 0;
}
