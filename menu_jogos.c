void menu_jogos(void) { // Menu de jogos

	system("cls");
   	
	// Declara��o das vari�veis
	int jogo;
	void jogom(void); void start(void); void forca(void);

    // Sa�da de dados -- Menu
	printf("\t\t\t=======================================================\n");
	printf("\t\t\t=                                                     =\n");
	printf("\t\t\t=                       JOGOS                         =\n");
	printf("\t\t\t=                                                     =\n");
	printf("\t\t\t=======================================================\n");
	printf("\t\t\t= Forca [1] | Matem�tica [2] | Velha [3] | Voltar [0] =\n"); // Mostrando op��es
    printf("\t\t\t=======================================================\t");

    // Entrada de dados - Escolhendo op��es
    scanf("%i", &jogo);

	if(jogo < 0 || jogo > 3) {
		
		printf("\t\t\t  Op��o inv�lida!!\n"); // Sa�da de dados - Informa erro
		printf("\t\t\t  ");
		system("pause"); 
		menu_jogos(); // Volta ao menu
	}

     switch(jogo) { // Op��es do menu
    	case 1:
			// Inicia o jogo da forca
			jogof();
			break;
		case 2:
			jogom(); // Inicia o jogo da matem�tica
			break;
		case 3:
			start(); // Inicia o jogo da Velha
			break;
    	case 0:
        	main(); // Volta ao menu principal
        	break;
    }
}

