void sobre(void) { // Informações para usuário

	// Declaração das variáveis
	int voltar;

	system("cls");
	// Saída de dados - Mostrando layout do sobre
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=       ----- | Equipe de criação |-----         =\n");
	printf("\t\t\t==================================================\n");
	printf("\n\n\t\t\t | Silas Almeida\n\n"); //Saída de dados - Mostra dados

    // Entrada de dados
	printf("\n\t\t\t\t\t\t\t     | 0 - Voltar  | ");
	scanf("%i", &voltar); // Entrada de dados - Opção para Voltar

	if(voltar == 0) {
		main(); // Volta ao menu principal
	} else {
			sobre(); // Entra em sobre novamente
	}
}
