#include <stdint.h>
#include <stdlib.h>
#include <cstdio>

int main(int argc, char const *argv[])
{
    float temp;
    float VELm;

    printf("Digite o tempo gasto: ");
    scanf("%f",&temp);

    printf("Digite a velocidade media: ");
    scanf("%f",&VELm);

    float KMp=temp*VELm;
    float gas=KMp/13;

    printf("%2.fkm percorridos na viagem.\n",KMp);
    printf("%f litros de gasolina gastos.\n",gas);

    return 0;
}
