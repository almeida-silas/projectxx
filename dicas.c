
void dicas(void){
	
	int voltar;
	system("cls");
	// Saída de dados;
	printf("\t\t\t==================================================\n");
    printf("\t\t\t=                                                =\n");
    printf("\t\t\t=                      Dicas                     =\n");
    printf("\t\t\t=                                                =\n");
    printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                    [0] Voltar  =\n");   // Montra opção para voltar
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                                =\n");  
    printf("\t\t\t=  FORCA = O jogo da forca é jogado em 2         =\n");   // Informa ao usuário o jogo da forca;
	printf("\t\t\t=  Perde vida a cada erro, e ganha se acertar.   =\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t=  Matématica = Feitas algumas perguntas         =\n");   // Informa ao usuário o jogo da matemática;
	printf("\t\t\t=  A depender do nível fica mais difícil.        =\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t=  Velha = Marque com números as posições        =\n");   // Informa ao usuário o jogo da velha;
	printf("\t\t\t=  Tente ganhar do seu adversário ou Velha!!.    =\n");	
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t==================================================\t");
	scanf("%i", &voltar);
	
	if(voltar == 0){
		main(); // Volta ao menu principal;
	}else{
		printf("\t\t\t  Opção inválida"); // Mostra erro;
		printf("\n\t\t\t  ");
		system("pause");
		dicas();
	}
	
}
