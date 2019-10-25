
void sobre(void) { // Informações para usuário;

	// Declaração da variável;
	int voltar;

//	system("cls" || "clear");
	// Saída de dados - Mostrando layout do sobre;
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=       ----- | Equipe de criação |-----         =\n");
	printf("\t\t\t==================================================\n");
	printf("\n\n\t\t\t | Silas Almeida\n\n\t\t\t"); //Saída de dados - Mostra dados;

    // Entrada de dados;
	printf("\n\t\t\t\t\t\t\t     | 0 - Voltar  | ");
	scanf("%i", &voltar); // Entrada de dados - Opção para Voltar;

	if(voltar == 0) {
		main(); // Volta ao menu principal;
	} else {
	    sobre(); // Entra em sobre novamente;
	}
}
