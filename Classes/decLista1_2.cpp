#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    if (num>0)
    {
        printf("Esse numero é positivo! \n");
    } else {
        printf("Esse numero é negativo! \n");
    }

    return 0;
}

