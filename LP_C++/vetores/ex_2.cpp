#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vetor[10],count;
    

    for (count = 0; count < 10; count++)
    {
        printf("\nDigite um número inteiro: ");
        scanf("%d",vetor[count]);
    } 
    
    for (count = 0; count < 10; count++)
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
