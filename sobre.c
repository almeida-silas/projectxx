void sobre(void) { // Informa��es para usu�rio

	// Declara��o das vari�veis
	int voltar;

	system("cls");
	// Sa�da de dados - Mostrando layout do sobre
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=       ----- | Equipe de cria��o |-----         =\n");
	printf("\t\t\t==================================================\n");
	printf("\n\n\t\t\t | Silas Almeida\n\n"); //Sa�da de dados - Mostra dados

    // Entrada de dados
	printf("\n\t\t\t\t\t\t\t     | 0 - Voltar  | ");
	scanf("%i", &voltar); // Entrada de dados - Op��o para Voltar

	if(voltar == 0) {
		main(); // Volta ao menu principal
	} else {
			sobre(); // Entra em sobre novamente
	}
}
