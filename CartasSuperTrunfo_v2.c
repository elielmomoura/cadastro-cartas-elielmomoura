#include <stdio.h>

int main() {

    /* =========================
       DECLARAÇÃO DAS VARIÁVEIS
       ========================= */

    // Carta 1
    char estado1[50];
    char codigo1[10];
    char cidade1[50];

    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2[50];
    char codigo2[10];
    char cidade2[50];

    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;

    // Inicializada corretamente
    int opcao = -1;

    /* =========================
       CADASTRO DA CARTA 1
       ========================= */

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%49s", estado1);

    printf("Codigo da carta: ");
    scanf("%9s", codigo1);

    printf("Nome da cidade: ");
    scanf("%49s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    /* =========================
       CADASTRO DA CARTA 2
       ========================= */

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf("%49s", estado2);

    printf("Codigo da carta: ");
    scanf("%9s", codigo2);

    printf("Nome da cidade: ");
    scanf("%49s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    /* =========================
       CÁLCULOS
       ========================= */

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    /* =========================
       MENU EM LOOP
       ========================= */

    while (opcao != 0) {

        printf("\n=========================\n");
        printf("      SUPER TRUNFO\n");
        printf("=========================\n");

        printf("Escolha um atributo:\n\n");

        printf("1 - Populacao\n");
        printf("2 - Area\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turisticos\n");
        printf("5 - Densidade Demografica\n");
        printf("0 - Sair\n\n");

        printf("Opcao: ");
        scanf("%d", &opcao);

        printf("\n=== RESULTADO ===\n");

        switch(opcao) {

            case 1:

                printf("Atributo: Populacao\n\n");

                printf("%s: %d habitantes\n",
                       cidade1, populacao1);

                printf("%s: %d habitantes\n\n",
                       cidade2, populacao2);

                if (populacao1 > populacao2) {

                    printf("Vencedor: %s\n", cidade1);

                } else if (populacao2 > populacao1) {

                    printf("Vencedor: %s\n", cidade2);

                } else {

                    printf("Empate!\n");
                }

                break;

            case 2:

                printf("Atributo: Area\n\n");

                printf("%s: %.2f km²\n",
                       cidade1, area1);

                printf("%s: %.2f km²\n\n",
                       cidade2, area2);

                if (area1 > area2) {

                    printf("Vencedor: %s\n", cidade1);

                } else if (area2 > area1) {

                    printf("Vencedor: %s\n", cidade2);

                } else {

                    printf("Empate!\n");
                }

                break;

            case 3:

                printf("Atributo: PIB\n\n");

                printf("%s: %.2f\n",
                       cidade1, pib1);

                printf("%s: %.2f\n\n",
                       cidade2, pib2);

                if (pib1 > pib2) {

                    printf("Vencedor: %s\n", cidade1);

                } else if (pib2 > pib1) {

                    printf("Vencedor: %s\n", cidade2);

                } else {

                    printf("Empate!\n");
                }

                break;

            case 4:

                printf("Atributo: Pontos Turisticos\n\n");

                printf("%s: %d pontos\n",
                       cidade1, pontosTuristicos1);

                printf("%s: %d pontos\n\n",
                       cidade2, pontosTuristicos2);

                if (pontosTuristicos1 > pontosTuristicos2) {

                    printf("Vencedor: %s\n", cidade1);

                } else if (pontosTuristicos2 > pontosTuristicos1) {

                    printf("Vencedor: %s\n", cidade2);

                } else {

                    printf("Empate!\n");
                }

                break;

            case 5:

                printf("Atributo: Densidade Demografica\n\n");

                printf("%s: %.2f hab/km²\n",
                       cidade1, densidade1);

                printf("%s: %.2f hab/km²\n\n",
                       cidade2, densidade2);

                // Regra invertida
                if (densidade1 < densidade2) {

                    printf("Vencedor: %s\n", cidade1);

                } else if (densidade2 < densidade1) {

                    printf("Vencedor: %s\n", cidade2);

                } else {

                    printf("Empate!\n");
                }

                break;

            case 0:

                printf("Saindo do jogo...\n");
                break;

            default:

                printf("Opcao invalida!\n");
        }
    }

    return 0;
}