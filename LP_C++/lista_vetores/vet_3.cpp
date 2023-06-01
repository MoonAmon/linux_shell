#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    float md,soma;
    float numeros[n];

    printf("Digite a quantidade de valores: ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nDigite o valor de indíce %d= ",i+1);
        scanf("%f",&numeros[i]);
    }
    for (int i = 0; i < n; i++)
    {   
        int x = 1;
        soma=numeros[i]+numeros[x];
        x++;
    }

    md=soma/n;
    printf("\nMédia = %.2f\n",md);
    
    
    return 0;
}
