/*
   Criador: Rennan Emanoel A. Trindade | data: 22/10/2020
   linkedin: www.linkedin.com/in/dev-rennan-emanoel | Email: rennanemaneol386@gmail.com
   Programa: 
*/

//--- Bibliotecas utilizadas ---

#include <stdio.h>
#include <stdlib.h>


//--- Prototipo de funcoes auxiliares ---
unsigned long factory(int num);

//--- Funcao principal ---
int main()
{
	unsigned long fat;
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", & num);
	getchar();
	
	fat = factory(num);
	
	printf("\nO fatorial de %d eh %ld\n", num, fat);
	
	system("PAUSE");
	return 0;
	
	
	
}//end main

//--- Desenvolvimento das funcoes auxiliares ---
unsigned long factory(int num)
{
	unsigned long result;
	
	if((num == 0) || (num == 1)) return(1);
	
	result = num * factory(num- 1);
	
	return(result);

}
