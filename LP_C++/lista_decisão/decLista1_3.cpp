#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num1,num2;

    printf("Digite um numero: ");
    scanf("%d",&num1);

    printf("Digite um numero: ");
    scanf("%d",&num2);

    if (num1==num2)
    {
        printf("Números iguais!\n");

    } if (num1>num2)
    {
        printf("%d é o maior número!\n",num1);
    } if (num2>num1)
    {
        
        printf("%d é o maior número!\n",num2);
    }

    return 0;
}

