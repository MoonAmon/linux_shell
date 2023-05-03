#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float Nvalor,valor,desc,cash,descB,und;

    printf("Digite a quantidade do produto: ");
    scanf("%f",&und);
    printf("Digite o valor unitario: ");
    scanf("%f",&valor);
    printf("Valor total da compra R$%.2f\n",valor);

    valor=und*valor;
 
    if (valor<=100)
    {
        desc=0.05*valor;
        Nvalor=valor-desc;
        printf("Valor com desconto: R$%.2f\n",Nvalor);
        printf("seu desconto foi de R$%.2f\n", desc);
    } if (valor<=1000 && valor>100)
    {
        desc=0.05*valor;
        descB=0.05*valor;
        Nvalor=valor-desc;
        printf("Valor com desconto: R$%.2f\n",Nvalor);
        printf("seu desconto foi de R$%.2f\n", desc);
        printf("seu bonus foi de R$%.2f\n",descB);
    } else
    {
        desc=0.10*valor;
        descB=0.05*valor;
        Nvalor=valor-desc;
        printf("Valor com desconto: R$%.2f\n",Nvalor);
        printf("seu desconto foi de R$%.2f\n", desc);
        printf("seu bonus foi de R$%.2f\n",descB);
        
    }
    
    
    
    return 0;
}
