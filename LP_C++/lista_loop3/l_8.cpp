#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
   int num; 
   int cont = 0;
   do
   {
    printf("digite: \n");
    scanf("%d",&num);
    cont++;
   } while (num!=0);
   printf("cont: %d\n",cont);
   
    return 0;
}
