//criador: Rennan Emanoel
//data: 19/10/2020
//programa: testes de struct

            //declara��o de bibliotecas
#include <stdio.h>
#include <conio.h>
            //fim das declara��o de bibliotecas

struct component//declara��o de compotentes
{
	         //declara��es de variaveis
	char ty[20];
	char ref[4];
	unsigned char num_ref;
	int valo;
	char unidade[10];
	
} comp;//declara��o do nome da struct.

int main()//inicio da fun��o principal
{
	 //leitura da informacoes e especificacoes 
	 
	printf("Digite um tipo: ");
	fflush(stdin);
	fgets(comp.ty, 20, stdin);
	
	printf("digite referencia: ");
	fflush(stdin);
	fgets(comp.ref, 4, stdin);
	
	printf("digite o numero da referencia: ");
	scanf("%c",&comp.num_ref);
	getchar();
	
	printf("Digite o valor do componente: ");
	scanf("%d",&comp.valo);
	getchar();
	
	printf("Digite a Unidade: ");
	fflush(stdin);
	fgets(comp.unidade, 10, stdin);
	
	//Impressao na tela das especificacoes 
	
	printf("\n\nUNIDADE CRIADA\n\n");
	printf("%s", comp.ty);
	printf("%s", comp.ref);
	printf("%c", comp.num_ref);
	printf("Valor: %d", comp.valo);
	printf(" %s \n\n", comp.unidade);
}
