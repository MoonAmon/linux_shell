#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num,x;
    while (num!=0)
    {
        printf("digite para somar: \n");
        scanf("%d",&num);
        x+=num;
    }
    printf("%d\n",x);
    
    return 0;
}
