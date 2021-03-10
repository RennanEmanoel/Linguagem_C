/*
   criador: Rennan Emanoel A. Trindade | data: 22/10/2020
   programa: Cronometro
   Linkedin: www.linkedin.com/in/dev-rennan-emanoel
*/

//--- Bibliotecas ---
#include <stdio.h>
#include <stdlib.h>

//---bibliotecas auxiliares---
void delay();

//---Funcao principal---
int main()
{
int i;
 
 for(i = 0;i < 20;i++)
  {
  	delay();
  	
     printf("%d, ", i);
     
  	
  }
	
	
	
}//--- end main---

void delay()
{
	int a;
	
	for(a = 0;a < 20;a++)
    {
    	system("cls");
    }

}
