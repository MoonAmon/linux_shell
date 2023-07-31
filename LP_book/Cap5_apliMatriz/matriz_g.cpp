#include <stdio.h>
#include <stdlib.h>
#include "mkmatriz.h"

int main(int argc, char const *argv[])
{
    int matrizA[300],matrizB[300],i,x,j,pesquisa,comeco = 0, finale = 299, meio;
    bool achou = false;

    gerarMatriz(matrizA, 300);

    for (i = 0; i < 300; i++)
    {
        matrizB[i] = matrizA[i] + 2;
    }

    for ( i = 0; i < 299; i++)
    {
        for ( j = i + 1; j < 300; j++)
        {
            if (matrizB[i] > matrizB[j])
            {
                x = matrizB[i];
                matrizB[i] = matrizB[j];
                matrizB[j] = x;
            }
            
        }
        
    }

    printMatriz(matrizB, 300);
    printf("\nDigite um elemento para buscar na matriz B: \n");
    scanf("%d",&pesquisa);

    while (achou == false && comeco <= finale)
    {
        meio = (comeco+finale)/2;
        printf("meio = %d\n",meio);
        if (matrizB[meio] == pesquisa)
        {
            achou = true;
        }
        else if (matrizB[meio] < pesquisa)
        {
            comeco = meio + 1;
        }
        else 
        {
            finale = meio - 1;
        }
        
        
    }
    
    if (achou == true)
    {
        printf("Elemento %d no indice %d!\n", pesquisa, meio);
    }
    else
    {
        printf("Elemento %d não encontrado na matriz!\n", pesquisa);
    }
    

    

    

    return 0;
}
