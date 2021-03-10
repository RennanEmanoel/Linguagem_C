#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nome[31];
	float salario;
	
	printf("Digite o nome do funcionario: ");
	scanf("%s", &nome);
	
	printf("Digite o salario do funcionario: ");
	scanf("%f", &salario);
	
	printf("\nO Funcionario %s tem um salario de %f em novembro", nome, salario);
}
