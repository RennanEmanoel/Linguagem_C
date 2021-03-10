#include <stdio.h>

#include <stdlib.h>

int main(){
	
	
	float salario;
	float salA;
	float porc;
	
	
    porc = salario / 15;
	
	salA = salario + porc;
	
	printf("Digite seu salario atual: ");
	scanf("%f", &salario);
	
	printf("Seu salario sera: %.2f", salA);
	
	System: ("\nPAUSE");
}
