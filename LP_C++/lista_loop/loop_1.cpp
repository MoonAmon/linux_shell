#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    float den,div,x;
    den = 1;
    div = 1;
    x = 0;

    while (den<=99 && div<=50)
    {
        x=den/div;
        printf("%.0f/%.0f= %f\n",den,div,x);
        div++;
        den+=2;
    }
    

    return 0;
}
