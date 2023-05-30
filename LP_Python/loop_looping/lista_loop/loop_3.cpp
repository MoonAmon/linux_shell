#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float mdI;
    int n=0,somaP=0,somaI=0,countI=0,countP=0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número (posição= %d): \n",i+1);
        scanf("%d",&n);
        int resto=n%2;
        if (resto==0)
        {
            countP++;
            somaP+=n;
        } else {
            countI++;
            somaI+=n;
            mdI=somaI/countI;
        }

    }
        printf("Contagem de números pares: %d\n Soma dos pares: %d\n ",countP,somaP);
        printf("Contagem de números impares: %d\n Soma dos impares: %d\n Média dos impares: %.2f\n",countI,somaI,mdI);
        

    return 0;
}
