#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int resto;
    
    for (int i = 0; i <= 20; i++)
    {
        resto=i%2;
        if (resto!=0)
        {
            printf("%d\n",i);
        }
        

    }
    
    return 0;
}
