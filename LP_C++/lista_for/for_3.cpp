#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int codigo[10];
    int desconto[10];
    int salarioL[10];
    int horasT, dependente;

    for (size_t i = 0; i < 10; i++)
    {
        printf("\nDigite o codigo do funcionario %d : ",i);
        scanf("%d",&codigo[i]);
        printf("\nDigite o numeros de horas trabalhadas: %d");
        scanf("%d",&horasT);
        printf("\nDigite o numeros de dependentes:");
        scanf("%d",&dependente);
    }
    

    return 0;
}
