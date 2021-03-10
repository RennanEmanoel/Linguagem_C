#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void function();

int x, y, z;

int main()
{
	int a, b, c;
	a = 1;
	b = 10;
	c = 30;
	
	printf("Na funcao main: a = %d, b = %d, c = %d\n\n", a, b, c);
	
	function();
	
}// end main]

//---desenvolvimento da função----

void function()
{
	int a, b, c;// variaveis locais da funnção function
	a = 20;
	b = 30;
	c = 1;
	
	printf("Na funcao Function: a = %d, b = %d, c = %d\n", a, b, c);
	
	if (a < b)
	{
		int z = 666;
		
		printf("z = %d", z);
	}
}
