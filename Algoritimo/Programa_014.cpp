#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num, rest;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	rest = num % 2;
	
	if(rest == 0){
		printf("\n\nnEsse eh um numero par");
	}else{
		printf("\n\nEsse eh um numero Impar");
	}
}
