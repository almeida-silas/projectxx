
void fase2 (void){ // Fase 2 do jogom;

    // Gerando números randomicos;
    srand(time(NULL));
    int num = rand() % 100;
    int num2 = rand() % 100;
    int numalea = rand() % 2;

    // Declaração de variáveis;
    int resposta = 0, resposta_c = 0;
    char voltar; char layout(int fase);

    system("cls");

    // Mostrando layout|Enfeite;
    layout(2);

    if(numalea == 1){ // Escolhendo sinal multiplicar e div;
        printf("\t\t\t  Divisão e Multiplicação!!\n"); // Exibe pontuação;
        printf("\t\t\t  %i x %i = ", num, num2);
        resposta_c = num * num2;
    }else{
        printf("\t\t\t  Divisão e Multiplicação!!\n"); // Exibe pontuação;
        printf("\t\t\t  Resposta com números INTEIROS!!\n");
        printf("\t\t\t  %i / %i = ", num, num2);
        resposta_c = num / num2;
    }
        // Entrada de dados - pedindo resposta;
        scanf("%i", &resposta);

    if(resposta == resposta_c){ // Comparação de respostas;

        printf("\t\t\t  Correto!!!\n\n"); // Saída de dados - Mostra acerto;

        // Entrada de dados - Escolha para voltar;
        printf("\t\t\t  Voltar [B] - Continuar [C] ");
        scanf("%s", &voltar);

            if(voltar == 'B' || voltar == 'b'){
                jogom();
            }else{
                printf("\n\t\t\t\t ");
                // system("pause"); 
                fase2(); // Repete fase 1;
            }

    }else{

        printf("\t\t\t  Errou!!\n\n"); // Saída de dados - Mostra erro;
        printf("\t\t\t  A resposta correta é: %i \n", resposta_c); // Mostrando o resultado correto;
  
        printf("\t\t\t  Voltar [B] - Continuar [C] ");
        scanf("%s", &voltar);

            if(voltar == 'B' || voltar == 'b'){
                jogom();
            }else{
                fase2(); // Repete fase;
            }
    }
}

