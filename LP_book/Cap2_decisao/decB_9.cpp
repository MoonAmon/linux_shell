#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A,B,C,D,E,nMaior,nMenor;

    printf("Digite o numero A:");
    scanf("%d",&A);
    printf("Digite o numero B:");
    scanf("%d",&B);
    printf("Digite o numero C:");
    scanf("%d",&C);
    printf("Digite o numero D:");
    scanf("%d",&D);
    printf("Digite o numero E:");
    scanf("%d",&E);

    nMaior=A;
    nMenor=A;

    if (nMaior<B)
    {
        nMaior=B;
    } if (nMenor>B)
    {
        nMenor=B;
    }if (nMaior<C)
    {
        nMaior=C;
    } if (nMenor>C)
    {
        nMenor=C;
    }if (nMaior<D)
    {
        nMaior=D;
    } if (nMenor>D)
    {
        nMenor=D;
    }if (nMaior<E)
    {
        nMaior=E;
    } if (nMenor>E)
    {
        nMenor=E;
    }
    printf("%d é o menor numero \n %d é o maior numero \n",nMenor,nMaior);
    


    return 0;
}
