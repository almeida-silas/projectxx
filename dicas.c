
void dicas(void){
	
	int voltar;
	system("cls");
	// Sa�da de dados;
	printf("\t\t\t==================================================\n");
    printf("\t\t\t=                                                =\n");
    printf("\t\t\t=                      Dicas                     =\n");
    printf("\t\t\t=                                                =\n");
    printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                    [0] Voltar  =\n");   // Montra op��o para voltar
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                                =\n");  
    printf("\t\t\t=  FORCA = O jogo da forca � jogado em 2         =\n");   // Informa ao usu�rio o jogo da forca;
	printf("\t\t\t=  Perde vida a cada erro, e ganha se acertar.   =\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t=  Mat�matica = Feitas algumas perguntas         =\n");   // Informa ao usu�rio o jogo da matem�tica;
	printf("\t\t\t=  A depender do n�vel fica mais dif�cil.        =\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t=  Velha = Marque com n�meros as posi��es        =\n");   // Informa ao usu�rio o jogo da velha;
	printf("\t\t\t=  Tente ganhar do seu advers�rio ou Velha!!.    =\n");	
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t==================================================\t");
	scanf("%i", &voltar);
	
	if(voltar == 0){
		main(); // Volta ao menu principal;
	}else{
		printf("\t\t\t  Op��o inv�lida"); // Mostra erro;
		printf("\n\t\t\t  ");
		system("pause");
		dicas();
	}
	
}
