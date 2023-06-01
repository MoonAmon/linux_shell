#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int Vet1[5],Vet2[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Vetor 1 posição %d numero: \n",i);
        scanf("%d",&Vet1[i]);
        printf("Vetor 2 posição %d numero: \n",i);
        scanf("\n");
        scanf("%d",&Vet2[i]);

    } for (int i = 0; i < 5; i++)
    {
        printf("Soma indice %d= %d\n",i,Vet1[i]+Vet2[i]);
        if (Vet1[i]>Vet2[i])
        {
            printf("Diferença indice %d= %d\n",i,Vet1[i]-Vet2[i]);
        } else {
            printf("Diferença indice %d= %d\n",i,Vet2[i]-Vet1[i]);
        }
        printf("Produto indice %d= %d\n",i,Vet1[i]*Vet2[i]);
        printf("Divisão indice %d= %d\n",i,Vet1[i]/Vet2[i]);
    }
    
    
    return 0;
}
