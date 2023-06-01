#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Digite um numero: ");
    scanf("%d",&num);

    num=num*2;

    if (num>30)
    {
        printf("Resultado: %d\n",num);
    }
        
    

    return 0;
}
