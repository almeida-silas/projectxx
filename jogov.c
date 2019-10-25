#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
	// Variáveis Globais;
	void preencher();
	char verifica(); char voltar;
	char ganhador = 'c'; // C = Continuar;
	int jogador = 0;
	char preen[9];
	void menu_jogos(void);
			
void start(void){
	
	// Declarão das variáveis;
	int i, j, numero;
	
	// Montanto layout do jogo;
	for(i=0; i < 9; i++) {
		preen[i] = i+'1';
	}

	while(ganhador == 'c') {
		
//		system("cls");
		
		preencher(); // Montanto layout do jogo;
		
		// Entrada de dados - Pede onde vai ser escrito a jogada;
		if(jogador == 0){ // Jogador 1;
			printf("\t\t\t  Insira um número para X |_ "); 
		}else{ // Jogador 2;
			printf("\t\t\t  Insira um número para O |_ ");
		}
			scanf("%i", &numero); // Entrada de dados - Pede o local a ser preenchido;
		
		// Verificação do local;
		if(preen[numero-1] == 'x' || preen[numero-1] == 'O') {
			printf("\t\t\t  Local já preenchido!! \n");
			printf("\t\t\t  ");
			system("pause");
		}else {
			// Jogando no local informado;
			// numero-1 pois loop começa em 0;
			if(jogador == 0) {
				preen[numero-1] = 'x'; 
				jogador++; // Passando a vez;
			} else {
				preen[numero-1] = 'O';
				jogador--; // Passando a vez;
			}
			// Número fora do intervalo;
			if(numero < 1 || numero > 9){ // Limitando peças;
				printf("\t\t\t  Opção inválida!!\n");
				printf("\t\t\t  ");
				system("pause");
			}
		}
		ganhador = verifica(); // Verificando se há ganhador;
	}
	
//	system("cls");
	preencher(); // Preencher para mostrar ganhador;
	
	if(verifica() != 'v'){ // Diferente de empate;
	
		printf("\t\t\t  O vencedor foi: %c", verifica()); // Informa o vencedor;
	}else{
		printf("\t\t\t  Velha"); // Quando dar empate;
	}	

	printf("   Voltar [B] - [C] Continuar "); // Op��es para voltar ou continuar;
    scanf("%s", &voltar);

        if(voltar == 'B' || voltar == 'b'){
            ganhador = 'c';
			menu_jogos(); // Volta ao menu dos jogos;
        }else{
        	ganhador = 'c';
        	start(); // Reinicia o jogo;	
		}
}

void preencher(){
	
	int i, j; // Variáveis para loop;
	
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t=                   JOGO DA VELHA                =\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                                =\n"); // Mostrando op��es;
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                                =\n");
	
	for(i=0; i < 3; i++){ // Montando layout;
		printf("\t\t\t=\t      ------------------------\t         =\n");
		printf("\t\t\t=\t    ");
		for(j=0; j < 3; j++){
			printf("   |   %c", preen[j+i*3]); // Motra espaços e X ou O;
		}
		printf("  |\t         =\n");
		printf("\t\t\t=\t      ------------------------\t         =\n");
	}
		printf("\t\t\t*================================================*\t\n");	
}

char verifica(){
		
	// Sequencias de vitórias 
	int seq[][3] = {{0, 1, 2},{3, 4, 5},{6, 7, 8},{0, 3, 6},{1, 4, 7},{2,5,8},{0, 4, 8},{2, 4, 6}};
	
	int i; // Var para loop;
	for(i = 0; i < 8; i++){ // Loop para verificar se há ganhador;
	
		// verificão dos espacos - Verificando igualdades nos espaços possiveis;
		if(preen[seq[i][0]] == preen[seq[i][1]] && preen[seq[i][0]] == preen[seq[i][2]]) return preen[seq[i][0]];
	}
	
	int cont = 0; 
	for(i = 0; i < 9; i++){
		if(preen[i] == 'x' || preen[i] == 'O'){ // Verificando se o jogo acabou;
			cont++; // +1 para cada jogada;
		}
		
	}if(cont == 9){ // Se jogadas 9 e não há ganhador;
		return 'v'; // Retorna v == VELHA;
	}
	return 'c';
}
