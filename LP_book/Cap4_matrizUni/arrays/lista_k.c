#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrizA[10], matrizB[10];
    for (int i = 0; i < 10; i++)
    {
        matrizA[i] = i+1; 
    }
    for (int i = 0; i < 10; i++)
    {
        matrizB[i] = matrizA[i]-(matrizA[i]*2);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d, %d\n",matrizA[i], matrizB[i]);
    }

    
    

    return 0;
}
