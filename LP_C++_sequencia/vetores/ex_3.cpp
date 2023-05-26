#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int idade[5];
    int contmaior = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite sua idade= \n");
        scanf("%d",&idade[i]);

        if (idade[i]>=18)
        {
            contmaior++;
        }
    }
    
    printf("\nO números de pessoas maior de idade são %d\n",contmaior);

    return 0;
}
