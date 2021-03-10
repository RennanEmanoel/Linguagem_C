#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num;
	int anti;
	int suces;
	
	
	printf("Digite um numero: ");
	scanf("%d", &num);
		
	anti =  num - 1;
	suces = num + 1;
	
	printf("\nO sucessor de %d eh %d", num, suces);
	
	printf("\n\nO antecessor de %d eh %d ", num, anti);
}
