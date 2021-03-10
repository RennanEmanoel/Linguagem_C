#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[21];
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Ola %s, eh um prazer te conhecer!!",&nome);
}
