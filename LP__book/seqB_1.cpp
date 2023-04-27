#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float Cel;
    float Fah;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f",&Cel);

    Fah=(1.8*Cel)+32;

    printf("Temperatura em Faheaint: %2.f",Fah);


    return 0;
}
