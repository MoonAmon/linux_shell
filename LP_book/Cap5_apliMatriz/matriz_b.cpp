#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int matrizA[8], matrizB[8];
    int numero,meio = 0;
    int fim = 7, comeco = 0;
    bool achou = false;

    for (int i = 0; i < 8; i++)
    {
        matrizA[i] = i+1;
    }
    for (int i = 0; i < 8; i++)
    {
        matrizB[i] = matrizA[i] * 5;
    }

    printf("Digite o número que quer pesquisar: \n");
    scanf("%d",&numero);
    
    do {
        meio = (comeco + fim)/ 2;
        printf("meio: %d\n",meio);
        if (numero == matrizB[meio])
        {
            achou = true;
            break;
        }
        else if (numero < matrizB[meio])
        {
            fim = meio - 1;
        } else {
            comeco = meio + 1;
        }
        
    } while (comeco <= fim && achou == false);
    

    if (achou == true)
    {
        printf("Achou %d na posição %d na matrizB!\n",numero,meio);
    } else {
        printf("Numero %d não encontrado!\n",numero);
    }
    
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",matrizB[i]);
    }
    
    


    return 0;
}
