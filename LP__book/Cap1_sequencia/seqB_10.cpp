#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float R;
    const float pi = 3.14;

    printf("Digite o raio da circuferencia: ");
    scanf("%f",&R);

    float A=pi*(pow(R,2));
    float test=pow(R,2);

    printf("A area dessa circuferencia: %f\n %f",A,test);

    return 0;
}
