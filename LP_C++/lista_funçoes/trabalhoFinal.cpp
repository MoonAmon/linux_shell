#include <stdio.h>
#include <stdlib.h>

float areaTrapezio(float baseMaior, float baseMenor, float altura);
int fatorial(int numero);
float pesoIdeal(char sexo, float altura);
void pular2Linha(void);
void pular1Linha(void);

int main(int argc, char const *argv[])
{
    char opcao;

    do
    {
        printf("\nDigite uma das opções:\n");
        pular2Linha();
        printf("a) Área de um trapézio\n");
        pular1Linha();
        printf("b) Fatorial\n");
        pular1Linha();
        printf("c) Peso corporal ideal\n");
        pular1Linha();
        printf("s) Sair\n");
        scanf(" %c", &opcao); 
        pular2Linha();

        if (opcao == 'a')
        {
            float baseMenor, baseMaior, altura;

            printf("Digite a base menor do trapézio:\n");
            scanf("%f", &baseMenor);
            pular1Linha();

            printf("Digite a base maior do trapézio:\n");
            scanf("%f", &baseMaior);
            pular1Linha();

            printf("Digite a altura do trapézio:\n");
            scanf("%f", &altura);
            pular1Linha();

            do
            {
                printf("Resultado: %.2f\nDigite 0 para sair!\n", areaTrapezio(baseMenor, baseMaior, altura));
                scanf(" %c", &opcao); 
                getchar();

            } while (opcao != '0');
        }
        else if (opcao == 'b')
        {
            int numero;

            printf("Digite um número:\n");
            scanf("%d", &numero);
            pular2Linha();

            do
            {
                printf("Resultado: %d\nDigite 0 para sair!\n", fatorial(numero));
                scanf(" %c", &opcao);
                getchar();

            } while (opcao != '0');
            

        }
        else if (opcao == 'c')
        {
            char sexo;
            float altura;

            printf("Digite seu sexo f ou m: \n");
            scanf(" %c", &sexo);
            getchar();
            pular1Linha();

            printf("Digite sua altura: \n");
            scanf("%f", &altura);
            pular1Linha();

             do
            {
                printf("Resultado: %.2f\nDigite 0 para sair!\n", pesoIdeal(sexo, altura));
                scanf(" %c", &opcao);
                getchar();

            } while (opcao != '0');
        } else {

        printf("Opção inválida, digite outra opção!\n");
        
        }
        

    } while (opcao != 's');

    return 0;
}

float areaTrapezio(float baseMaior, float baseMenor, float altura)
{
    float area = ((baseMaior + baseMenor) * altura) / 2;
    return area;
}

int fatorial(int numero)
{
    int fat = 1;
    for (int i = numero; i > 0; i--)
    {
        fat *= i;
    }

    return fat;
}

float pesoIdeal(char sexo, float altura)
{
    int peso = 0;

    if (sexo == 'f')
    {
        peso = 62.1 * altura - 44.7;
    }
    else
    {
        peso = 72.7 * altura - 58;
    }

    return peso;
}

void pular2Linha(void)
{
    printf("\n\n");
}

void pular1Linha(void)
{
    printf("\n");
}
