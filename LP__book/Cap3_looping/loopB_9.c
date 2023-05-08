#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double Cgran = 0;
    int casa = 1;
    double total = 0;

    do
    {
        Cgran=Cgran*2;
        printf("Casa num: %d\n Total: %2.f\n Grões na casa atual: %2.f\n",casa,total,Cgran);
        total=Cgran+total;
        Cgran++;
        casa++;
    
    } while (casa<=60);
    

    return 0;
}
