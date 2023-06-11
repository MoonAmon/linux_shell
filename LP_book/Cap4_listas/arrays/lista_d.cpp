#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int A[10]{23,14,234,231,53,12,34,53,23,43},B[10];

for (int i = 0; i < 10; i++)
{
    B[i]= pow(A[i],2);
} for (int i = 0; i < 10; i++)
{
    printf("%d\n",B[i]);
}




    return 0;
}
