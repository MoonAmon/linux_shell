#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{ 
    float md[8];
    int soma = 0;
    for (int i = 0; i < 8; i++)
    {
        printf("digite a nota %d\n",i);
        scanf("%f",&md[i]);
        soma += md[i];
    }
    float media = soma / 8;
    for (int i = 0; i < 8; i++)
    {
        printf("Nota %d: %.2f\n",i,md[i]);
    }
    printf("Média: %.2f\n",media);
    
    
    return 0;
}
