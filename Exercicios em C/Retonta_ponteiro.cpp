//criador: Rennan Emanoel A. trindade
//data: 21/10/2020
//programa: teste de ponteiro em função

// ----declaração de bibliotecas
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


//----Prototipo da funçaõ-----
char *findChar (char caracter, char *str);

int main()
{
	char phase[80];
	char *point, chr;
	
	printf("Digite uma frase: ");
	gets(phase);
	printf("Digite um caracter: ");
	chr = getche();
	point = findChar (chr, phase);
	
	if (point) printf("\n\n%s\n\n", point);//se encontrar conrrespondencia imprimi
	else printf("\n\nNenhuma paridade\n\n");
}// end main


//-------Desenvolvimento da função------
char *findChar (char caracter, char *str)
{
	int cont = 0;
	
	while( (caracter != str[cont]) && (str[cont] != '\0')) cont++;
	
	if(str[cont])   return (&str[cont]);// se houver conrespondencia retorna o ponteiro para a localizacao
	
	else return (char *) '\0';// senao retorna nulo
}// end findChar
