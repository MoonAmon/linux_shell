#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 1;
    float resto;

    while (n<=20)
    {
        resto = n % 2;
        if (resto!=0)
        {
            printf("%d\n",n);
        }
        n++;
        
    }

    return 0;
}
