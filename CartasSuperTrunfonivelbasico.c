#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Novato: Cadastro de duas cartas (sem laços e sem condicionais)

int main() {
    // Carta 1
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o código da cidade (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados
    printf("\n===== CARTA 1 =====\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
