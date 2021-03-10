/*
   Criador: Rennan Emanoel A. Trindade | data: 22/10/2020
   linkedin: www.linkedin.com/in/dev-rennan-emanoel | Email: rennanemaneol386@gmail.com
   Programa: arquivos
*/

//--- Bibliotecas utilizadas ---

#include <stdio.h>
#include <stdlib.h>


//--- Prototipo de funcoes auxiliares ---


//--- Funcao principal ---
int main()
{
	FILE *arquivo;     //cria um ponteiro para um arquivo
	
	arquivo = fopen("teste.txt","w");// abre um arquivo para escrita 'w' para write e 'r' para read
	
	fprintf(arquivo, "Hello world");// escreve msg no arquivo txt
	
	fclose(arquivo);    //fecha o arquivo
	
}//end main


//--- Desenvolvimento das funcoes auxiliares ---
