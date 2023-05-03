#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int A,B,C,D;

    printf("Digite o numero A: ");
    scanf("%d",&A);
    printf("Digite o numero B: ");
    scanf("%d",&B);
    printf("Digite o numero C: ");
    scanf("%d",&C);
    printf("Digite o numero D: ");
    scanf("%d",&D);

    int Res2A=A%3;
    int Res3A=A%2;
    int Res2B=B%3;
    int Res3B=B%2;
    int Res2C=C%3;
    int Res3C=C%2;
    int Res2D=D%3;
    int Res3D=D%2;

    if (Res2A==0 && Res3A==0)
    {
        printf("Numero A é divisivel por 2 e 3!\n");
    }
     if (Res2B==0 && Res3B==0)
    {
        printf("Numero B é divisivel por 2 e 3!\n");
        
    }
     if (Res2C==0 && Res3C==0)
    {
        printf("Numero C é divisivel por 2 e 3!\n");
        
    }
     if (Res2D==0 && Res3D==0)
    {
        printf("Numero D é divisivel por 2 e 3!\n");
        
    }
     if (Res2A !=0 && Res3A !=0 && Res2B !=0 && Res3B !=0&& Res2C!=0 && Res3C!=0 &&Res2D!=0 && Res3D!=0)
    {
        
        printf("Nenhum do numeros é divisivel por 2 e 3!");
    }
    
    

    return 0;
}
