#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrizA[12]{12,3,76,4,32,68,79,5,34,98,56,12},matrizB[12]{23,45,34,2,67,8,123,65,87,65,34,23},matrizC[12];
    int i,j;

    for ( i = 0; i <= 12; i++)
    {
        for ( j = i+1; j <= 11; j++)
        {
            if (matrizA[i] > matrizA[j])
            {
                int X = matrizA[i];
                matrizA[i] = matrizA[j];
                matrizA[j] = X;
            }
            
        }
        
    }

    for ( i = 0; i <= 12; i++)
    {
        for ( j = i+1; j <= 11; j++)
        {
            if (matrizB[i] > matrizB[j])
            {
                int X = matrizB[i];
                matrizB[i] = matrizB[j];
                matrizB[j] = X;
            }
        }
        
    }

    for ( i = 0; i <= 12; i++)
    {
        matrizC[i] = matrizA[i] + matrizB[i];
    }

    for (i = 0; i <= 12; i++)
    {
        for (j = i+1; j <= 11; j++)
        {
            if (matrizC[i] < matrizC[j])
            {
                int X = matrizC[i];
                matrizC[i] = matrizC[j];
                matrizC[j] = X;
            }
            
        }
        
    }

    for ( i = 0; i < 12; i++)
    {
        printf("C: %d\n",matrizC[i]);
    }

    for ( i = 0; i < 12; i++)
    {
        printf("A; %d\n",matrizA[i]);
    }
    
    
    
    
    
    

    return 0;
}
