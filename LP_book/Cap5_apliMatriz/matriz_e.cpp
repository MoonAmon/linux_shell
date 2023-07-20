#include <stdio.h>
#include <stdlib.h>
#include <ctime>

int main(int argc, char const *argv[])
{
    int matrizA[20], matrizB[30];

    for (int i = 0; i < 20; i++)
    {
     
        matrizA[i] += rand() % 50;
    }
    for (int i = 0; i < 19; i++)
    {
        for (int j = i + 1; j < 20; j++)
        {
            if (matrizA[i]>matrizA[j])
            {
                int X = matrizA[i];
                matrizA[i] = matrizA[j];
                matrizA[j] = X;
            }
            
        }
        
    }
     for (int i = 0; i < 20; i++)
    {
        printf("%d\n",matrizA[i]);
    }
    
    
    return 0;
}
