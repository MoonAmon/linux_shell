#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num,numR;
    int x=1;

    printf("digite um numero: ");
    scanf("%d",&num);

    while (x<=10)
    {
        numR=num*x;
        printf("%d*%d = %d\n",num,x,numR);
        x++;
    }

    return 0;
}
