#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double Cgran = 1;
    int casa = 1;
    double total = 1;

    do
    {
        Cgran=Cgran+Cgran;
        printf("Casa num: %d\n Total: %2.f\n Grões na casa atual: %2.f\n\n",casa,total,Cgran);
        total=Cgran+total;
        casa++;
    
    } while (casa<=60);
    

    return 0;
}
