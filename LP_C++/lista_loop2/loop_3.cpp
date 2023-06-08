#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = 1;
    int resto = 0;
    printf(" ");
    scanf("%d",&n);
    for (int i = n; i > 0; i--)
    {
        resto=n%2;
        if (resto==0)
        {
            printf("%d ",n);
        } else {
            printf("%d\n",n);
        }
        n--;
    }
    
    return 0;
}
