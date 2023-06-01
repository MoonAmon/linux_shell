#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int qntItem[5];
    float valorItem[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite a quantidade do item %d: ",i+1);
        scanf("%d",&qntItem[i]);
        printf("\nDigite o preço do item R$");
        scanf("%f",&valorItem[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nO valor total do item %d, é R$%.2f\n",i+1,qntItem[i]*valorItem[i]);
    }
    



    return 0;
}
