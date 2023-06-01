#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float fah;
    float cel;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f",&fah);

    cel=((fah-32)*5)/9;

    printf("Temperatura em celsius: %2.f\n",cel);


    return 0;
}
