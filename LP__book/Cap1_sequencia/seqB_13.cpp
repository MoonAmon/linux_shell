#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float dist,temp,vel;

    printf("digite a dist percorrida em Km: ");
    scanf("%f",&dist);

    printf("digite o espaço de tempo em min: ");
    scanf("%f",&temp);

    vel=(dist*1000)/(temp*60);

    printf("a velocidade do projetil: %.2f m/s\n",vel);

    return 0;
}
