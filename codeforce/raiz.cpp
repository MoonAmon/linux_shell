#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float R,N;
    do
    {
        printf("Digite um numero nao negativo: ");
        scanf("%f",&N);
    } while (N<0);
    R = sqrt(N);
    printf("%.2f\n",R);
    
    return 0;
}
