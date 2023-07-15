#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double matrizA[15]={12, 53, 5, 1, 27, 8, 42, 19, 10, 71, 33, 14, 6, 93, 25},matrizB[15], fat = 1;
    int i = 0, j = 0;

    for (i = 0; i < 15; i++)
    {
        for (j = 1; j <= matrizA[i]; j++)
        {
            fat *= j;
        }
        matrizB[i] = fat;
        fat=1;
        
    }

    for ( i = 0; i < 15; i++)
    {
        for ( j = i+1; j <= 14; j++)
        {
            if (matrizB[i] > matrizB[j])
            {
                double X = matrizB[i];
                matrizB[i] = matrizB[j];
                matrizB[j] = X;
            }
        }
    }
    
    for ( i = 0; i < 15; i++)
    {
        printf("%.0f\n", matrizB[i]);
    }
    
    
    return 0;
}
