
void fase1 (void){ // Fase 1 do jogom;

    // Gerando números randomicos;
    srand(time(NULL));
    int num = rand() % 100;
    int num2 = rand() % 100;
    int numalea = rand() % 2;

    // Declaração das variáveis;
    int resposta = 0, resposta_c = 0;
    char voltar; char layout(int fase);

    system("cls");

    layout(1); // Mostrando Layout|Enfeite;

    if(numalea == 1){ // Aleatorizando os sinais adição e subtração;
            printf("\t\t\t  Adição e Subtração!! \n"); // Exibe pontuação;
            printf("\t\t\t  %i + %i = ", num, num2);
            resposta_c = num + num2;
    }else{
        printf("\t\t\t  Adição e Subtração!!\n"); // Exibe pontuação;
        printf("\t\t\t  %i - %i = ", num, num2);
        resposta_c = num - num2;
    }
        scanf("%i", &resposta);

    if(resposta == resposta_c){

        printf("\t\t\t  Correto!!!\n\n"); // Saída de dados - Mostra acerto;

        printf("\t\t\t  Voltar [B] - Continuar [C] ");
        scanf("%s", &voltar);

            if(voltar == 'B' || voltar == 'b'){
                jogom();
            }else{
                printf("\n\t\t\t\t ");
                // system("pause"); 
                fase1(); // Repete fase;
            }
    }else{
    	
        printf("\t\t\t  Errou!!\n\n"); // Saída de dados - Mostra erro;
        printf("\t\t\t  A resposta correta é: %i \n", resposta_c); // Mostrando o resultado correto;

        printf("\t\t\t  Voltar [B] - Continuar [C] ");
        scanf("%s", &voltar);

            if(voltar == 'B' || voltar == 'b'){
                jogom();
            }else{
                printf("\n\t\t\t");
                // system("pause"); 
                fase1(); // Repete fase;    
            }
    }
}

