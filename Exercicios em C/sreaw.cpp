/*
   Criador: Rennan Emanoel A. Trindade | data: 22/10/2020
   linkedin: www.linkedin.com/in/dev-rennan-emanoel | Email: rennanemaneol386@gmail.com
   Programa: 
*/

//--- Bibliotecas utilizadas ---

#include <stdio.h>
#include <stdlib.h>


//--- Prototipo de funcoes auxiliares ---
void learquivo(int *vet);

//--- Funcao principal ---
int main()
{
	int vet[10];
	
	printf("O arquivo foi criado com sucesso!!");
	
	
	
}//end main


//--- Desenvolvimento das funcoes auxiliares ---

void Learuquivo(int *vet)
{
	char i = 0;
	
	FILE *teste;
	
	teste = fopen("C\\PROGRAMAÇÃO (D:)\\Linguagem C\\programas\\teste\\teste.txt","r");
	
	for(i =0;i < 9;i++) fscanf(teste,"%d\n", &vet[i]);
	
	teste = fopen("teste02.txt","w");
	
	for(i =0; i < 9;i++) fprintf(teste,"%d\n", vet[i] = 2);
	
	fclose(teste);
}
