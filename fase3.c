
void fase3 (void){ // Fase 3 do jogom;

    // Gerando números randomicos;
    srand(time(NULL));
    int varA = rand() % (1, 9);
    int varB = rand() % (1, 9);
    int varC = rand() % (1, 9);

    // Declaração das variáveis;
    float delta , aux, resposta;
    char voltar; char layout(int fase);

    // Processamento - Cálculo de delta;
    aux = -4*(varA*varC);
    delta = (varB*varB)+aux;

//    system("cls");

    layout(3); // Mostrando layout|Enfeite;

    if(varA == 1){ // Condição para não mostrar A quando x² for 1;
            // Saída de dados;
            printf("\t\t\t  Equação do segundo Grau!!\n"); // Exibe pontuação;
            printf("\n\t\t\t  Sendo: x² %ix %i = 0\n\t\t\t  Delta = ", varB, varC); // Exibe pergunta;
    }
    else{
            printf("\t\t\t  Equação do segundo Grau!!\n"); // Exibe pontuação;
            printf("\n\t\t\t  Sendo: %ix² %ix %i = 0\n\t\t\t  Delta = ",varA, varB, varC); // Exibe pergunta;
        }
            scanf("%f", &resposta); // Entrada de dados - Resposta;

    if(delta == resposta){

        printf("\t\t\t  Correto!!!\n\n"); // Saída de dados - Mostra acerto;

        printf("\t\t\t  Voltar [B] - Continuar [C] ");
        scanf("%s", &voltar);

            if(voltar == 'B' || voltar == 'b'){
                jogom();
            }else{
                fase1(); // Repete fase 1;
            }

    }else{

        printf("\t\t\t  Errou!! \n\n"); // Saída de dados - Mostra erro;
        printf("\t\t\t  A resposta correta é: %.0f \n", delta); // Mostrando o resultado correto;

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
