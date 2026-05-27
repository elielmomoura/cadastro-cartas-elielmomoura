#include <stdio.h>

int main() {

    /* =========================
       DECLARAÇÃO DAS VARIÁVEIS
       ========================= */

    // Matriz que representa o tabuleiro 10x10
    int tabuleiro[10][10];

    // Tamanho fixo dos navios
    int tamanhoNavio = 3;

    // Variáveis de controle
    int i, j;

    /* =========================
       COORDENADAS DOS NAVIOS
       ========================= */

    // NAVIO HORIZONTAL
    int linhaHorizontal = 4;
    int colunaHorizontal = 1;

    // NAVIO VERTICAL
    int linhaVertical = 6;
    int colunaVertical = 5;

    // NAVIO DIAGONAL PRINCIPAL (\)
    int linhaDiagonal1 = 0;
    int colunaDiagonal1 = 0;

    // NAVIO DIAGONAL SECUNDÁRIA (/)
    int linhaDiagonal2 = 2;
    int colunaDiagonal2 = 9;

    /* =========================
       INICIALIZAÇÃO DO TABULEIRO
       ========================= */

    // Preenche todo o tabuleiro com 0 (água)
    for(i = 0; i < 10; i++) {

        for(j = 0; j < 10; j++) {

            tabuleiro[i][j] = 0;
        }
    }

    /* =========================
       POSICIONAMENTO NAVIO HORIZONTAL
       ========================= */

    // Verifica se o navio cabe no tabuleiro
    if(colunaHorizontal + tamanhoNavio <= 10) {

        // Variável para validar sobreposição
        int podePosicionar = 1;

        // Verifica se existe sobreposição
        for(i = 0; i < tamanhoNavio; i++) {

            if(tabuleiro[linhaHorizontal][colunaHorizontal + i] != 0) {

                podePosicionar = 0;
            }
        }

        // Posiciona o navio
        if(podePosicionar) {

            for(i = 0; i < tamanhoNavio; i++) {

                tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
            }
        }
    }

    /* =========================
       POSICIONAMENTO NAVIO VERTICAL
       ========================= */

    // Verifica se o navio cabe no tabuleiro
    if(linhaVertical + tamanhoNavio <= 10) {

        int podePosicionar = 1;

        // Verifica sobreposição
        for(i = 0; i < tamanhoNavio; i++) {

            if(tabuleiro[linhaVertical + i][colunaVertical] != 0) {

                podePosicionar = 0;
            }
        }

        // Posiciona o navio
        if(podePosicionar) {

            for(i = 0; i < tamanhoNavio; i++) {

                tabuleiro[linhaVertical + i][colunaVertical] = 3;
            }
        }
    }

    /* =========================
       POSICIONAMENTO NAVIO DIAGONAL 1
       ========================= */

    // Diagonal principal (\)
    if(linhaDiagonal1 + tamanhoNavio <= 10 &&
       colunaDiagonal1 + tamanhoNavio <= 10) {

        int podePosicionar = 1;

        // Verifica sobreposição
        for(i = 0; i < tamanhoNavio; i++) {

            if(tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] != 0) {

                podePosicionar = 0;
            }
        }

        // Posiciona o navio
        if(podePosicionar) {

            for(i = 0; i < tamanhoNavio; i++) {

                tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = 3;
            }
        }
    }

    /* =========================
       POSICIONAMENTO NAVIO DIAGONAL 2
       ========================= */

    // Diagonal secundária (/)
    if(linhaDiagonal2 + tamanhoNavio <= 10 &&
       colunaDiagonal2 - (tamanhoNavio - 1) >= 0) {

        int podePosicionar = 1;

        // Verifica sobreposição
        for(i = 0; i < tamanhoNavio; i++) {

            if(tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] != 0) {

                podePosicionar = 0;
            }
        }

        // Posiciona o navio
        if(podePosicionar) {

            for(i = 0; i < tamanhoNavio; i++) {

                tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] = 3;
            }
        }
    }

    /* =========================
       EXIBIÇÃO DO TABULEIRO
       ========================= */

    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");

    // Imprime os números das colunas
    printf("   ");

    for(j = 0; j < 10; j++) {

        printf("%d ", j + 1);
    }

    printf("\n");

    // Imprime o tabuleiro com letras nas linhas
    for(i = 0; i < 10; i++) {

        // Letras A até J
        printf("%c  ", 'A' + i);

        for(j = 0; j < 10; j++) {

            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}