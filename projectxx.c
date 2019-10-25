// Inclus�o de bibliotecas;
#include <stdio.h>		
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h>

// Incluindo outras partes do projeto;
#include "jogov.c"
#include "forca.c"
#include "menumat.c"
#include "sobre.c"
#include "layoutfase.c"
#include "menu_jogos.c"
#include "fase1.c"
#include "fase2.c"
#include "fase3.c"
#include "dicas.c"

    typedef struct
    {
        char nome[30];
        
    }registro;

    // Vari�veis global;
	int gInicio = 0;
    registro cadastro;

int main(){

        setlocale(LC_ALL, "Portuguese");
        // Escolhendo idioma;

        // Declara��o das Vari�veis;
        int escolha;
		void menu_jogos(void); void cadast(void); void sobre(void);

	if(gInicio == 1){

		system("cls");
        system("color 02"); // Muda as cores;

        // Sa�da de dados -- Menu Principal;
        printf("\t\t\t==================================================\n");
        printf("\t\t\t=                                                =\n");
        printf("\t\t\t=                      INICIO                    =\n");
        printf("\t\t\t=                                                =\n");
        printf("\t\t\t==================================================\n");
        printf("\t\t\t=     || Bem-vindo    ||                         =\n");
        printf("\t\t\t==================================================\n");
        printf("\t\t\t=        Jogos [1] | Dicas [2] | Sobre [3]       =\n"); // Mostrando op��es;
        printf("\t\t\t==================================================\t");
        // Entrada de dados - Escolhendo op��es;
        scanf("%i", &escolha);

        if(escolha < 1 || escolha > 3){
            printf("\t\t\t  Op��o inv�lida!!\n"); // Sa�da de dados - Mostra ao usu�rio erro;
            printf("\t\t\t  ");
			system("pause");
			main();
        }

        switch(escolha) // Op��es do menu;
        {
            case 1:
                menu_jogos(); // Entra no menu de jogos;
                break;

            case 2:
                dicas();
                break;
                
            case 3:
                sobre(); // Entra em sobre;
                break;
        }
    }else{
		cadast(); // Vai para o cadastro;
    }
	return 0;
}

void cadast(void){ // Cadastro;

		// Declara��o das vari�veis;
		int tamanho, loop = 0;

	// Registro do jogador; Repete SE errado;

    while(loop != 1){

		printf("\t\t\t\t                 | eXGames | ");
		printf("\n\t\t\t\t--| INFORME ALGUNS DADOS PARA PROSSEGUIR |--\n");

    	// Entrada de dados;
    	printf("Nome: ");
    	scanf("%s", cadastro.nome);

		    tamanho = strlen(cadastro.nome); // Contando letras;

    	if(tamanho > 4){ // Condi��o para cadastro;

    	    system("cls");

            // Encerramento dos loops;
        	loop = 1;
			gInicio = 1;

			printf("Cadastro OK!!\n"); // Sa�da de dados - Exibe OK!;
			// system("pause"); 
			main(); // P�gina principal;

	    }else{

			system("cls");
            printf("\aPor favor, informe um nome real!\n"); // Sa�da de dados - Mensagem de erro;

		}
	}
}
