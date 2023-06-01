#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float A,B,C,delta,x1,x2;

    printf("Digite o valor A: ");
    scanf("%f",&A);
    printf("Digite o valor B: ");
    scanf("%f",&B);
    printf("Digite o valor C: ");
    scanf("%f",&C);

    delta=B*B-4*A*C;

    printf("delta: %.2f\n",delta);

    if (delta<0)
    {
        printf("Nao ha soluçao real!");
        return 0;
    } else if (delta==0)
    {   
        x1=-B/(2*A);
        printf("Resultado x1: %.2f\n");
        
    } else {

        x1=(-B+sqrt(delta))/(2*A);
        x2=(-B-sqrt(delta))/(2*A);

        printf("Resultado x1: %.2f\n",x1);
        printf("Resultado x2: %.2f\n",x2); 

    }
    
    

    return 0;
}