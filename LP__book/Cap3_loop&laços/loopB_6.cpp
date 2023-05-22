#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    int n = 1;
    float resto;

    for (int i = 1; i <= 200; i++)
    {
        resto = n % 4;
        if (resto==0)
        {
            printf("%d é divisivel por 4!\n",n);
        }
        n++;
    }
    

    return 0;
}
