#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrizA[6], matrizB[6], matrizCpar[6], matrizDimpar[6], i;
    int contC, contD = 0;
    for ( i = 0; i < 6; i++)
    {
        matrizA[i] = i;
        matrizB[i] = i + 2;
    }
    for ( i = 0; i < 6; i++)
    {
        if ((i%2) == 0)
        {
            matrizCpar[contC] = matrizA[i];
            matrizCpar[contC+1] = matrizB[i];
            contC+=2;
        } else {
            matrizDimpar[contD] = matrizA[i];
            matrizDimpar[contD+1] = matrizB[i];
            contD+=2;
        }
        
    }
    for ( i = 0; i < 6; i++)
    {
        printf("Resultados: A: %d, B: %d, C: %d, D: %d\n", matrizA[i], matrizB[i], matrizCpar[i], matrizDimpar[i]);
    }
    
    
    
    return 0;
}
