#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n,soma,I;

    n=100;
    soma=0;
    I=1;
    
    do
    {
        soma+=I;
        I++;
        printf("%d\n",soma);
        
    } while (I<=n);
     

    return 0;
}
