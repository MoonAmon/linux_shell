#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A,B,C,D,dif1,dif2,difr;

    printf("\n");
    scanf("%d%d%d%d",&A,&B,&C,&D);
    
    int x1=A+B;
    int x2=C+D;
    if (x1>x2)
    {
        dif1=x1-x2;
    } else {
        dif1=x2-x1;
    }
    
    x1=C+A;
    x2=B+D;
    if (x1>x2)
    {
        dif2=x1-x2;
    } else {
        dif2=x2-x1;
    }

    if (dif1>dif2)
    {
        difr=dif2;
    } else {
        difr=dif1;
    }

    x1=D+A;
    x2=C+B;
    if (x1>x2)
    {
        dif1=x1-x2;
    } else {
        dif1=x2-x1;
    }

    if (dif1<dif2)
    {
        printf("\n%d\n",dif1);
    } else {
        printf("\n%d\n",dif2);
    }
    

    return 0;
}
