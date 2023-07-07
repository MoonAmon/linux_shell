#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrizA[12], matrizB[12], i;

    for (i = 0; i < 12; i++)
    {
        matrizA[i] = i; 
    }
    for ( i = 0; i < 12; i++)
    {
        if ((matrizA[i]%2) != 0)
        {
            matrizB[i] = matrizA[i] * 2;
        } else {
            
            matrizB[i] = matrizA[i];
        }
        
    }
    for (i = 0; i < 12; i++)
    {
        printf("A: %d, B: %d\n",matrizA[i],matrizB[i]);
    }
    
    
     
    return 0;
}
