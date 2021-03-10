//criador: Rennan Emanoel
//data: 19/10/2020
//programa: Relogio

//--declaracao de bibliotecas auxiliares
#include <stdio.h> 
#include <stdlib.h>

// --declaracao de struct
struct clock
{
	int minutos;
	int horas;
	int segundos;
};

void delay();
void update(struct clock *t);
void display(struct clock *t);

//--funcao principal
int main(int argc, char *argv[])
{
	int i;
	
	struct clock time;
	
	time.horas = 0;
	time.minutos = 0;
	time.segundos = 0 ;
	
	for( ; ; )
	{
		update(&time);
		display(&time);
	    system("cls");
	}//end for
	
	return 0; 
}//end main

//--funcao delay
void delay()
{
	long t;
	
	for(t = 1; t<100000; t++);
	
}

//--funcao updade
void update(struct clock *t)
{
	t->segundos++;
	
	if(t->segundos == 60)
	{
		t->segundos = 0;
		t->minutos++;
	}
	
	if(t->minutos == 60)
	{
		t->minutos = 0;
		t->horas++;
	}
	
	if(t->horas == 24) t->horas = 0;
	
	delay();
}

//--funcao display
void display(struct clock *t)
{
	printf("%d:",t->horas);
	printf("%d:", t->minutos);
	printf("%d\n",t->segundos);
 	
}
