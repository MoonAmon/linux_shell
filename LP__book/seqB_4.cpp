#include <stdint.h>
#include <stdlib.h>

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

    printf("")
    return 0;
}
