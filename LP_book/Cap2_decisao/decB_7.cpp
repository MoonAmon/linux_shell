#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A,B,C,N1,N2,N3;

    printf("digite o numero A: ");
    scanf("%d",&A);
    printf("digite o numero B: ");
    scanf("%d",&B);
    printf("digite o numero C: ");
    scanf("%d",&C);

    if (A>B && A>C)
    {
        N1=A;

        if (B<C)
        {
            N2=C;
            N3=B;
            printf("%d,%d,%d",N1,N2,N3);
        } else {
            N2=B;
            N3=C;
            printf("%d,%d,%d",N1,N2,N3);
        };
        
    } else if (B>A && B>C)
    {
        N1=B;

        if (C<A)
        {
            N2=A;
            N3=C;
            printf("%d,%d,%d",N1,N2,N3);
        } else {

            N2=C;
            N3=A;
            printf("%d,%d,%d",N1,N2,N3);
        };
        
    } else if (C>A && C>B)
    {
        N1=C;

        if (A<B)
        {
            N2=B;
            N3=A;
            printf("%d,%d,%d",N1,N2,N3);
        } else {

            N2=A;
            N3=B;
            printf("%d,%d,%d",N1,N2,N3);
        };   
    };
    return 0;
}
