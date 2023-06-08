#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int cont = 0;
    int num = 0;
    int maiorA = 0;
    int maiorB = 0;

    while (cont<10)
    {
        printf("Digite numero %d: \n",(cont+1));
        scanf("%d",&num);
        if (num>maiorA)
        {
            maiorA=num;
        } else if (num>maiorB)
        {
            maiorB=num;
        }
        cont++;
        
    }
    printf("O maior número= %d\n O segundo maior= %d\n",maiorA,maiorB);
        
    return 0;
}
