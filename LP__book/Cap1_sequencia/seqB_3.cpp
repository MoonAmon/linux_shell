#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float raio;
    float alt;
    const float pi = 3.14;

    printf("Digite a altura da lata: ");
    scanf("%f",&alt);

    printf("Digite o raio da lata: ");
    scanf("%f",&raio);

    float vol=sqrt(raio)*pi*alt;

    printf("Volume da lata: %f\n",vol);

    return 0;
}
