#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float salario[10];
    float msalario = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o salário num %d R$",i+1);
        scanf("%f",&salario[i]);
        if (salario[i]>msalario)
        {
            msalario=salario[i];
        }
        
    }

    printf("O maior salario foi R$%.2f\n",msalario);
    

    return 0;
}
