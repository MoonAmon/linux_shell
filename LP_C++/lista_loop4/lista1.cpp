#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int opçaoSelecionada = 1;
    
    while (opçaoSelecionada!=0)
    {
        printf("1=inclução, 2=alteração, 3=consulta, 4=exclusão, 0=sair\n");
        scanf("%d",&opçaoSelecionada);
        switch (opçaoSelecionada)
    {
            
    case 1:
        printf("Opção 1 selecionada\n");
        break;
    case 2:
        printf("Opção 2 selecionada\n");
        break;
    case 3:
        printf("Opção 3 selecionada\n");
        break;
    case 4:
        printf("Opção 4 selecionada\n");
        break;
    case 0:
        printf("Saíndo...\n");
        break;
    default:
        printf("Opçao inválida! \n");
    }

    }

    return 0;
}

