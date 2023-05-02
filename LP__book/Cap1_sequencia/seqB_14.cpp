#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float raio,vol;
    const float pi=3.1415;

    printf("digite o raio da esfera: ");
    scanf("%f",&raio);

    vol=pow(raio,3)*pi*1.333;

    printf("o volume dessa esfera: %.2f\n",vol);

    return 0;
}
