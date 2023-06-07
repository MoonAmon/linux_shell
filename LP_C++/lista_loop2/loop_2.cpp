#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    int resto = 0;
    while (n<=100)
    {
        resto=n%2;
        if (resto==0)
        {
            printf("%d\n",n);
        }
        n++;
        
    }
    
    return 0;
}
