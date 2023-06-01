#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float nota1,nota2,MD,aulas,aulasP,aulasMin;

    printf("Digite nota1: ");
    scanf("%f",&nota1);
    printf("Digite nota2: ");
    scanf("%f",&nota2);
    printf("Digite o numero de aulas ministradas: ");
    scanf("%f",&aulas);
    printf("Digite o numero de aulas assistidas: ");
    scanf("%f",&aulasP);

    MD=(nota1+nota2)/2;
    aulasMin=0.75*aulas;

    if (MD>=6 && aulasP>=aulasMin){
    
        printf("Aluno aprovado! \nMedia: %.2f\n aulas min: %.2f.\n aulas assistidas: %2.f\n",MD,aulasMin,aulasP);

    } else {

        printf("Aluno reprovado! \nMedia: %.2f\n aulas min: %2f.\n aulas assistidas: %2.f\n",MD,aulasMin,aulasP);
    }

    return 0;
}

