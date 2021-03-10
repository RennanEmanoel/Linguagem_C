/*
Criador: Rennan Emanoel
Data: 06/10/2020
objetivo: este programa mostra a você as promocões da nossa loja
linkedin: www.linkedin.com/in/dev-rennan-emanoel
*/

#include <stdio.h> // Aqui nós incluimos um biblioteca de entrada e saída.
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>


int main(int argc, char ** argv) // Função principal do codigo.
{ // Abertura do codigo

    int choice; // Variavel inteira
    int choice2, SouN, discricao, decisao;
    char nome[30];
    
    
    printf("Ola, visitante Espacial qual e seu nome? ");
    fgets( nome, 30, stdin );
      getchar();
    
    printf("Oii, %sVoce gostaria de ver as nossas promocoes?Digite:\n1) Para Sim \n2) Para Nao: ",nome);
    scanf("%d",&SouN);
    system("cls");//----------------------------Limpar a tela do usuario--------------------------------
    
    
    if(SouN == 1)
    {//Abertura if para ver promoções
    
  inicio:
    
    printf("\nQual dessas categorias voce mais se interessa?\n1) Livros\n2) Moveis\n3) Celulares\n4) Roupas\n5) Jogos\nDigite qual categoria voce quer acessar: ");
    scanf("%d",&choice); // Scanf é usado como o leia, para o usuario escreva. E o %d é usado para chamar uma variavel, cada tipo de variavel tem o seu proprio 
        
      switch (choice)// switch é o escolha
      {
          
        
        case 1://---------------------Caso livros--------------------------
        
  livros:
  	// O case 1 e o de escolha de livros, as quatro primeiras linhas abaixo sao a tabela.
        printf("\n\t**Confira as nossas promocoes de livros do Rick Riordan:**\n\n\tSerie) Percy Jackson e os Olimpianos:\n\n\tLivro\t\t   |Edicao |\tPreco\n\t\t\t   |\t   |\n");
        printf("\tO Ladrao de Raios  |   1)  |\tR$39.00\n\tA Maldicao do Tita |   3)  |\tR$36.00\n\n\t");
        // O \t serve para dar um espaçamento entre as paravras, e o \n serve para pula linha.
        
        printf("Serie os Herois do Olimpo:\n\n\tLivro\t\t   |Edicao |\tPreco\n\t\t\t   |\t   |\n");// Tabela livros        
        printf("\tO Herois Perdido   |  1)   |\tR$40.00\n\tO Filho de Netuno  |  2)   |\tR$39.90\n\tA Marca de Athena  |  3)   |\tR$36.00\n\n");
        
        printf("Se voce tem interesse em algum desses itens digite a posicao  dele, se nao digite 10: ");
        scanf("%d",&choice2);
        system("cls");//----------------------------Limpar a tela do usuario--------------------------------
        
        
         switch(choice2)// ------------Este Switch é a escolha dos livros-----------------
         {
         	
             case 1: //--------- este case e a escolha de livro 1 o Ladrao de raios.------------
             	
                 printf("O Ladrao de Raios");
                 printf("\nVoce quer a sinopsia do livros? Digite\n1)Sim\n2)Nao: ");
                 scanf("%d",&discricao);
                     
                 
                     if(discricao == 1)// este if esta sendo usado para mostrar a sinopse do livro ao cliente.
                     {
                     	//sinopse do livro.
                     printf("\nParcy jackson e o Ladrao de Raios e um livro juvenil de fantasia e aventura baseado na mitologia grega, escrito por Rick Riordan.\n");
                     printf(" E o primeiro livro da serie norte-americana Percy Jackson & the Olympians, que narra a vida do adolescente Percy Jackson que descobre ser um semideus, filho de Poseidon com uma humana.\n");
                     
					 printf("\nDigite 0 para voltar para o inicio ou 1 para voltar para a selecao de livros: ");
                     scanf("%d",&decisao);
                     system("cls");//----------------------------Limpar a tela do usuario--------------------------------
                      
                      switch(decisao)// este switch  e usado para ou retornar o inicio das categoria ou voltar a selecao de livros.
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto livros;
                           	
                           	break;
                      }
                     
					 
					 } else if(discricao == 2)// este else if e usado aso o usuario nao queira ler a sinopse.
                     {
                         printf("ok");
                     }
                     
             break;
             
             case 2:// case 2 e a escolha de livros 2 a maldicao do titam.
             
                 printf("A Maldição do Tita");
                 printf("\nVoce quer a sinopsia do livros? Digite em letras minusclulas\n1)Sim\n2)Nao ");
                 scanf("%d",&discricao);
                 
                     if(discricao == 1)// novamente o if e para ler a sinopse do livro 2 
                     {
                     printf("\nUm chamado do amigo Grover deixa Percy a postos para mais uma missao: dois novos meios-sangues foram encontrados,\n cuja ascendencia ainda e desconhecida.\n");
                     printf("Como sempre, Percy conta com a ajuda da melhor amiga, Annabeth Chase, filha de Atena, e da mais nova parceira,\nThalia Grace, filha de Zeus.\n");
                     
					 printf("\nDigite 0 para voltar para o inicio ou 1 para voltar para a selecao de livros: ");
                     scanf("%d",&decisao);// scanf para ler a decisao do usuario caso ele queira voltar ao incio ou a escolha de livros.
                     system("cls");//----------------------------Limpar a tela do usuario--------------------------------
                      
                      switch(decisao)// decisao do scanf de cima.
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto livros;
                           	
                           	break;
                      }
                     } else if(discricao == 2)// else if se ele nao quiser ler a sinopse do livro 2.
                     {
                         printf("ok");
                     }
                     
                break;// ------------break do escolha caso do livro 2-------------------
             
             case 3:// escolha do livro 3 o heroi perdido.
             	
                 printf("O Heroi Perdido");
                 printf("\nVoce quer a sinopsia do livros? Digite em letras minusclulas\n1)Sim\n2)Nao");
                 scanf("%d",&discricao);// ler escolha do usuario
                 
                     if(discricao == 1)// esse e se a escolha do usuario for ()
                     {
					 //sinopse do livro O heroi perdido.
                     printf("\nUm garoto chamado Jason acorda em um onibus escolar e nao se lembra de nada do seu passado.\n");
                     printf(" Ele se ve sentado ao lado de Piper McLean, aparentemente sua namorada, e de Leo Valdez, que diz ser seu melhor amigo.\n");
                     
                     printf("\nDigite 0 para voltar para o inicio ou 1 para voltar para a selecao de livros: ");// caso ee queira voltar ate determinado ponto
                     scanf("%d",&decisao);//ler decisao.
                     system("cls");//----------------------------Limpar a tela do usuario--------------------------------
                      
                      switch(decisao)//Caso a decisao do usuario
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto livros;
                           	
                           	break;
                      }
                     } else if(discricao == 2)
                     {
                         printf("ok");
                     }
             break;//-------------break do escolha caso do livro 3--------------
             
             case 4:// escolha caso livro 4 O filho de netuno.
             	
                 printf("O Filho de Netuto");
                 printf("\nVoce quer a sinopsia do livros? Digite em letras minusclulas\n1)Sim\n2)Nao");
                 scanf("%d",&discricao);
                 
                     if(discricao == 1)
                     {
                    //Sinopse do Livros o filho de Netuno.
                     printf("\nA vida de Percy Jackson e assim mesmo: uma grande bagunça de deuses e monstros, que na maioria das vezes, acaba em problemas. \n");
                     printf("Filho de Poseidon, o deus do mar, um belo dia ele acorda de um longo sono e nao sabe muito mais do que o seu proprio nome.\n ");
                     
                     printf("\nDigite 0 para voltar para o inicio ou 1 para voltar para a selecao de livros: ");//Voltar ate determinado ponto de controle.
                     scanf("%d",&decisao);//ler decisao.
                     system("cls");//----------------------------Limpar a tela do usuario--------------------------------
                      
                      switch(decisao)//caso decisao.
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto livros;
                           	
                           	break;
                      }
                     } else if(discricao == 2)// caso nao queira ler a sinopse do livro
                     {
                         printf("ok");
                     }
             break;// final do case 4 livro Filho de Netunon.
                
             case 5:// Caso escolha dos livros for a numero 5 A marca de Athena.
             	
                 printf("A Marca de Athena");
                 printf("\nVoce quer a sinopsia do livros? Digite em letras minusclulas\n1)Sim\n2)Nao");//Caso queira retornar ate certo ponto.
                 scanf("%d",&discricao);//ler decisao.
                 
                     if(discricao == 1)
                     {
                     printf("\nAnnabeth esta apavorada. Justo quando ela esta prestes a reencontrar Percy \n");
                     printf("— apas seis meses afastados por culpa de Hera —, o Acampamento Jupiter parece estar se preparando para o combate.\n");
                     
                     printf("\nDigite 0 para voltar para o inicio ou 1 para voltar para a selecao de livros: ");
                     scanf("%d",&decisao);
                     system("cls");//----------------------------Limpar a tela do usuario--------------------------------
                      
                      switch(decisao)
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto livros;
                           	
                           	break;
                      }
                     } else if(discricao == 2)
                     {
                         printf("ok");
                     }
             break;
             
         }
         
        
        if(choice2 == 10 || choice2 > 5)// caso o usuario queira sair do programa.
         {
             printf("\t---------------Volte sempre---------------");
        }
        
         break;
     
    
    
             case 2: // --------------------------------------Caso Moveis---------------------------------------------------------
    Moveis:
    
                  printf("\n\tConfira as nossas Promocoes de moveis:**\n\n\tMovel\t  | Preco\n\t\t  |\n");// Tabela Moveis
                  printf("\tCama box  | R$ 300.00\n\tGeladeira | R$ 500.00\n\tFogao\t  | R$ 350.00\n\tArmario   | R$ 450.00\n\n");
        
                  printf("Se voce tem interesse em algum desses itens digite a posicao  dele, se não gostou de nenhum dele digite 10: ");
                  scanf("%d",&choice2);
                  system("cls");//----------------------------Limpar a tela do usuario--------------------------------
        
         switch(choice2)// escolha dos eletrodomesticos
         {
             case 1:
                 printf("Cama Box\n");
                 
                 printf("Digite 0 para voltar para o inicio ou 1 para voltar para a selecao de moveis: ");//Caso queira retornar ate certo ponto.
                     scanf("%d",&decisao);//ler decisao.
                      
                      switch(decisao)//Caso a decisao do usuario
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto Moveis;
                           	
                           	break;
                      }
             break;
             
             case 2:
             	
                 printf("Geladeira\n");
                 printf("Digite 0 para voltar para o inicio ou 1 para voltar para a selecao de moveis: ");//Caso queira retornar ate certo ponto.
                 scanf("%d",&decisao);//ler decisao.
                      
                      switch(decisao)//Caso a decisao do usuario
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto Moveis;
                           	
                           	break;
                      }
             break;
             
             case 3:
             	
                 printf("Fogao\n");
                 printf("Digite 0 para voltar para o inicio ou 1 para voltar para a selecao de moveis: ");//Caso queira retornar ate certo ponto.
                 scanf("%d",&decisao);//ler decisao.
                      
                      switch(decisao)//Caso a decisao do usuario
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto Moveis;
                           	
                           	break;
                      }
             break;
             
             case 4:
             	
                 printf("Armario\n");                 
                 printf("Digite 0 para voltar para o inicio ou 1 para voltar para a selecao de moveis: ");//Caso queira retornar ate certo ponto.
                 scanf("%d",&decisao);//ler decisao.
                      
                      switch(decisao)//Caso a decisao do usuario
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto Moveis;
                           	
                           	break;
                      }
             break;
             
         }
        
        
        
        if(choice2 == 10 || choice2 > 5)// caso o usuario queira sair do programa.
         {
           printf("---------------Volte sempre---------------");
         }
        
        break;
 
    
          case 3: // ----------------------------------Caso celulares-------------------------------------------------------
          
    Celulares:
    
           printf("\n\t**Confira as nossas promocoes de celulares:**\n\tModelo\t | Marca |  Preço\n");//Tabela Celulares
           printf("\tRedmi 9  | Xiaomi|  R$ 1.299.00\n\tK10\t |   LG  |  R$ 1.190.00\n\tA20\t |Samsung|  R$ 1.200.00\n\tIphone 6 |  Apple|  R$ 4.970.00\n\tNokia\t | Nokia |  R$500.00\n");
        
           printf("Se voce tem interesse em algum desses itens digite a posicao  dele, se nao gostou de nenhum deles digite 10: ");
           scanf("%d",&choice2);
           system("cls");//----------------------------Limpar a tela do usuario--------------------------------
        
        switch(choice2)// escolha dos eletrodomesticos
         {
             case 1:
                 printf("\nRedmi 9\n");
                 printf("Sistema operacional	Android 10.0 \nRAM	4 GB \nCapacidade de armazenamento da memória	64 GB");
             break;
             
             case 2:
                 printf("\nK10\n");
                 printf("-Memória Interna: 16GB \n-Memória Expansível até: Micro SD 32GB \n-nMemória RAM: 1GB");
             break;
             
             case 3:
                 printf("\nA20\n");
                 printf("-Câmera frontal: 8MP\n-Memória Total Interna: 32GB\n-Memória RAM: 3GB");
             break;
             
             case 4:
                 printf("\nIphone 6\n");
                 printf("-Memória Interna	16GB\n-Memória RAM	1GB\n-Processador	Chip A8 com arquitetura de 64 bitsCoprocessador de movimento M8\n-Sistema Operacional	iOS");
             break;
             
             case 5:
                 printf("\nNokia");
                 printf("Processador	MediaTekHelioA22\n-Memória RAM	2GB\n-Memória Interna	32GB");
             break;
             
         }
        
        if(choice2 == 10 || choice2 > 5)// caso o usuario queira sair do programa.
        {
          printf("---------------Volte sempre---------------");
        }
        
        break;
        
        
    
      case 4: // --------------------------------------------Caso roupas-------------------------------------------------------
      
    Roupas:
    
        printf("\n\t*Confira as nossas super promoçôes de roupas*\n");// Tabela roupas
        printf("\t\tPeça\t | Preço\n\t\t\t |\n\t\tCamisa\t | R$ 20.00\n\t\tCalcas\t | R$ 50.00\n\t\tMoletons | R$ 60.00\n\t\tsapatos\t | R$ 50.00\n\t\tchapeus\t | R$ 10.00\n");
        
        printf("Se voce tem interesse em algum desses itens digite a posicao  dele, se nao gostou de nehum deles digite 10: ");
        scanf("%d",&choice2);
        system("cls");//----------------------------Limpar a tela do usuario--------------------------------
        
        switch(choice2)// escolha dos eletrodomesticos
         {
             case 1:
                 printf("Camisa");
             break;
             
             case 2:
                 printf("Calcas");
             break;
             
             case 3:
                 printf("Moletons");
             break;
             
             case 4:
                 printf("Sapatos");
             break;
             
             case 5:
                 printf("Chapeus");
             break;
             
         }
        
        if(choice2 == 10 || choice2 > 5)// caso o usuario queira sair do programa.
         {
            printf("---------------Volte sempre---------------");
         }
        
        break;
        
        
    
      case 5: // ----------------------------------------Caso jogos----------------------------------------------------
    
    Jogos:
    
          printf("\n\t-Confira as nossas promocoes de jogos:-\n\n");// tabela jogos
          printf("\tJogo\t   |plataforma| Preco\n");
          printf("\tGod of war |   PS4    | R$ 150.00\n\tF1 2020\t   | Xbox one | R$ 120.00\n\tMK 11\t   |   PC     | R$ 145.00\n\tAmong Us   |   PC     | R$ 15.00\n\tGTA V\t   |   PS4    | R$ 180.00\n");
        
          printf("Se voce tem interesse em algum desses itens digite a posicao  dele, se nao gostou de nunhum deles  digite 10: ");
          scanf("%d",&choice2);
          system("cls");//----------------------------Limpar a tela do usuario--------------------------------
        
             switch(choice2)// escolha dos Jogos
             {
             case 1:
                 printf("\nGod of war\n");
                 printf("\nVoce quer a sinopsia do Jogo? Digite \n1)Sim\n2)Nao");//Caso queira ler a sinopse do jogo.
                 scanf("%d",&discricao);//ler decisao.
                 
                     if(discricao == 1)
                     {
                     printf("\nMuitos anos se passaram desde que Kratos teve sua vinganca contra os deuses do Olimpo, e agora ele vive com seu filho Atreus em Midgard.");
                     printf("O jogo começa apos a morte da segunda esposa de Kratos e mae de Atreus, Faye. ... Na jornada, Kratos e Atreus encontram a Serpente do Mundo, Jormungandr, que se mostra amigavel.");
                     
                     printf("\nDigite 0 para voltar para o inicio ou 1 para voltar para a selecao de Jogos: ");
                     scanf("%d",&decisao);
                     system("cls");//----------------------------Limpar a tela do usuario--------------------------------
                      
                      switch(decisao)
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto Jogos;
                           	
                           	break;
                      }
                     } else if(discricao == 2)
                     {
                         printf("ok");
                     }
                
             break;
             
             case 2:
                 printf("F1 2020");
                 printf("\nVoce quer a sinopsia do Jogo? Digite \n1)Sim\n2)Nao");//Caso queira ler a sinopse do jogo.
                 scanf("%d",&discricao);//ler decisao.
                 
                     if(discricao == 1)
                     {
                     printf("\nF1 2020 e o videojogo oficial da temporada 2020 de Formula 1, que, ainda, disponibiliza como recurso acessivel a edicao de 2020 de uma das categorias secundarias, a Formula 2.\n");
                                          
                     printf("\nDigite 0 para voltar para o inicio ou 1 para voltar para a selecao de Jogos: ");
                     scanf("%d",&decisao);
                     system("cls");//----------------------------Limpar a tela do usuario--------------------------------
                      
                      switch(decisao)
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto Jogos;
                           	
                           	break;
                      }
                     } else if(discricao == 2)
                     {
                         printf("ok");
                     }
             break;
             
             case 3:
                 printf("MK 11");
                 printf("\nVoce quer a sinopsia do Jogo? Digite \n1)Sim\n2)Nao");//Caso queira ler a sinopse do jogo.
                 scanf("%d",&discricao);//ler decisao.
                 
                     if(discricao == 1)
                     {
                     printf("\nMortal Kombat 11 e um jogo eletronico de luta desenvolvido pela NetherRealm Studios e publicado pela Warner Bros. Interactive Entertainment.\n");
                     printf("E a decima primeira edicao principal da serie de jogos eletronicos de luta, Mortal Kombat, e uma continuacao direta de Mortal Kombat X.\n");
                     
                     printf("\nDigite 0 para voltar para o inicio ou 1 para voltar para a selecao de Jogos: ");
                     scanf("%d",&decisao);
                     system("cls");//----------------------------Limpar a tela do usuario--------------------------------
                      
                      switch(decisao)
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto Jogos;
                           	
                           	break;
                      }
                     } else if(discricao == 2)
                     {
                         printf("ok");
                     }
             break;
             
             case 4:
                 printf("Among Us");
                 printf("\nVoce quer a sinopsia do Jogo? Digite \n1)Sim\n2)Nao");//Caso queira ler a sinopse do jogo.
                 scanf("%d",&discricao);//ler decisao.
                 
                     if(discricao == 1)
                     {
                     printf("\nAmong Us e um jogo eletrônico casual multijogador desenvolvido e publicado pelo estudio de jogos estadunidense InnerSloth. \n");
                     printf("Foi lancado em 15 de junho de 2018 para Android e iOS e em 17 de agosto de 2018 para Microsoft Windows.\n");
                     
                     printf("Digite 0 para voltar para o inicio ou 1 para voltar para a selecao de Jogos: ");
                     scanf("%d",&decisao);
                     system("cls");//----------------------------Limpar a tela do usuario--------------------------------
                      
                      switch(decisao)
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto Jogos;
                           	
                           	break;
                      }
                     } else if(discricao == 2)
                     {
                         printf("ok");
                     }
             break;
             
             case 5:
                 printf("GTA V");
                 printf("\nVoce quer a sinopsia do Jogo? Digite \n1)Sim\n2)Nao");//Caso queira ler a sinopse do jogo.
                 scanf("%d",&discricao);//ler decisao.
                 
                     if(discricao == 1)
                     {
                     printf("Grand Theft Auto V e um jogo eletronico de acao-aventura desenvolvido pela Rockstar North e publicado pela Rockstar Games\n");
                                        
                     printf("\nDigite 0 para voltar para o inicio ou 1 para voltar para a selecao de Jogos: ");
                     scanf("%d",&decisao);
                     system("cls");//----------------------------Limpar a tela do usuario--------------------------------
                      
                      switch(decisao)
                      {
                          case 0:
                          	
                          	goto inicio;
                          	
                          	break;
                          	
                           case 1:
                           	
                           	goto Jogos;
                           	
                           	break;
                      }
                     } else if(discricao == 2)
                     {
                         printf("ok");
                     }
             break;
             
         }
        
        
        if(choice2 == 10 || choice2 > 5)// caso o usuario queira sair do programa.
         {
          printf("---------------Volte sempre---------------");
         }
        
        break;
        
        
          
    } // final switch
}
     else if(SouN == 2)//abertura else if
     {
        printf("Que pena, tenha um bom dia e volte sempre!!!");
     };//final else
    if (SouN > 2)
    {
      printf("Você digitou um número invalido");
    }
    return(0);
    
}//final int main
