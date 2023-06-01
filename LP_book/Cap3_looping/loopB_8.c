#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int atual,anterior,proximo;
    atual=1;

    do
    {   
        printf("Sucessão de Fibonacci: %d \n",atual);
        proximo=anterior+atual;
        anterior=atual;
        atual=proximo;

    } while (anterior<=atual);
    


    return 0;
}
