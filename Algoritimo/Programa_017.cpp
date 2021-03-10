#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float not1, not2, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&not1);
	
	printf("Digita a segunda nota: ");
	scanf("%f",&not2);
	
	media = (not1 + not2) / 2;
	
	if(media < 6){
		printf("Reprovado");
	}
	else if(media >= 6 && media <= 10){
		printf("Aprovado");
	}
}
