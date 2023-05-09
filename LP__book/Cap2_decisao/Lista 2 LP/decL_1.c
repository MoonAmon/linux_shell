#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x,y,z;

    printf("Digite o numero X: ");
    scanf("%d",&x);
    printf("Digite o numero Y: ");
    scanf("%d",&y);
    printf("Digite o numero Z: ");
    scanf("%d",&z);


    if (x<y && x<z)
    {
        printf("O numero %d é o menor numero! \n",x);
        
    } else if (y<x && y<z)
    {
        printf("O numero %d é o menor numero! \n",y);
        
    } else {

        printf("O numero %d é o menor numero! \n",z);
    }
    
    


    return 0;
}
