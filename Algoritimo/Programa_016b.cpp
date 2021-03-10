#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int num;
	int chut;
	int tent;
	
	printf("Digite seu numero: ");
	scanf("%d", &num);
	
	printf("Digite seu chute: ");
	scanf("%d", &chut);
	
	tent = 1;
	
	while(chut != num){
		
		printf("Voce errou tente novamente!\n\n");
		tent++;
		
		
		printf("Digite seu chute: ");
	    scanf("%d", &chut);
		
		
		if(chut < num ){
			printf("O numero e menor que %d\n", num);
		}else if(chut > num){
			printf("O numero e mais alto que %d\n", num);
		}		
	}
	if(chut == num){
	printf("Voce acertou parabens\n");
	printf("Voce levou %d chances para acertar", tent);
}
}
