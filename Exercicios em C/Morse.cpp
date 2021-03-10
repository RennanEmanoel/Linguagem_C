#include <stdio.h>

int main()
{
	int numer;
	
  inicio:	
   
	 printf("(digite 13 para sair)\n");
	 
	 do
	 {
	 printf("Digite um numero para ser convertido em morse: ");
	 scanf("%d", &numer);
	 
	 if(numer == 1)
	 {
	 	printf(".----\n");
	 
	 }
	 if(numer == 2)
	 {
	 	printf("..---\n");
	 	
	 }
	if(numer == 3)
	 {
	 	printf("...--\n");
	 	
	 }
	if(numer == 4)
	 {
	 	printf("....-\n");
	 	
	 }
	if(numer == 5)
	 {
	 	printf(".....\n");
	 
	 }
	if(numer == 6)
	 {
	 	printf("-....\n");
	 	
	 }
	if(numer == 7)
	 {
	 	printf("--...\n");
	 
	 }
	if(numer == 8)
	 {
	 	printf("---..\n");
	 
	 }
	if(numer == 9)
	 {
	 	printf("----.\n");
	 	
	 }
	if(numer == 0)
	 {
	 	printf("-----\n");
	 
	 }

	 }while(numer != 13);
	 
	 if(numer > 13)
	 {
	 	goto inicio;
	 }
	
	
}
