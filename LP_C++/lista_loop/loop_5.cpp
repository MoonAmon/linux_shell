#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int idade=0,Qlivros=0,Qlivros10=0,Qmulheres5=0,Qentevis=0,Qnlivros=0,mdIdade=0,Qmen=0,Qmen5=0;
	char sexo;
	
	do
	{
		printf("\nDigite o sexo do entrevistado: ");
		scanf("%s",&sexo);
		printf("\nDigite a idade do entrevistado: ");
		scanf("%d",&idade);
		printf("\nDigite a quantidade de livros lidos em 2006:");
		scanf("%d",&Qlivros);
		Qentevis++;
		mdIdade+=idade;
		if (idade<10)
		{
			Qlivros10+=Qlivros;
		}
		if (sexo=='m')
		{
			Qmen++;
		}		
		if ((sexo=='m')&&(Qlivros<5))
		{
			Qmen5++;
		}
		if ((sexo=='f')&&(Qlivros>=5))
		{
			Qmulheres5++;
		}
		if (Qlivros==0)
		{
			Qnlivros++;
		}
		
	} while (idade>=0);
	float Pcnlivros=(float)(Qnlivros/Qentevis)*100;
	float MDmen5=(float)Qmen5/Qmen;
	printf("\nQuantidade total de livros com menos de 10 anos: %d",Qlivros10);
	printf("\nQuatidades de mulheres que leram 5 livros ou mais: %d",Qmulheres5);
	printf("\nMédia de idade dos homens que leram 5 livros ou mais: %.2f",MDmen5);
	printf("\nPercentual de pessoas que não leram livros: %.2f",Pcnlivros);


	return 0;
}
