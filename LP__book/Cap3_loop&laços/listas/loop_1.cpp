#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float DEN = 1;
    float DIV = 1;
    float X = 0;

    while (DEN<=99 && DIV<=50)
    {
        X = DEN/DIV;
        printf("%.0f/%.0f = %.2f \n",DEN,DIV,X);
        DEN+=2;
        DIV++;
    }
    
    


    return 0;
}
