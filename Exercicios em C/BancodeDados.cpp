#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//-----prototipos-------
int norte();
int sul();
int sudeste();
int nordeste();
int centrooeste();

int main()
{
	char regiao[5];
	
	printf("Programa de Banco de Dados\n\n");
	
	printf("Escolha:\n\nNorte(n)\nSul(s)\nNordeste(nd)\nSudeste(se)\nCentro-Oeste(co)");
	strupr(regiao);
	scanf("%s", regiao);
	
	
	switch(regiao)
	
	case 'n':
		
		norte();
		break;
	case 's':
		
		sul();
		break;
	case 'nd':
		
		nordeste();
	    break;
	case 'se':
		
		sudeste();
	    break;
	case 'co':
		
		centrooeste();
	    break;
		
	system("PAUSE");
	return 0;
}

int norte()
{
	printf("Norte:\nPaula\nFernanda\nGuilherme\nJoao\nDavi");
}
int sul();
{
	prinnt("Sul:\nJose\nMaria\nTatiana\nSuzy");
}
int sudeste()
{
	printf("Sudeste:\nAna\nGabriel\nAndrey\nPaulo");
}
int nordeste()
{
	printf("Nordeste:\nBruce\nFrancisco\nMarcos");
}
int centrooeste()
{
	printf("Centro-Oeste\nRennan");
}
