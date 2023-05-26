#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float sal[10];

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o salario num %d R$",i+1);
        scanf("%f",&sal[i]);
        if (sal[i]<1000)
        {
            float X = sal[i]*0.1;
            sal[i] = sal[i]+X;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\nNovo salário R$%.2f",sal[i]);
    }
    

    return 0;
}
