#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int matrizA[6], matrizB[6], matrizC[12];
    int numero, cont = 0;
    
    do
    {
        printf("digite um numero par: \n");
        scanf("%d",&numero);
        if ((numero%2) == 0)
        {
            matrizA[cont] = numero;
            cont++;
        } else {
            printf("Número inválido! Digite um número par \n");
        }
        
    } while (cont < 6);

    cont = 0;

    do
    {
        printf("digite um numero impar: \n");
        scanf("%d",&numero);
        if ((numero%2) != 0)
        {
            matrizB[cont] = numero;
            cont++;
        } else {
            printf("Número inválido! Digite um número impar! \n");
        }
    
    } while (cont < 6);

    cont = 0;

    for (int i = 0; i < 6; i++)
    {
        matrizC[cont] = matrizA[i];
        cont++;
    }
    for (int i = 0; i < 6; i++)
    {
        matrizC[cont] = matrizB[i];
        cont++;
    }
    for (int i = 0; i < 12; i++)
    {
        printf("C: %d \n",matrizC[i]);
    }
    
     
    
    
    return 0;
}
