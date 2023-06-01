#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int idade,op,pessoas;
    int idadeold = 0;
    int totalbad = 0;
    int total = 0;
    int totalidbad = 0;
    int totalid = 0;
    int idold = 0;

    for (int cont = 1; cont < 11; cont++)
    {
        printf("Número do identificador -> %d\n",cont);
        printf("Digite sua idade: ");
        scanf("%d",&idade);
        printf("Digite sua nota de opnião de 0 a 10: ");
        scanf("%d",&op);

        total++;
        totalid+=idade;

        if (idade>idadeold)
        {
            idadeold=idade;
            idold=cont;
        }
        if (op<=5)
        {
            totalbad++;
            totalidbad+=idade;
        }
    }

    float md = totalid/total;
    float pcbad = ((float)totalbad/total)*100;
    

    printf("Número de pessoas que respoderam: %d\n Média de idade das pessoas: %.2f\n Percentual das pessoas que deram nota 5 ou menos %.2f%\n Identificador e idade da pessoa mais velha: %d, %d\n",total,md,pcbad,idold,idadeold);
    
    return 0;
}