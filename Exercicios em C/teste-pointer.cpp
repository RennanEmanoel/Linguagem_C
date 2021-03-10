/*
    |Criador: Rennan Emanoel A. Trindade  |  Data: 22/10/2020
     
    | Programa: Teste de ponteiro como paramentros da função
     
	| Linkedin: www.linkedin.com/in/dev-rennan-emanoel  | Email: rennanemanoel386@gmail.com
*/

//--- Bibliotecas utilizadas ---

#include <stdio.h>
#include <stdlib.h>

//--- Prototipo de funcoes auxiliares ---

void pointer(int *x, int *y);


//--- Funcao principal ---
int main()
{
	int num1, num2;
	
	printf("Digite um numero: ");
	scanf("%d", &num1);
	getchar();
	
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	getchar();
	
	printf("\n\nOs valores iniciais de num1 = %d, e num2 = %d\n\n", num1, num2);
	
	pointer(&num1, &num2);
	
	printf("Os valores modificadoa de num1 = %d e num2 = %d", num1, num2);
	
}//--- end main ---

//--- desenvolvimento das funcoes auxiliares ---
void pointer(int *x, int *y)
{
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}//--- end pointer ---
