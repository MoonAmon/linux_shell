#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    float N1,N2,N3,N4,MD;

    printf("digite a nota n1: ");
    scanf("%f",&N1);
    printf("digite a nota n2: ");
    scanf("%f",&N2);
    printf("digite a nota n3: ");
    scanf("%f",&N3);
    printf("digite a nota n4: ");
    scanf("%f",&N4);

    MD=(N1+N2+N3+N4)/4;

    if (MD>=5)
    {
        printf("MEDIA= %.2f\nAluno aprovado!\n",MD);
    } else {
        printf("MEDIA= %.2f\nAluno reprovado!\n",MD);
    };
    


    return 0;
}
