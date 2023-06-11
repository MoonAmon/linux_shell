#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A[8]{1,2,4,5,6,8,6,4},B[8];
    for (int i = 0; i < 8; i++)
    {
        B[i]=A[i]*3;
    }
    
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",B[i]);
    }
    
  
    
    return 0;
}
