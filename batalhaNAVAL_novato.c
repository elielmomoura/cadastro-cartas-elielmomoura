#include <stdio.h>

int main() {

    /* =========================
       DECLARAÇÃO DAS VARIÁVEIS
       ========================= */

    // Tabuleiro 10x10
    int tabuleiro[10][10];

    // Vetores que representam os navios
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios
    int linhaHorizontal = 2;
    int colunaHorizontal = 4;

    int linhaVertical = 5;
    int colunaVertical = 7;

    int i, j;

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
       VALIDAÇÃO DO NAVIO HORIZONTAL
       ========================= */

    // Verifica se o navio horizontal cabe no tabuleiro
    if(colunaHorizontal + 3 <= 10) {

        // Posiciona o navio horizontal
        for(i = 0; i < 3; i++) {

            // Verifica se já existe navio na posição
            if(tabuleiro[linhaHorizontal][colunaHorizontal + i] == 0) {

                tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
            }
        }
    }

    /* =========================
       VALIDAÇÃO DO NAVIO VERTICAL
       ========================= */

    // Verifica se o navio vertical cabe no tabuleiro
    if(linhaVertical + 3 <= 10) {

        // Posiciona o navio vertical
        for(i = 0; i < 3; i++) {

            // Verifica se já existe navio na posição
            if(tabuleiro[linhaVertical + i][colunaVertical] == 0) {

                tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
            }
        }
    }

    /* =========================
       EXIBIÇÃO DO TABULEIRO
       ========================= */

    printf("TABULEIRO BATALHA NAVAL\n\n");

    // Exibe o tabuleiro completo
    for(i = 0; i < 10; i++) {

        for(j = 0; j < 10; j++) {

            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}