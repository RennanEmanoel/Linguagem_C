//criador: Rennan Emanoel
//data: 19/10/2020
//programa: Testes de struct

#include <stdio.h>              
#include <conio.h>             //Declaração de bibliotecas
#include <stdlib.h>

struct estrutura              //Declaracao de struct
{
	int a, b;
	                         // Declaracao de variaveis da struct
	char c;
};

void print(struct estrutura parametro) // declaracao de funcao do tipo void
{
	printf("%d\n", parametro.a);      // Funcao prinf que imprime na tela
}

int main(int argc, char *argv[])    //Funcao pricipal
{
	struct estrutura argumento;
	
	argumento.a = 131313;
	
	print(argumento);
	
	return 0;
}
