#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float not1, not2, media;
	
	printf("Digite  a primeira nota: ");
	scanf("%f", &not1);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f", &not2);
	
	media = (not1 + not2) / 2;
	
	printf("\nAnota do aluno eh: %.1f\n", media);
	
	if(media > 6){
		printf("\nO aluno foi aprovado");
	}
	else
		printf("\nO aluno foi reprovado!");
}
