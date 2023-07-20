#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD
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
=======

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
>>>>>>> 2f1782bc523f77da3b422bccf078b8919f0ac5a6
            }
            
        }
        
    }
<<<<<<< HEAD
     for (int i = 0; i < 20; i++)
    {
        printf("%d\n",matrizA[i]);
    }
    
    
=======
    for ( i = 0; i < 50; i++)
    {
        printf("%d",matrizC[i]);
    }
    
    
    
    
>>>>>>> 2f1782bc523f77da3b422bccf078b8919f0ac5a6
    return 0;
}
