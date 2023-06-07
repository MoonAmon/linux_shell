#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    int resto = 0;
    while (num<=100)
    {
        resto=num%2;
        if (resto!=0)
        {
            printf("%d\n",num);
        }
        num++;   
    }
    


    return 0;
}
