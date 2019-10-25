#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	// Declara��o das vari�veis Globais;;
	int vida = 8;
	int tamanho;
	char pala[50];
	void jogo();
	void montar();
   
void jogof(){

	// Declara��o das vari�veis;
	char desen[][3] = {{' ','O',' '},{'/','|','\\'},{'/',' ','\\'}}; // Montagem do boneco;
	char tabu[tamanho];
	int i, j;
	char resp; int jogadas= 0;

//	system("cls");
	montar();
	printf("\t\t\t Este jogo � para dois jogadores\n\n"); // Mensagem de informa��o ao usu�rio;
  
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
			printf("\n\t\t\t  Parab�ns, Palavra correta!!  [ %s ]\n", pala); // Fim de jogo;
			
			printf("\t\t\t  Voltar [B] - Continuar [C] "); // Op��es para voltar
		    scanf(" %c", &voltar);
		
		    if(voltar == 'B' || voltar == 'b'){ // Condi��o para verificar op��o;
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
	   		scanf(" %c", &resp); // Entrada de dados = Pede a letra ao usu�rio;
	  		
	  		int infor = 0;
			for(i = 0; i < tamanho; i++){ // Compara as letras;
	   			if(resp == pala[i]){ // Verificar igualdade das letras;
	   				if(resp == pala[i] && resp == tabu[i]){ // Condi��o para letra j� informada;
						infor = 1;  	
					}else{
						tabu[i] = resp; // Atribui��o se letras forem iguais;
						jogadas++; // Contando jogadas;
					}
				}
			}
			if(infor == 1){ // Mostrar que letra j� foi informada;
				printf("\n\t\t\t  Letra j� informada!!\n");
				printf("\t\t\t  ");
				system("pause");
			}
			
			int dife = 0; // Var para letras diferentes;
			// 
			for(i = 0; i < tamanho; i++){ 
		
				if(resp != pala[i]){ // Verificando se h� diferen�as;
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
	printf("\t\t\t  Voltar [B] - Continuar [C] "); // Op��es para voltar
    scanf("%s", &voltar);

    if(voltar == 'B' || voltar == 'b'){ // Condi��o para verificar op��o;
        menu_jogos();
    }else{
    	printf("\t\t\t ");
    	system("pause");
        jogof(); // Repete;
    }
}

void montar(){
	
	// Sa�da de dados - Layout do jogo;
	printf("\t\t\t==================================================\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t=                  JOGO DA FORCA                 =\n");
	printf("\t\t\t=                                                =\n");
	printf("\t\t\t==================================================\n");
    printf("\t\t\t=                                    chances %i  =\n", vida); // Mostrando op��es;
	printf("\t\t\t==================================================\n");
		   		
}

