#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float indice;

    printf("Digite o indice de poluição: ");
    scanf("%f",&indice);

    if (indice<=0.29)
    {
        printf("Indice com valor aceitavel.\n");

    } else if (indice=0.3)
    {
        printf("Intimação e suspenção grupo 1!\n");

    } else if (indice=0.4)
    {
        printf("Intimação e suspenção grupo 1 e 2!\n");
    } else if (indice>=0.5)
    {
        
        printf("Intimação e suspenção para todos os grupo!\n");
    }
    
    
    
    

    return 0;
}
