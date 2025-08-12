#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pibpercapta1, pibpercapta2;
    int pontos_turisticos1, pontos_turisticos2;
    float super_poder1, super_poder2;

    // Leitura dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome1);
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome2);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibpercapta1 = pib1 / populacao1;
    pibpercapta2 = pib2 / populacao2;

    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibpercapta1 + (1 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapta2 + (1 / densidade2);

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf ("PIB per Capita: %.2f reais\n", pibpercapta1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf ("PIB per Capita: %.2f reais\n", pibpercapta2);


    // Comparações
    printf("\nResultados das Comparações:\n");

    printf("População: Carta 1 venceu %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu %d\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional (menor vence): Carta 1 venceu %d\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu %d\n", pibpercapta1 > pibpercapta2);
    printf("Super Poder: Carta 1 venceu %d\n", super_poder1 > super_poder2);

    // Exibição dos Super Poderes
    printf("\nSuper Poder Carta 1: %.2f\n", super_poder1);
    printf("Super Poder Carta 2: %.2f\n", super_poder2);

    return 0;
}