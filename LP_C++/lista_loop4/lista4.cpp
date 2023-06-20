#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numeroAtual,restoDe2;
    do
    {
        printf("\nDigite um número:");
        scanf("%d",&numeroAtual);
        restoDe2=numeroAtual%2;
        if (restoDe2==0)
        {
            printf("Número %d é par!\n",numeroAtual);
        } else {
            printf("Número %d é impar!\n",numeroAtual);
        }
        
    } while (numeroAtual!=0);
    
    
    
    return 0;
}
