//Criador: Rennan Emaneol A. Trindade
//data: 22/10/2020
//programa: teste de funções


//---Declaracao de bibliotecas---
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//Prototipo das funções auxiliares
void teste();
void teste2();

int main()
{
	
	int esclh;
	
	printf("Escolha um tema: \n1) Europa\n2)america do sul\nDigite sua escolha: ");
	scanf("%d",&esclh);
	
	switch(esclh)
	{
		case 1:
			{
			teste();	
			break;
			}
		case 2: 
	    	{
			teste2();
			break;
			}	
	}//end switch
	
}//end main

void teste()
{
	printf("Franca");
}//end teste 1 

void teste2()
{
printf("Brasil");
}//end teste 2

