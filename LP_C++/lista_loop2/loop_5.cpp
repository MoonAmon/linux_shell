#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int cont = 0;
    int maior = 0;
    int num = 0;

    while (cont<=10)
    {
        printf("Digite o número %d: \n",(cont+1));
        scanf("%d",&num);
        if (num>maior)
        {
            maior=num;
        }
        cont++;
    }
    printf("O maior número = %d\n",maior);

    return 0;
}
