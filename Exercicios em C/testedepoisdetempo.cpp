#include <stdio.h>
#include <stdlib.h>

int main()
{
	float  not1, not2, not3, not4;
	
	float media;
	
	char nome[21];
	
	printf("Digite seu nome ");
	scanf("%s", &nome);
	
	printf("Digite a nota do primeiro bimestre: ");
	scanf("%f", &not1);
	
	printf("Digite a nota do segundo bimestre: ");
	scanf("%f", &not2);
	
	printf("Digite a nota do terceiro bimestre: ");
	scanf("%f", &not3);
	
	
	media = not1 + not2 + not3 / 3;
	
	if(media < 6)
	{
		printf("tu Reprovo mn");
	}
	
	if(media >= 6 )
	{
		printf("Aprovado mn ");
		
	}
    
    printf("%f", media);
	
	
}
