#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    int resto;
    int contPar = 0;
    int contImpar = 0;
    int cont = 0;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("\n%d Digite um número: ",i);
        scanf("%d",&num);
        resto=num%2;
        if (resto==0)
        {
            contPar++;
        } else {
            contImpar++;
        }
        
    }
    printf("Quantidade de números pares:%d\n Quantidade de números impares:%d",contPar,contImpar);
    
    
    return 0;
}
