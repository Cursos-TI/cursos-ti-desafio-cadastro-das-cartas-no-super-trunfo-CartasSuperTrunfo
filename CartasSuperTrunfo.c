#include <stdio.h>

int main() {
    // --- Carta 1 ---
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Carta 2 ---
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Exibição da Carta 1 ---
    printf("\n=== Carta 1 ===\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // --- Exibição da Carta 2 ---
    printf("\n=== Carta 2 ===\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
