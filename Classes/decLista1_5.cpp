#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int idade;

    printf("Digite a idade do atleta: ");
    scanf("%d",&idade);

    if (idade<5)
    {
        printf("Atleta não tem a idade permitida!\n");
    } if (idade>=5 && idade<=7)
    {
        printf("Atleta na categoria infatil A!\n");
    } if (idade>=8 && idade<=10)
    {
        printf("Atleta na categoria infatil B!\n");
    } if (idade>=11 && idade<=13)
    {
        printf("Atleta na categoria juvenil A!\n");
        
    } if (idade>=14 && idade<=17)
    {
        printf("Atleta na categoria juvenil B!\n");
       
    } if (idade>18) {
        printf("Atleta na categoria Sênior!\n");
    }
    
    return 0;
}

