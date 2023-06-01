#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    float N1,N2,N3,N4,MD,NE;

    printf("digite a nota n1: ");
    scanf("%f",&N1);
    printf("digite a nota n2: ");
    scanf("%f",&N2);
    printf("digite a nota n3: ");
    scanf("%f",&N3);
    printf("digite a nota n4: ");
    scanf("%f",&N4);

    MD=(N1+N2+N3+N4)/4;

    if (MD>=7)
    {
        printf("Aluno aprovado!");

    } else {

        printf("Digite nota do exame: ");
        scanf("%f",&NE);
        MD=(NE+MD)/2;
        
    }; if (MD>=7)
    {
        printf("Aluno aprovado por exame!");
        
    } else {
        printf("Aluno reprovado!");
    };
    
    
}