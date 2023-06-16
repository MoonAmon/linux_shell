#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int cont=0;
    int num = 0;
    int x = 0;
    printf("digite n: ");
    scanf("%d",&num);
    while (cont<=num)
    {
      x += cont; 
      cont++;
    }
    printf("%d \n",x);
    
    return 0;
}
