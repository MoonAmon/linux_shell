#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float x,y,z;

    printf("Digite lado X:");
    scanf("%f",&x);
    printf("Digite lado Y:");
    scanf("%f",&y);
    printf("Digite lado Z:");
    scanf("%f",&z);

    float s1=x+y;
    float s2=x+z;
    float s3=z+y;

    if (z<=s1 && y<=s2 && x<=s3){
        
            if ((z!=y && x==z)|| (y!=x && z==y) || (x!=z && y==z))
            {
                printf("Triangulo isóceles!\n");

            } else if (x==y && z==y && x==z){

            printf("Triangulo equilatero!\n");
            
        } else if (x!=z && y!=x && y!=z) {
        
            printf("Triangulo escaleno!\n");}

    } else {
    printf("Não é um triangulo!\n"); }



    return 0;

}