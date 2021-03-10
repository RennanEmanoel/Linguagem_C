//criador: Rennan Emanoel
//data: 19/10/2020
//programa: testes de struct

//declaracoes de bibliotecas
#include <stdio.h>
#include <conio.h>

int main()         //funcao principal
{
	struct exmp   // declaracao de struct
	{          
		         //declaracao de variaveis da struct
		int inte; 
		float flut;
		
	}exple1, exple2;// nomes da struct
	
	exple1.inte = 1300; //declaracao do valor de exple1
	exple2 = exple1;   // declaracao de exple2
	
	printf("%d\n", exple2.inte);
	
}
