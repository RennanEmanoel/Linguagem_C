#include <stdio.h>
#include <stdlib.h>

int main(){
	 int numer;
	 int chut;
	 int tent;
	 
	 printf("Digite o numero: ");
	 scanf("%d", &numer);
	 
	 getchar();
	 
	 tent = 1;
	 
	 do{
	 	
	 printf("\nDigite seu chute: ");
	 scanf("%d", &chut);
	 	
	 
	 
	 if(chut != numer){
	 	
	 	printf("Voce errou!!");
	 	tent++;
	 	
	 	if(chut < numer){
	 		printf("\nO numero e maior que %d\n", chut);
		 }else if(chut > numer){
		 	printf("\nO numero e menor que %d\n", chut);
		 }
	 	
	 
	 }
	 	if(chut == numer){
	 	printf("Voce acertou!!");
	 	printf("Voce levou %d chances para acertar", tent);
	 	
	 }
	 
	 }while(chut != numer);
	  
	 
}
