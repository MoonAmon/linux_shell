#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A[8];
    int B[8];

    for (int i = 0; i < 8; i++)
    {
        printf("\nDigite os elementos do vetor A num %d : ",i);
        scanf("%d",&A[i]);
    }
    for (int i = 0; i < 8; i++)
    {
        B[i]=A[i]*3;
        printf("Resultado índicev%d : %d\n",i,B[i]);
    }
    
    
    return 0;
}
