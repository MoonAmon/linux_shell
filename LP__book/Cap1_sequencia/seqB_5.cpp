#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float A;
    float B;
    float C;
    float D;
    float a1,a2,a3,a4,a5,a6;
    float m1,m2,m3,m4,m5,m6;

    printf("Digite o numero A: ");
    scanf("%f",&A);

    printf("Digite o numero B: ");
    scanf("%f",&B);

    printf("Digite o numero C: ");
    scanf("%f",&C);

    printf("Digite o numero D: ");
    scanf("%f",&D);

    a1=A+B;
    a2=A+C;
    a3=A+D;
    a4=B+C;
    a5=B+D;
    a6=C+D;

    m1=A*B;
    m2=A*C;
    m3=A*D;
    m4=B*C;
    m5=B*D;
    m6=C*D;

    printf("resultados das adiçoes: %f, %f, %f, %f, %f, %f\n",a1,a2,a3,a4,a5,a6);
    printf("resultados das multiplicoes: %f, %f, %f, %f, %f, %f\n",m1,m2,m3,m4,m5,m6);

    return 0;
}
