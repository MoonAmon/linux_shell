#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float num1,num2,num3;

    printf("Digite o primeiro numero: ");
    scanf("%f",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f",&num2);
    printf("Digite o terceiro numero: ");
    scanf("%f",&num3);

    if (num1<0)
    {
        num1=pow(num1,2);
        printf("Resultado da exponenciação: %.2f\n",num1);
    } else {
        num1=sqrt(num1);
        printf("Resultado da raiz quadrada: %.2f\n",num1);

    } if (num2>10 && num2<100)
    {
        printf("Número está entre 10 e 100 - intervalo permitido\n");
        
    } else {

        printf("Número não está entre 10 e 100 - intervalo negado\n");
    } if (num3<num2)
    {
        num3=num2-num3;
        printf("A diferencia do primeiro numero pelo terceiro: %.2f\n",num1);
        
    } else {
        num3=num3+1;
        printf("Terceiro número +1: %.2f\n",num1);

    }
    
    
    



    return 0;
}

