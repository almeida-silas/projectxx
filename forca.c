#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	// Declaração das variáveis Globais;;
	int vida = 8;
	int tamanho;
	char pala[50];
	void jogo();
	void montar();
   
void jogof(){

	// Declaração das variáveis;
	char desen[][3] = {{' ','O',' '},{'/','|','\\'},{'/',' ','\\'}}; // Montagem do boneco;
	char tabu[tamanho];
	int i, j;
	char resp; int jogadas= 0;

//	system("cls");
	montar();
	printf("\t\t\t Este jogo é para dois jogadores\n\n"); // Mensagem de informação ao usuário;
  
	// Entrada de dados = Pede a palabra ao jogador;
	printf("\t\t\t Informe uma palavra ");
	scanf("%s", pala);
   
	tamanho = strlen(pala);	// Contando letras;
	
	// Montando layout de resposta de acordo com o tamanho da palavra;
	for(i = 0 ;i < tamanho; i++){ 
		tabu[i] = '_'; // Atribuindo tag do tabu;
	}
	
	while(vida > 0){
  		
  		system("cls");
		montar(); // Mostrando layout;
  		
  		if(jogadas == tamanho){
			printf("\n\t\t\t  Parabéns, Palavra correta!!  [ %s ]\n", pala); // Fim de jogo;
			
			printf("\t\t\t  Voltar [B] - Continuar [C] "); // Opções para voltar
		    scanf(" %c", &voltar);
		
		    if(voltar == 'B' || voltar == 'b'){ // Condição para verificar opção;
		        menu_jogos();
		    }else{
		    	printf("\t\t\t ");
		    	system("pause");
		        jogof(); // Repete;
		    }
			
		}else{
			printf("\t\t\t\t\t\t   | \n");
			for(i=0;i<3;i++){ // Loop para montar boneco;
					printf("\t\t\t\t\t\t  ");
			  	for(j=0;j<3; j++){
			  		printf("%c", desen[i][j]);// Montando Boneco;
	      	  	}
	      		printf(" \n");
	   		}
	   		
	   		printf("\t\t\t\t   ");
			      
			// Montando layout de respostas; Conforme o tamanho da palavra;      
	   		for(i = 0; i < tamanho; i++){
	    		printf("%c ", tabu[i]);
	   		}
	   		printf("  Letra: ");
	   		scanf(" %c", &resp); // Entrada de dados = Pede a letra ao usuário;
	  		
	  		int infor = 0;
			for(i = 0; i < tamanho; i++){ // Compara as letras;
	   			if(resp == pala[i]){ // Verificar igualdade das letras;
	   				if(resp == pala[i] && resp == tabu[i]){ // Condição para letra já informada;
						infor = 1;  	
					}else{
						tabu[i] = resp; // Atribuição se letras forem iguais;
						jogadas++; // Contando jogadas;
					}
				}
			}
			if(infor == 1){ // Mostrar que letra já foi informada;
				printf("\n\t\t\t  Letra já informada!!\n");
				printf("\t\t\t  ");
				system("pause");
			}
			
			int dife = 0; // Var para letras diferentes;
			// 
			for(i = 0; i < tamanho; i++){ 
		
				if(resp != pala[i]){ // Verificando se há diferenças;
					dife++;
				}
				if(dife == tamanho){ // Se letra diferente de todas;
					printf("\n\t\t\t  Letra errada!! \n"); // Mostra Erro;
					--vida; // Perdendo vida;
					printf("\t\t\t  ");
					system("pause");
				}	
			}				
		}
	}
//	system("cls");
	montar();
	vida = 8; // Para resetar jogo;
	printf("\n\t\t\t  Perdeu!! :( \n\t\t\t  A palavra era [ %s ] \n", pala); // Mostra derrota;
	
	// Entrada de dados;
	printf("\t\t\t  Voltar [B] - Continuar [C] "); // Opções para voltar
    scanf("%s", &voltar);

    if(voltar == 'B' || voltar == 'b'){ // Condição para verificar opção;
        menu_jogos();
    }else{
    	printf("\t\t\t ");
    	system("pause");
        jogof(); // Repete;
    }
}

void montar(){
	
	// Saída de dados - Layout do jogo;
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t=                  JOGO DA FORCA                 =\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t==================================================\n");
    printf("\t\t\t=                                    chances %i  =\n", vida); // Mostrando opções;
	printf("\t\t\t==================================================\n");
		   		
}

