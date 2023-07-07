#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrizA[10];
    int somaTotal, maiorTemp, menorTemp = 0;

    for (int i = 0; i < 10; i++)
    {
       matrizA[i] = i+2; 
    }
    menorTemp = matrizA[0];
    
    for (int i = 0; i < 10; i++)
    {
        if (maiorTemp < matrizA[i])
        {
            maiorTemp = matrizA[i];
        }
        if (menorTemp > matrizA[i])
        {
            menorTemp = matrizA[i];
        }
        
        somaTotal += matrizA[i];
        
    }

    float media = somaTotal / 10;
    printf("maior tempe: %d\n menor temp: %d\n média: %.2f\n", maiorTemp,menorTemp,media);
    
    
    return 0;
}
