//criador: Rennan Emanoel A. Trindade
//data: 13/10/2020
//programa: escalar numeros

#include <stdio.h>
#include <stdlib.h>

#define tam 2//declaracao de vetor.

int main()// Funcao principal
{
	int vetor1[tam], vetor2[tam], i, produto=0;// declaracoes de variaveis do tipo inteiro.
	
	printf("Entrar com o valor do vetor 1\n");
	for(i=0;i<tam;i++)
	{
		printf("Elemento %d: ", i);
		scanf("%d",&vetor1[i]);//Leitura do vetor 1.
		getchar();
		
	}
	
	printf("Entrar com o valor do vetor 2\n");
	for(i=0;i<tam;i++)
	{
		printf("Elemento %d: ", i);
		scanf("%d",&vetor2[i]);//Leitura do vetor 2.
		getchar();
		
	}
	for(i=0;i<tam;i++) produto += vetor1[i] * vetor2[i];
	
	printf("O produto escala e igual a %d\n", produto);// resultado do produto.
}
