#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int fat=1;
    int n,cont,rfat;

    for ( int i = 1; i <= 15; i++)
    {

    printf("Digite um numero para fatoração: ");
    scanf("%d",&n);

    for ( cont = 1; cont < n; cont++)
    {
        fat = fat * cont;
        printf("%d = %d * %d \n",fat,fat,cont); 
    }
    
    cont=0;
    rfat=fat+rfat;
    printf("%d = %d + %d \n",rfat,fat,rfat);

    }

    printf("Resultado = %d",rfat);

    
    return 0;
}
