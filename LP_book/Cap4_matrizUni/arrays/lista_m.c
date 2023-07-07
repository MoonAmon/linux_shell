#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrizA[10];
    int numero = 0;

    printf("Digite um número: \n");
    scanf("%d",&numero);

    for (int i = 1; i <= 10; i++)
    {
        matrizA[(i-1)]=i*numero;
    }
    
    for (int count = 0; count < 10; count++)
    {
        printf("%d= %d\n",(count+1),matrizA[count]);
    }
    
    
    return 0;
}
