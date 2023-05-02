#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A,X;

    printf("digite o numero A: ");
    scanf("%d",&A);

    if (A<0)
    {
        A=(-1)*A;
    } else {

    };
    printf("numero positivo: %d\n",A);
    

    return 0;
}
