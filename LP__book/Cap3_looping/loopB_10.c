#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double num,r;
    int i=1;

    do
    {
    
    printf("Digite numero %d: ",i);
    scanf("%f",&num);

    int ant=num;

    while (num!=0)
    {
        num=num-1;
        r=num*ant;
        ant=ant-1;
    }
    
    i++;
    } while (i<=15);

    printf("resultado: %f\n",r);
    
    return 0;
}
