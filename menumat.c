void jogom(void) { // Jogo da matem�tica

	system("cls"); // Limpa tela

	// Declara��o das vari�veis
	int escolha;
	void fase3 (void);
	void fase2 (void);
	void fase1(void);

    // Sa�da de dados; -- Menu
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t=              JOGO DA MATEM�TICA                =\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t==================================================\n");
    printf("\t\t\t= N�vel [1] | N�vel [2] | N�vel [3] | Voltar [0] =\n"); // Mostrando op��es
	printf("\t\t\t==================================================\t");
	
	// Entrada de dados - Escolhendo op��o
	scanf("%i", &escolha);

	switch(escolha) {// Op��es do menu
	    case 0 :
	        menu_jogos(); // volta ao menu
            break;
        case 1 :
            fase1(); // Entra na fase 1
            break;
        case 2 :
            fase2(); // Entra na fase 2
            break;
        case 3 :
            fase3(); // Entra na fase 3
            break;
	}
}

