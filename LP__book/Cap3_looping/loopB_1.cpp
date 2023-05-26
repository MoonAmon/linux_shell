#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int I, num, X;
    I=1;
    X=15;

    while (I<=186)
    {
        num = X*X;
        printf("%d\n",num);
        I = I+1;
        X = X+1;
    }
    
    
    return 0;
}
