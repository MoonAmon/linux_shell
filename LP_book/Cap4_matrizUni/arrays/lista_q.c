#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float matrizA[20], matrizB[20]; 
    int i;

    for (i = 0; i < 20; i++)
    {
        matrizA[i] = i * 2;
    }
    for (i = 0; i < 20; i++)
    {
        if ((i%2) == 0)
        {
            matrizB[i] = matrizA[i] / 2;
        } else {
            matrizB[i] = matrizA[i] * 1.5;
        }
        
    }
    for (i = 0; i < 20; i++)
    {
        printf("A: %.2f  B: %.2f\n",matrizA[i],matrizB[i]);
    }
    
    
    
    return 0;
}
