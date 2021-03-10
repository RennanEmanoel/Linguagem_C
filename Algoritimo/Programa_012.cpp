#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int nasc, idade;
	
	idade = 2020 - nasc;
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &nasc);
	
	if(idade < 16){
		printf("Voce nao pode votar!");
	}
	else if((idade >= 16 && idade < 18) || (idade > 70)){
		printf("Seu voto e opcional!!");
	}
	else{
		printf("Seu voto e obrigatorio mn!!");
	}
}
