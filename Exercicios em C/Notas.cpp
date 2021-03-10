#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//função principal
int main()
{
	float nota1, nota2, nota3, nota4, result;
	
	printf("Bem vindo ao programa de soma de media:\n\n");
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("Digite a Terceira nota: ");
	scanf("%f", &nota3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);
	
	
	result = nota1 + nota2 + nota3 + nota4 / 3;
	
	if(result > 7)  
	{
	  textcolor(BLUE);
	  
      cprintf("\n\n\t\tAprovado!!");
      
	}
	 if(result < 7) 
	{
      textcolor(RED);
      
	  cprintf("\n\n\tReprovado");
	
    }
	 
	
	
}

