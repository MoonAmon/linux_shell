#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int c,fh;
    c=10;

    while (c<=100)
    {
        fh=(1.8*c)+32;
        printf("Temp Celsius: %d\n Temp em fahrnheit: %d\n",c,fh);
        c=c+10;
    }
    


    return 0;
}
