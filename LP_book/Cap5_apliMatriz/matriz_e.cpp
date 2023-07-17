#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrizA[20], matrizB[30], matrizC[50];
    int i, x = 0,j = 0;
    for ( i = 0; i <= 20; i++)
    {
        matrizC[i] = matrizA[i];
    }
    for ( i = 21; i < 50; i++)
    {
        matrizC[i] = matrizC[x]; 
        x++;
    }
    for ( i = 0; i < 50; i++)
    {
        for ( j = 0 + i; j < 50; j++)
        {
            if (matrizC[i] < matrizC[j])
            {
                x = matrizC[i];
                matrizC[i] = matrizC[j];
                matrizC[j] = x;
            }
            
        }
        
    }
    for ( i = 0; i < 50; i++)
    {
        printf("%d",matrizC[i]);
    }
    
    
    
    
    return 0;
}
