#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int codi,horas,depen;
    float descon,salLIq,salB;
    
    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite o codigo do funcionario (num = %d)",i+1);
        scanf("%d",&codi);
        printf("\nDigite as horas trabalhadas: ");
        scanf("%d",&horas);
        printf("\nDigite o número de dependentes do func: ");
        scanf("%d",&depen);
        salB = (horas*12)+(depen*40);
        descon = (salB*0.085)+(salB*0.5);
        salLIq = salB - descon;
        printf("\nFuncionario num= %d\nTotal desconto= R$%.2f\nSalário liquido= R$%.2f \n",codi,descon,salLIq);
        
    }
    
    return 0;
}
