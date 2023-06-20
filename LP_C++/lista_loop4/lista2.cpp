#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int restoVerificaImpar, numero=0;

    for (int i = 0; i < 60; i++)
    {
        restoVerificaImpar = numero%2;

        if (restoVerificaImpar != 0)
        {
            printf("%d\n",numero);
        }
       numero++; 
    }
    
    return 0;
}
