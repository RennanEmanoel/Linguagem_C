/*
   Criador: Rennan Emanoel A. Trindade | data: 22/10/2020
   linkedin: www.linkedin.com/in/dev-rennan-emanoel | Email: rennanemaneol386@gmail.com
   Programa: banco de dados 
*/

//--- Bibliotecas utilizadas ---

#include <stdio.h>
#include <stdlib.h>


//--- Prototipo de funcoes auxiliares ---
void norte();
void sul();
void nordeste();
void sudeste();
void centroste();

//--- Funcao principal ---
int main()
{
	int choice;
	
	printf("Escolha sua regiao para falar com nossos atendentes:\n");
	printf("1- Norte\n2- Sul\n3- Nordeste\n4- Sudeste\n5- Centro-Oeste");
	printf("Digite sua escolha");
	scanf("%d", &choice);
	
	switch(choice)//escolha- caso
	{
		case 1:
			
			norte();
			break;
		
		case 2:
			
			sul();
			break;
		
		case 3:
		    
		    nordeste();
		    break;
		    
		case 4:
			
			sudeste();
			break;
		
		case 5:	
		
		    centroste();
		    break;
	}
	
	return 0;
	
}//end main

//--- Desenvolvimento das funcoes auxiliares ---

void norte()
{
	printf("-Eliane\n-Joao\n-Maria\n\nEscolha");
}
