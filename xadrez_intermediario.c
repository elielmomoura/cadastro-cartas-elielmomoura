#include <stdio.h>

int main() {

    // DECLARAÇÃO DAS VARIÁVEIS

    int i;

    // Quantidade de casas das peças
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Variáveis do Cavalo
    int opcao;
    int contador;

    // TORRE Estrutura FOR Move 5 casas para a direita

    printf("=== Movimento da Torre ===\n");

    for (i = 1; i <= casasTorre; i++) {

        printf("Direita\n");
    }

    // BISPO Estrutura WHILE Move 5 casas na diagonal

    printf("\n=== Movimento do Bispo ===\n");

    i = 1;

    while (i <= casasBispo) {

        printf("Cima Direita\n");
        i++;
    }

    // RAINHA Estrutura DO-WHILEMove 8 casas para a esquerda

    printf("\n=== Movimento da Rainha ===\n");

    i = 1;

    do {

        printf("Esquerda\n");
        i++;

    } while (i <= casasRainha);

    // CAVALO ESTRUTURA FOR + WHILE Loops aninhados

    printf("\n=== Movimento do Cavalo ===\n\n");

    printf("Escolha um movimento:\n");
    printf("1 - 2 casas para baixo, 1 para esquerda\n");
    printf("2 - 2 casas para baixo, 1 para direita\n");
    printf("3 - 2 casas para cima, 1 para esquerda\n");
    printf("4 - 2 casas para cima, 1 para direita\n");
    printf("5 - 1 casa para cima, 2 para esquerda\n");
    printf("6 - 1 casa para cima, 2 para direita\n");
    printf("7 - 1 casa para baixo, 2 para esquerda\n");
    printf("8 - 1 casa para baixo, 2 para direita\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    printf("\nMovimento escolhido:\n\n");

    switch(opcao) {

        // 1 - 2 Baixo + 1 Esquerda
        case 1:

            contador = 0;

            for(i = 1; i <= 2; i++) {

                printf("Baixo\n");

                if(i == 2) {

                    while(contador < 1) {

                        printf("Esquerda\n");
                        contador++;
                    }
                }
            }

            break;

        // 2 - 2 Baixo + 1 Direita
        case 2:

            contador = 0;

            for(i = 1; i <= 2; i++) {

                printf("Baixo\n");

                if(i == 2) {

                    while(contador < 1) {

                        printf("Direita\n");
                        contador++;
                    }
                }
            }

            break;

        // 3 - 2 Cima + 1 Esquerda
        case 3:

            contador = 0;

            for(i = 1; i <= 2; i++) {

                printf("Cima\n");

                if(i == 2) {

                    while(contador < 1) {

                        printf("Esquerda\n");
                        contador++;
                    }
                }
            }

            break;

        // 4 - 2 Cima + 1 Direita
        case 4:

            contador = 0;

            for(i = 1; i <= 2; i++) {

                printf("Cima\n");

                if(i == 2) {

                    while(contador < 1) {

                        printf("Direita\n");
                        contador++;
                    }
                }
            }

            break;

        // 5 - 1 Cima + 2 Esquerda
        case 5:

            contador = 0;

            for(i = 1; i <= 1; i++) {

                printf("Cima\n");

                while(contador < 2) {

                    printf("Esquerda\n");
                    contador++;
                }
            }

            break;

        // 6 - 1 Cima + 2 Direita
        case 6:

            contador = 0;

            for(i = 1; i <= 1; i++) {

                printf("Cima\n");

                while(contador < 2) {

                    printf("Direita\n");
                    contador++;
                }
            }

            break;

        // 7 - 1 Baixo + 2 Esquerda
        case 7:

            contador = 0;

            for(i = 1; i <= 1; i++) {

                printf("Baixo\n");

                while(contador < 2) {

                    printf("Esquerda\n");
                    contador++;
                }
            }

            break;

        // 8 - 1 Baixo + 2 Direita
        case 8:

            contador = 0;

            for(i = 1; i <= 1; i++) {

                printf("Baixo\n");

                while(contador < 2) {

                    printf("Direita\n");
                    contador++;
                }
            }

            break;

        // OPÇÃO INVÁLIDA
        default:

            printf("Opcao invalida!\n");
    }

    return 0;
}