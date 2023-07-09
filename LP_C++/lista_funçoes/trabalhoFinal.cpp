#include <stdio.h>
#include <stdlib.h>

float areaTrapezio(float baseMaior, float baseMenor, float altura);
int fatorial(int numero);
float pesoIdeal(char sexo, float altura);
void pular2Linha(void);
void pular1Linha(void);


int main(int argc, char const *argv[])
{
    char opçao;
    
    while (opçao != 's')
    {
        printf("\n Digite umas da opções: \n");
        pular2Linha();
        printf("a) Area de um trapezio \n");
        pular1Linha();
        printf("b) Fatorial \n");
        pular1Linha();
        printf("c) Peso corporal ideal \n");
        pular1Linha();
        printf("s) sair \n");
        scanf("%c",&opçao);

        if (opçao == 'a')
        {
            float baseMenor, baseMaior, altura;

            printf("Digite a base menor do trapezio: \n");
            scanf("%f",&baseMenor);
            pular1Linha();

            printf("Digite a base maior do trapezio: \n");
            scanf("%f",&baseMaior);
            pular1Linha();

            printf("Digite a altura do trapezio: \n");
            scanf("%f",&altura);
            pular1Linha();

            while (opçao != '0')
            {
                printf("Resultado: %.2f\n Digite 0 para sair!\n", areaTrapezio(baseMenor,baseMaior,altura));
                scanf("%c",&opçao);
            }
            

        }
        
        if (opçao == 'b')
        {
            int numero;

            printf("Digite um número: \n");
            scanf("%d",&numero);

            pular2Linha();
            printf("Resultado do fatorial: %d\n",fatorial(numero));
            system("pause");

            
        }
        

    }
    
    

    return 0;
}

float areaTrapezio(float baseMaior, float baseMenor, float altura)
{
    float area = ((baseMaior + baseMenor) * altura)/2;
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
    } else {
        peso = 72.7 * altura - 58;
    }

    return peso;
    
}

void pular2Linha(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf(" \n");
    }
}

void pular1Linha(void)
{
    printf(" \n");
}