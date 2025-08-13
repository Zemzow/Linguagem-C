#include <stdio.h>

#define LINHAS 6 //Define a quantidade de linhas da matriz do labirinto
#define COLUNAS 10 //Define a quantidade de colunas da matriz do labirinto

int main() {
    // Declaração das variáveis
    char labirinto[LINHAS][COLUNAS] = {
        {'--','--','--','--','--','--','--','--','--','--'},
        {'|','P',' ',' ',' ','#',' ',' ',' ','|'},
        {'|',' ','#','#',' ',' ',' ','#',' ','|'},
        {'|',' ',' ',' ',' ','#','#',' ',' ','|'},
        {'|','#','#','#',' ',' ',' ','#','S','|'},
        {'--','--','--','--','--','--','--','--','--','--'}
    };

    int x = 1, y = 1; // posição inicial do jogador
    int novoX, novoY; //nova posição após comando
    char comando; //comandos para movimentação
    int i, j; // variáveis para os loops

    while (1) {
        // Imprime o labirinto
        for (i = 0; i < LINHAS; i++) {
            for (j = 0; j < COLUNAS; j++) {
                printf("%c", labirinto[i][j]);
            }
            printf("\n");
        }

        // Comando do jogador
        printf("\nUse W A S D para mover (ou Q para sair): ");
        scanf(" %c", &comando);

        // Calcula nova posição
        novoX = x;
        novoY = y;

		//
        if (comando == 'w') {
            novoX--;
        } else if (comando == 's') {
            novoX++;
        } else if (comando == 'a') {
            novoY--;
        } else if (comando == 'd') {
            novoY++;
        } else if (comando == 'q') {
            break;
        }

        //Avisa que o caminho está bloqueado
        if(labirinto[novoX][novoY] == '#')  {
        	printf("\nHa uma pedra bloqueando o caminho! Escolha outra rota\n\n");
    	} else if(labirinto[novoX][novoY] == '-' || labirinto[novoX][novoY] == '|') {
    		printf("\nVoce nao tem uma ferramenta para quebrar a parede\n\n");
		}
    	
    	 // Verifica se pode andar, e impede a passagem caso haja algo impedindo
        if (labirinto[novoX][novoY] != '#' && labirinto[novoX][novoY] != '|' && labirinto[novoX][novoY] != '-') {
            // Se chegou na saída
            if (labirinto[novoX][novoY] == 'S') {
                printf("\nParabens! Voce venceu o jogo!\n");
                break;
            }

            // Atualiza posição do jogador
            labirinto[x][y] = ' ';
            x = novoX;
            y = novoY;
            labirinto[x][y] = 'P';
        }
    }

return 0;
}
