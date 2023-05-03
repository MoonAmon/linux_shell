#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1,num2,X;

    printf("Digite um numero: ");
    scanf("%d",num1);
    printf("Digite um numero: ");
    scanf("%d",num2);

    if (num1>num2)
    {
        X=num1-num2;
        printf("A diferença do maior numero para o menor e: %d\n",X);
    } else
        X=num2-num1;
        printf("A diferença do maior numero para o menor e: %d\n",X);
    

    return 0;
}
