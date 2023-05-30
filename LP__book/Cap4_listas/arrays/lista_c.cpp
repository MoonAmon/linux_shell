#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float A[20],B[20],C[20];

    for (int i = 0; i < 20; i++)
    {
        printf("\nElementos da matriz A índice= %d:",i);
        scanf("%f",&A[i]);
        printf("\nElementos da matriz B índice= %d:",i);
        scanf("%f",&B[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        C[i]=A[i]-B[i];
        printf("Resultados da matriz C índice= %d: %.2f\n",i,C[i]);
    }
        

    return 0;
}