#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 0;
    int x = 0;
    float resto;

    do
    {
        resto = n % 2;
        
        if (resto == 0){
            x+=n;
            printf("%d = %d + %d \n",x,n,x);
        }
        n++;

    } while (n<=500);
    
    printf("Resultado: %d \n",x);

    return 0;
}
