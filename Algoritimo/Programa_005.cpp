#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota1, nota2, media;
	
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2	;
	
	printf("A media do aluno e igual a %.1f", media);
	
}
