#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numeroTemporario ,soma = 0;
    int vetorA[5];
    int vetorB[5];
    for (int i = 0; i < 5; i++)
    {
        printf("digite %d\n",i);
        scanf("%d",&vetorA[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (numeroTemporario = vetorA[i]; numeroTemporario > 0; numeroTemporario--)
        {
            soma+=numeroTemporario;
        }
       vetorB[i]=soma;
       soma=0;
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("vetorB %d: %d\n",i,vetorB[i]);
    }
    
    
    
    return 0;
}
