void jogom(void) { // Jogo da matemática

	system("cls"); // Limpa tela

	// Declaração das variáveis
	int escolha;
	void fase3 (void);
	void fase2 (void);
	void fase1(void);

    // Saída de dados; -- Menu
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t=              JOGO DA MATEMÁTICA                =\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t==================================================\n");
    printf("\t\t\t= Nível [1] | Nível [2] | Nível [3] | Voltar [0] =\n"); // Mostrando opções
	printf("\t\t\t==================================================\t");
	
	// Entrada de dados - Escolhendo opção
	scanf("%i", &escolha);

	switch(escolha) {// Opções do menu
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

