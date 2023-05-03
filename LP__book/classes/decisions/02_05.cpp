#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A,B,soma;
    printf("Digite o valor A: ");
    scanf("%d",&A);
    printf("Digite o valor B: ");
    scanf("%d",&B);

    if (A>B)
    {
        soma=A+100;
    } else
        soma=B+100;
    
    printf("O maior valor adicionado de 100 resulta: %d\n",soma);
    

    return 0;
}
