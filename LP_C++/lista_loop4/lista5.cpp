#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int numeroAtual,somaDosNumeros;
    do
    {
        printf("\nDigite os numeros para soma(0 para sair): ");
        scanf("%d",&numeroAtual);
        somaDosNumeros+=numeroAtual;
    } while (numeroAtual!=0);
    printf("Soma total dos numeros: %d\n",somaDosNumeros);
    
    return 0;
}
