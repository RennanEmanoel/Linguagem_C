#include <stdio.h>

int main(){
	
	int idade;
	int anos;
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &idade);
	
	anos = (idade - 2020) * (-1);
	
	if(anos > 16)
		printf("\nVoce tem %d anos de idade  ja pode votar", anos);		
	
	else
		printf("Voce ainda nao pode votar");
	
}
