#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float somaTotalDasNotas, notaAtual;
    float mediaDasNotas;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite a nota %d: \n",(i+1));
        scanf("%d",&notaAtual);

        somaTotalDasNotas+=notaAtual;
    }
    mediaDasNotas=somaTotalDasNotas/8;

    printf("Media final: %.2f\n",mediaDasNotas);
    
    return 0;
}
