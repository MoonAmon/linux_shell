#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int idade;
    printf("Digite a idade da pessoas: ");
    scanf("%i",&idade);

    if (idade>=18)
    {
        printf("Pessoa e maior de idade!\n");
    } else
        printf("Pessoa menor de idade!\n");
    


    return 0;
}
