#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float A,B,r1,r2,r3,r4;
    
    printf("digite o numero A: ");
    scanf("%f",&A);

    printf("digite o numero B: ");
    scanf("%f",&B);

    r1=A+B;
    r2=A-B;
    r3=A/B;
    r4=A*B;

    printf("result soma: %.2f\n",r1);
    printf("result subtração: %.2f\n",r2);
    printf("result divisão: %.2f\n",r3);
    printf("result multiplicação: %.2f\n",r4);

    system("PAUSE");
    return 0;
}
