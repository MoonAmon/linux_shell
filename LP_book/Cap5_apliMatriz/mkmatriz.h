#include <stdio.h>
#include <stdlib.h>
#define mkmatriz

void gerarMatriz(int matriz[],int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        matriz[i] = i+1;
    }

}

void printMatriz(int matriz[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d\n",matriz[i]);
    }
    
}