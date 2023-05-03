#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float vA,vB,vC,nulos;

    printf("digite os votos do cand A: ");
    scanf("%f",&vA);

    printf("digite os votos do cand B: ");
    scanf("%f",&vB);

    printf("digite os votos do cand C: ");
    scanf("%f",&vC);

    printf("digite os votos brancos e nulos: ");
    scanf("%f",&nulos);
    
    float votosV=vA+vB+vC;
    float qE=votosV+nulos;
    float pA=(vA/votosV)*100;
    float pB=(vB/votosV)*100;
    float pC=(vC/votosV)*100;
    float Pnulo=(nulos/votosV)*100;
    float qVporc=100-Pnulo;

    printf("quantidade de votos validos: %2.f\n",votosV);
    printf("quantidade de eleitores: %2.f\n",qE);
    printf("porcentagem de votos validos: %2.f%\n",qVporc);
    printf("porcentagem de votos nulos e brancos: %2.f%\n",Pnulo);
    printf("porcentagem de votos no candidato A: %2.f%\n",pA);
    printf("porcentagem de votos no candidato B: %2.f%\n",pB);
    printf("porcentagem de votos no candidato C: %2.f%\n",pC);

    return 0;
}
