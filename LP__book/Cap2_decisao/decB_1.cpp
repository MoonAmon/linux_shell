#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A,B,X;

    printf("digite o numero A: ");
    scanf("%d",&A);
    printf("digite o numero B: ");
    scanf("%d",&B);

    if (A>B)
    {
        X=A-B;
    } else {
        X=B-A;
    };

    printf("diferença: %d\n",X);
    

    return 0;
}
