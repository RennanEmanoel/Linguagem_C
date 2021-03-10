#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf(" o numero %d eh maior", num1);
	}else{
		printf("O numero %d eh maior", num2);
	}
}
