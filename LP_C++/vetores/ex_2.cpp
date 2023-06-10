#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float vetor[10];
    

    for (int count = 0; count < 10; count++)
    {
        printf("\nDigite um número inteiro: ");
        scanf("%d",vetor[count]);
    } 
    
    for (int count = 0; count < 10; count++)
    {
        if (vetor[count]>0)
        {
            printf("\nO valor armazenado na posição %d eh %d\n",count,vetor[count]+10);
        } else {
            printf("\nO valor armazenado na posição %d eh %d\n",count,vetor[count]);
        }
        
    }
    


    return 0;
}
