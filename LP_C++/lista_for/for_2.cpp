#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    int contPar = 0;
    int contImpar = 0;
    int resto = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("posição %d\ndigite um numero: ",i);
        scanf("%d",&num);
        resto=num%2;

        if (resto!=0)
        {
            contImpar++;
        } else {
            contPar++;
        }   
    }
    printf("Qnt de numeros impares: %d\n Qnt de numeros pares: %d\n",contImpar,contPar);
    

    return 0;
}
