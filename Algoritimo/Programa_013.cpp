#include <stdio.h>
#include<stdlib.h>

int main(){
	
	int nasc;
	int alist;
	int idade;
	
	
	printf("Digite seu ano de nascimento: ");
	scanf("%d", &nasc);
	
	alist = (nasc - 2020) * (-1);
	
	idade = 18 - alist;
	
	if(alist < 18){
		printf("Voce tem %d anos ainda nao pode se alistar falta %d ano para voce se alistar", alist, idade);
	}
	else{
		printf("Voce tem %d anos ja pode se alistar", alist);
	}
}
