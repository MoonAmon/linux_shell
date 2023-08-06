#include <stdio.h>
#include <stdlib.h>
#include "mkmatriz.h"

int main(int argc, char const *argv[])
{
    int matrizA[20], matrizB[20], numTemp = 1, elementoTemp;
    gerarMatriz(matrizA, 20);

    for (int i = 0; i < 20; i++)
    {
        elementoTemp = matrizA[i];
        for (int j = 0; j < 3; j++)
        {
            numTemp *= elementoTemp;
        }
        matrizB[i] = numTemp;
        numTemp = 1;
        
    }

    int pesquisa, cont=0;
    bool achou = false;
    
    printf("Digite o elemento para pesquisa:\n");
    scanf("%d",&pesquisa);

    while (achou == false && cont < 20)
    {
        if (pesquisa == matrizB[cont])
        {
            printf("Elemento %d encontrado no indice %d!\n", pesquisa,cont);
            achou = true;
        }
        else {
            cont++;
        }
        
        
    }
    if (achou == false)
    {
        printf("Elemento %d não encontrado!\n",pesquisa);
    }

    printMatriz(matrizB, 20);
    
    
    

    return 0;
}
