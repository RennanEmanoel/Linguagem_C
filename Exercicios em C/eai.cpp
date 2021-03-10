/*
   Criador: Rennan Emanoel A. Trindade | data: 22/10/2020
   linkedin: www.linkedin.com/in/dev-rennan-emanoel | Email: rennanemaneol386@gmail.com
   Programa: 
*/

//--- Bibliotecas utilizadas ---

#include <stdio.h>
#include <stdlib.h>


//--- Prototipo de funcoes auxiliares ---


//--- Funcao principal ---
int main()
{
	FILE *enigma;
	
	enigma = fopen("Enigma.txt","w");
	
    fprintf(enigma, "--- .-.. .- -.-. --- -....-. .. -.. .- -.. --- -.-. --- -- --- . ... - .-\n -... . -- ...-. .. -. -.. --- .- --- . -. .. --. -- .- . ..- ... --- ..-");
	fprintf(enigma, ".-. . -. -. .- -. . -- .- -. . .-.. --- -.-. --- -.. .. --. --- . .--. --- ... . .. -.. --- -.");
	
	fclose(enigma);
	
	
}//end main


//--- Desenvolvimento das funcoes auxiliares ---
