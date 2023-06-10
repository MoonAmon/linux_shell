#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    int resto = 0;

    for (num = 0; num <= 20; num++)
    {
        resto=num%2;
        if (resto!=0)
        {
            printf("%d\n",num);
        }
        
    }
    


    return 0;
}
