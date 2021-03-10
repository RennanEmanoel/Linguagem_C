#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int a, b, c;
	
	int delta;
	
	printf("Digite o valor A: ");
	scanf("%d", &a);
	
	printf("Digite o valor B: ");
	scanf("%d", &b);
	
	printf("Digite o valor C: ") ;
	scanf("%d", &c);
	
	delta = (b * 2) - (4 * (a)) * (c);
	
	printf(" o delta e igual a %d", delta);	
	
}
