#include <stdio.h>

int main(int argc, char const *argv[])
{
    int matrizA[10] = {2,2,2,2,2,2,2,2,2,2}; 
    int matrizC[10][3];
    int x,y,i,j,fat = 1;

    for (y = 0; y < 3; y++)
    {
        for ( x = 0; x < 10; x++)
        {
            if (y == 0)
            {
                matrizC[x][y] = 5 + matrizA[x];
            }
            else if (y == 1)
            {
                for (i = matrizA[x]; i > 1; i--)
                {
                    fat *= i;
                }
                matrizC[x][y] = fat;
                fat = 1;
            }
            else if (y == 2)
            {
                matrizC[x][y] = matrizA[x] * matrizA[x];
            }
            
            
            
        }
        
    }

    for ( y = 0; y < 3; y++)
    {
        for ( x = 0; x < 10; x++)
        {
            printf("%d\n", matrizC[x][y]);
        }
        
    }
    
    
    return 0;
}
