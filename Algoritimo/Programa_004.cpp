#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, num2;
	int num3;

	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	num3 = num1 + num2;
	
	printf("O somatorio entre o numero %d e %d eh igual a ", num1, num2);
	printf("%d",num3);
}
