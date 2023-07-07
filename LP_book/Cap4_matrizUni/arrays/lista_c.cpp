#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int C[10];
    int A[10]{20,12,45,12,43,2,1,34,54,12},B[10]{12,13,43,21,54,34,21,34,53,21};
    for (int i = 0; i < 10; i++)
    {
        C[i]=A[i]-B[i];

    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",C[i]);
    }
    


    return 0;
}