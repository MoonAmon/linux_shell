#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float n1;
    float n2;
    float n3;
    

    printf("digite nota 1:\n");
    scanf("%f",&n1);

    printf("digite nota 2:\n");
    scanf("%f",&n2);

    printf("digite nota 3:\n");
    scanf("%f",&n3);

    float md = (n1+n2+n3)/3;

    printf("media:%f\n",md);

    if (md>=6)
    {
        printf("Aluno aprovado!\n");
    } else
        printf("Aluno reprovado!\n");
    
    return 0;
}
