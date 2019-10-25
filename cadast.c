

void cadast(void){ // Cadastro;

		// Declaração das variáveis;
		int tamanho, loop = 0;

	// Registro do jogador; Repete SE errado;

    while(loop != 1){

		printf("\t\t\t\t                 | eXGames | ");
		printf("\n\t\t\t\t--| INFORME ALGUNS DADOS PARA PROSSEGUIR |--\n");

    	// Entrada de dados;
    	printf("Nome: ");
    	scanf("%s", cadastro.nome);

		    tamanho = strlen(cadastro.nome); // Contando letras;

    	if(tamanho > 4){ // Condição para cadastro;

    	    system("cls");

            // Encerramento dos loops;
        	loop = 1;
			gInicio = 1;

			printf("Cadastro OK!!\n"); // Saída de dados - Exibe OK!;
			// system("pause"); 
			main(); // Página principal;

	    }else{

			system("cls");
            printf("\aPor favor, informe um nome real!\n"); // Saída de dados - Mensagem de erro;

		}
	}
}
