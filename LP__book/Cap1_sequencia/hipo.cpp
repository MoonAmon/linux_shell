#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{   
    float A;
    float B;

    printf("digite o valor de a: ");
    scanf("%f",&A);

    printf("digite o valor de b: ");
    scanf("%f",&B);

    float x=sqrt((A*A)+(B*B));

    printf("Resultado e: %f",x);

    return 0;
}
