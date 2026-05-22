#include <stdio.h>

int main() {

    // DECLARAÇÃO DAS VARIÁVEIS

    int i;

    // Quantidade de casas que cada peça irá mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    //TORRE Estrutura FOR, a Torre irá mover 5 casas para a direita.

    printf("=== Movimento da Torre ===\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    //BISPO Estrutura WHILE. o Bispo irá mover 5 casas na diagonal para cima e para a direita.

    printf("\n=== Movimento do Bispo ===\n");

    i = 1;

    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // RAINHA Estrutura DO-WHILE,a Rainha irá mover 8 casas para a esquerda.

    printf("\n=== Movimento da Rainha ===\n");

    i = 1;

    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    return 0;
}