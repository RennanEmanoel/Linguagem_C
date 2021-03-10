#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float num;
	float dobro;
	float div3;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	
	dobro = num + num;
	div3 = num / 3;
	
	printf("\nO dobro de %.1f eh %.1f ", num, dobro);
	
	printf("\n\nA terca parte de %.1f e %f\n\n", num, div3);
	
	system("PAUSE");
}
