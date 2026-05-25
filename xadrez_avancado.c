#include <stdio.h>

// ======================================================
// FUNÇÃO RECURSIVA DA TORRE
// Move a Torre para a Direita
// ======================================================
void moverTorre(int casas) {

    // Caso base da recursão
    if (casas <= 0) {
        return;
    }

    // Exibe o movimento atual
    printf("Direita\n");

    // Chamada recursiva
    moverTorre(casas - 1);
}

// ======================================================
// FUNÇÃO RECURSIVA DA RAINHA
// Move a Rainha para a Esquerda
// ======================================================
void moverRainha(int casas) {

    // Caso base
    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");

    // Chamada recursiva
    moverRainha(casas - 1);
}

// ======================================================
// FUNÇÃO RECURSIVA DO BISPO
//
// Requisitos atendidos:
// - Recursividade
// - Loops aninhados
//
// Loop externo = movimento vertical
// Loop interno = movimento horizontal
//
// Resultado final:
// Cima Direita
// ======================================================
void moverBispo(int casas) {

    // Caso base da recursão
    if (casas <= 0) {
        return;
    }

    int vertical;
    int horizontal;

    // Loop externo -> Vertical
    for (vertical = 1; vertical <= 1; vertical++) {

        printf("Cima\n");

        // Loop interno -> Horizontal
        for (horizontal = 1; horizontal <= 1; horizontal++) {

            printf("Direita\n");
        }
    }

    // Chamada recursiva
    moverBispo(casas - 1);
}

// ======================================================
// FUNÇÃO PRINCIPAL
// ======================================================
int main() {

    // ==================================================
    // DECLARAÇÃO DAS VARIÁVEIS
    // ==================================================

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i;
    int j;

    // ==================================================
    // MOVIMENTO DA TORRE
    // ==================================================

    printf("=== Movimento da Torre ===\n\n");

    moverTorre(casasTorre);

    // ==================================================
    // MOVIMENTO DO BISPO
    // ==================================================

    printf("\n=== Movimento do Bispo ===\n\n");

    moverBispo(casasBispo);

    // ==================================================
    // MOVIMENTO DA RAINHA
    // ==================================================

    printf("\n=== Movimento da Rainha ===\n\n");

    moverRainha(casasRainha);

    // ==================================================
    // MOVIMENTO DO CAVALO
    //
    // Movimento em "L":
    // 2 casas para Cima
    // 1 casa para Direita
    //
    // Requisitos atendidos:
    // - Loops aninhados
    // - Múltiplas variáveis
    // - Uso de continue
    // - Uso de break
    // ==================================================

    printf("\n=== Movimento do Cavalo ===\n\n");

    // Loop externo controla movimento vertical
    for (i = 1; i <= 2; i++) {

        // Exibe movimento vertical
        printf("Cima\n");

        // Loop interno controla movimento horizontal
        for (j = 1; j <= 1; j++) {

            // Exemplo de uso do continue
            if (i < 2) {
                continue;
            }

            // Movimento horizontal
            printf("Direita\n");

            // Exemplo de uso do break
            break;
        }
    }

    // ==================================================
    // FINALIZAÇÃO
    // ==================================================

    printf("\nMovimentos finalizados!\n");

    return 0;
}