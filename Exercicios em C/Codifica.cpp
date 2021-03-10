#include <stdio.h>

int main()
{
	int numer;
	 
	 do
	 {
	 printf("Digite um numero para ser convertido em morse: ");
	 scanf("%d", &numer);
	 
	 if(numer == 1)
	 {
	 	printf(".----\n");
	 	printf("(digite $ para sair)\n");
	 }
	 if(numer == 2)
	 {
	 	printf("..---\n");
	 	printf("(digite $ para sair)\n ");
	 }
	if(numer == 3)
	 {
	 	printf("...--\n");
	 	printf("(digite $ para sair)\n ");
	 }
	if(numer == 4)
	 {
	 	printf("....-\n");
	 	printf("(digite $ para sair)\n");
	 }
	if(numer == 5)
	 {
	 	printf(".....\n");
	 	printf("(digite $ para sair)\n ");
	 }
	if(numer == 6)
	 {
	 	printf("-....\n");
	 	printf("(digite $ para sair)\n");
	 }
	if(numer == 7)
	 {
	 	printf("--...\n");
	 	printf("digite $ para sair\n ");
	 }
	if(numer == 8)
	 {
	 	printf("---..\n");
	 	printf("(digite $ para sair) \n");
	 }
	if(numer == 9)
	 {
	 	printf("----.\n");
	 	printf("(digite $ para sair)\n ");
	 }
	if(numer == 0)
	 {
	 	printf("-----\n");
	 	printf("(digite $ para sair)\n");
	 }

	 }while(numer != 13);
	
	
}
