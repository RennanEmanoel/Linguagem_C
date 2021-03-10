#include <stdio.h>
#include <stdlib.h>

int main(){
	
	 int lad1, lad2, lad3, triang;
	 
	 printf("Digite o primeiro lado: ");
	 scanf("%d", &lad1);
	 printf("Digite o segundo lado: ");
	 scanf("%d", &lad2);
	 printf("Digite o terceiro lado: ");
	 scanf("%d", &lad3);
	 
	 if(lad1 == lad2 && lad2 == lad3){
	 	printf("Equilatero");
	 }
	 else if(lad1 == lad2 || lad2 == lad3 || lad3 == lad1){
	 	printf("Isoceles");
	 }
	 else if(lad1 != lad2 && lad2 != lad3){
	 	printf("Escaleno");
	 }
}
