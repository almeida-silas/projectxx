// Inclus�o de bibliotecas
#include <stdio.h>		
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <windows.h> // biblioteca windows

// Incluindo outras partes do projeto
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

int main() {

	// Escolhendo idioma
    setlocale(LC_ALL, "Portuguese");

    // Declara��o das Vari�veis
    int escolha;
	void menu_jogos(void); void cadast(void); void sobre(void);

	system("cls"); // limpa console
    system("color 02"); // Muda as cores
    
	// Sa�da de dados -- Menu Principal
    printf("\t\t\t==================================================\n");
    printf("\t\t\t=                                                =\n");
    printf("\t\t\t=                      INICIO                    =\n");
    printf("\t\t\t=                                                =\n");
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=     || Bem-vindo    ||                         =\n");
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=        Jogos [1] | Dicas [2] | Sobre [3]       =\n"); // Mostrando op��es
	printf("\t\t\t==================================================\t");
	
	// Entrada de dados - Escolhendo op��es
	scanf("%i", &escolha);

	if(escolha < 1 || escolha > 3) {
	
		printf("\t\t\t  Op��o inv�lida!!\n"); // Sa�da de dados - Mostra ao usu�rio erro
		printf("\t\t\t  ");
	
		system("pause"); 
		main();
	}

	switch(escolha) {// Op��es do menu
        case 1:
			menu_jogos(); // Entra no menu de jogos
            break;
		case 2:
			dicas(); // entra no menu de dicas
			break;
    	case 3:
			sobre(); // Entra em sobre
            break;
        }
	return 0;
}
