
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 

    // Dados da cidade 1
    char nome1[] = "Manaus";
    char estado1[] = "Amazonas";
    int populacao1 = 4281209;
    float area1 = 1571000.0;
    float pib1 = 42968.0;
    int pontos1 = 10;
    float densidade1 = populacao1 / area1;

    // Dados da cidade 2
    char nome2[] = "Goiania";
    char estado2[] = "Goiás";
    int populacao2 = 7350483;
    float area2 = 340.086;
    float pib2 = 55247.45;
    int pontos2 = 8;
    float densidade2 = populacao2 / area2;

    int opcao;

    printf("===== SUPER TRUNFO - COMPARAÇÃO DE CIDADES =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s (Estado: %s) x %s (Estado: %s)\n\n", nome1, estado1, nome2, estado2);

    switch (opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedora: %s (%s) 🎉\n", nome1, estado1);
                printf(">> ESTADO CAMPEÃO: %s <<\n", estado1);
            } else if (populacao2 > populacao1) {
                printf("Vencedora: %s (%s) 🎉\n", nome2, estado2);
                printf(">> ESTADO CAMPEÃO: %s <<\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Área:\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("Vencedora: %s (%s) 🎉\n", nome1, estado1);
                printf(">> ESTADO CAMPEÃO: %s <<\n", estado1);
            } else if (area2 > area1) {
                printf("Vencedora: %s (%s) 🎉\n", nome2, estado2);
                printf(">> ESTADO CAMPEÃO: %s <<\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("PIB:\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Vencedora: %s (%s) 🎉\n", nome1, estado1);
                printf(">> ESTADO CAMPEÃO: %s <<\n", estado1);
            } else if (pib2 > pib1) {
                printf("Vencedora: %s (%s) 🎉\n", nome2, estado2);
                printf(">> ESTADO CAMPEÃO: %s <<\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Pontos turísticos:\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);
            if (pontos1 > pontos2) {
                printf("Vencedora: %s (%s) 🎉\n", nome1, estado1);
                printf(">> ESTADO CAMPEÃO: %s <<\n", estado1);
            } else if (pontos2 > pontos1) {
                printf("Vencedora: %s (%s) 🎉\n", nome2, estado2);
                printf(">> ESTADO CAMPEÃO: %s <<\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Densidade demográfica:\n");
            printf("%s: %.4f hab/km²\n", nome1, densidade1);
            printf("%s: %.4f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedora: %s (%s) 🎉\n", nome1, estado1);
                printf(">> ESTADO CAMPEÃO: %s <<\n", estado1);
            } else if (densidade2 < densidade1) {
                printf("Vencedora: %s (%s) 🎉\n", nome2, estado2);
                printf(">> ESTADO CAMPEÃO: %s <<\n", estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida. Por favor, escolha um número entre 1 e 5.\n");
            break;
    }

    return 0;
}

