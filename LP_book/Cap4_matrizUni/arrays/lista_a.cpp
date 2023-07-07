#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(int argc, char const *argv[])
{
    char nomes[10][20];
    
    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o nome da pessoa %d: \n",i+1);
        fgets(nomes[i],50,stdin);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("Nome %d: %s",i,nomes[i]);
    }
    


    return 0;
}
