#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    float resto=num%2;

    if (resto==0)
    {
        printf("Numero par!\n");
    } else {
        printf("Numero impar!\n");
    }
    

    return 0;
}
