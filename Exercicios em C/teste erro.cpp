//programa: variaveis globais vs locais

//declaracao de bibliotecas auxiliares
#include <stdlib.h>
#include <stdio.h>

//----Variaveis locais
/*
são aquelas variaveis que são declaradas antes da função principal ou qualquer outra função

- Eles ocupam muito espaço nao so quando esta sendo executada mais em todo o codigo

- pode ocasiionar erros no seu programa 
*/
void test1();
void test2();


int counter;

int main()
{
int counter =200;

test1();
	
}
void test1()
{
test2();
printf("O valor do couter e: %d\n\n", counter);	
}

void test2()
{
	int counter;
	
	for(counter = 0; counter < 10; counter++) printf("--");
	
}
