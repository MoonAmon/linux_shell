#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float matrizA[20], matrizB[20]; 

    for (int i = 0; i < 20; i++)
    {
        matrizA[i] = i * 2;
    }
    for (int i = 0; i < 20; i++)
    {
        matrizB[i] = matrizA[i] * 1.8 + 32; 
    }
    for (int i = 0; i < 20; i++)
    {
        printf("Celsius %.2f, Fahrenheit %.2f\n",matrizA[i], matrizB[i]);
    }
    
     
    return 0;
}
