
void fase3 (void){ // Fase 3 do jogom;

    // Gerando n�meros randomicos;
    srand(time(NULL));
    int varA = rand() % (1, 9);
    int varB = rand() % (1, 9);
    int varC = rand() % (1, 9);

    // Declara��o das vari�veis;
    float delta , aux, resposta;
    char voltar; char layout(int fase);

    // Processamento - C�lculo de delta;
    aux = -4*(varA*varC);
    delta = (varB*varB)+aux;

//    system("cls");

    layout(3); // Mostrando layout|Enfeite;

    if(varA == 1){ // Condi��o para n�o mostrar A quando x� for 1;
            // Sa�da de dados;
            printf("\t\t\t  Equa��o do segundo Grau!!\n"); // Exibe pontua��o;
            printf("\n\t\t\t  Sendo: x� %ix %i = 0\n\t\t\t  Delta = ", varB, varC); // Exibe pergunta;
    }
    else{
            printf("\t\t\t  Equa��o do segundo Grau!!\n"); // Exibe pontua��o;
            printf("\n\t\t\t  Sendo: %ix� %ix %i = 0\n\t\t\t  Delta = ",varA, varB, varC); // Exibe pergunta;
        }
            scanf("%f", &resposta); // Entrada de dados - Resposta;

    if(delta == resposta){

        printf("\t\t\t  Correto!!!\n\n"); // Sa�da de dados - Mostra acerto;

        printf("\t\t\t  Voltar [B] - Continuar [C] ");
        scanf("%s", &voltar);

            if(voltar == 'B' || voltar == 'b'){
                jogom();
            }else{
                fase1(); // Repete fase 1;
            }

    }else{

        printf("\t\t\t  Errou!! \n\n"); // Sa�da de dados - Mostra erro;
        printf("\t\t\t  A resposta correta �: %.0f \n", delta); // Mostrando o resultado correto;

        printf("\t\t\t  Voltar [B] - Continuar [C] ");
        scanf("%s", &voltar);

            if(voltar == 'B' || voltar == 'b'){
                jogom();
            }else{
                printf("\n\t\t\t\t ");
                system("pause"); 
                fase3(); // Repete fase 3;
            }
    }
}
