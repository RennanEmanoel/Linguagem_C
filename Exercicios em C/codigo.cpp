#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void codifica();

int main(int argc, char *argv[])
{
    printf("Digite o codigo:");
    printf("digite $ para sair");
    codifica();
    
    return 0;
}

void codifica()
{
    char ok = 0, ch;
    
    while(!ok)
    {
        ch = getche();
        
        if(ch == '$')
        {
            ok = 1;
            continue;
        }
        
        printf("%d",&ch + 2);
    }
}
