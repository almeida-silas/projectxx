void menu_jogos(void) { // Menu de jogos

	system("cls");
   	
	// Declaração das variáveis
	int jogo;
	void jogom(void); void start(void); void forca(void);

    // Saída de dados -- Menu
	printf("\t\t\t=======================================================\n");
	printf("\t\t\t=                                                     =\n");
	printf("\t\t\t=                       JOGOS                         =\n");
	printf("\t\t\t=                                                     =\n");
	printf("\t\t\t=======================================================\n");
	printf("\t\t\t= Forca [1] | Matemática [2] | Velha [3] | Voltar [0] =\n"); // Mostrando opções
    printf("\t\t\t=======================================================\t");

    // Entrada de dados - Escolhendo opções
    scanf("%i", &jogo);

	if(jogo < 0 || jogo > 3) {
		
		printf("\t\t\t  Opção inválida!!\n"); // Saída de dados - Informa erro
		printf("\t\t\t  ");
		system("pause"); 
		menu_jogos(); // Volta ao menu
	}

     switch(jogo) { // Opções do menu
    	case 1:
			// Inicia o jogo da forca
			jogof();
			break;
		case 2:
			jogom(); // Inicia o jogo da matemática
			break;
		case 3:
			start(); // Inicia o jogo da Velha
			break;
    	case 0:
        	main(); // Volta ao menu principal
        	break;
    }
}

