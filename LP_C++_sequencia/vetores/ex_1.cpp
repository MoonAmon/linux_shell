#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vetor[5];
    for (int count = 0; count < 5; count++)
    {
        printf("Digite um valor inteiro: \n");
        scanf("%d",&vetor[count]);
    } 
    for (int count = 0; count < 5; count++)
    {
        printf("Posição: %d\n Valor armazenado: %d\n",count,vetor[count]);
    }
    

    return 0;
}
