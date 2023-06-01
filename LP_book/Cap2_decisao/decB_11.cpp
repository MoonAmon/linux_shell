#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    if (1<=num && 9>=num)
    {
        printf("Número na faixa permitida!\n");
    } else
        printf("Número fora da faixa permitida!\n");
    

    return 0;
}
