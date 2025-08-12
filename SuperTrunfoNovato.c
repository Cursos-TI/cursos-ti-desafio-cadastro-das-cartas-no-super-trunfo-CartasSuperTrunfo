#include <stdio.h>
#include <string.h> // Para strcspn

int main() {
    // --- Declaração das variáveis para a Carta 1 ---
    char estado1;
    char codigo1[5];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1_bilhoes;
    int pontos_turisticos1;
    float densidade1;
    double pib_per_capita1;
    double pib1_absoluto;

    // --- Declaração das variáveis para a Carta 2 ---
    char estado2;
    char codigo2[5];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2_bilhoes;
    int pontos_turisticos2;
    float densidade2;
    double pib_per_capita2;
    double pib2_absoluto;

    // --- Entrada de dados para a Carta 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%4s", codigo1);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome1, sizeof(nome1), stdin);
    nome1[strcspn(nome1, "\n")] = '\0';
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1_bilhoes);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    // --- Cálculos para Carta 1 ---
    if (area1 > 0) {
        densidade1 = (float)populacao1 / area1;
    } else {
        densidade1 = 0;
        printf("Aviso: Área da Carta 1 é zero ou inválida. Densidade definida como 0.\n");
    }
    pib1_absoluto = (double)pib1_bilhoes * 1000000000.0;
    if (populacao1 > 0) {
        pib_per_capita1 = pib1_absoluto / populacao1;
    } else {
        pib_per_capita1 = 0;
        printf("Aviso: População da Carta 1 é zero ou inválida. PIB per capita definido como 0.\n");
    }
    getchar();

    // --- Entrada de dados para a Carta 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite a letra do estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B03): ");
    scanf("%4s", codigo2);
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2_bilhoes);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    // --- Cálculos para Carta 2 ---
    if (area2 > 0) {
        densidade2 = (float)populacao2 / area2;
    } else {
        densidade2 = 0;
        printf("Aviso: Área da Carta 2 é zero ou inválida. Densidade definida como 0.\n");
    }
    pib2_absoluto = (double)pib2_bilhoes * 1000000000.0;
    if (populacao2 > 0) {
        pib_per_capita2 = pib2_absoluto / populacao2;
    } else {
        pib_per_capita2 = 0;
        printf("Aviso: População da Carta 2 é zero ou inválida. PIB per capita definido como 0.\n");
    }

    // --- Exibição dos dados completos das Cartas ---
    printf("\n--- Dados Completos das Cartas ---\n");
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1_bilhoes);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2_bilhoes);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);

    // --- Comparação das Cartas (Versão Humanizada) ---
    printf("\n--- Hora do Duelo! ---\n");


    // Exemplo: Comparando por População
    printf("\nVamos comparar pela População!\n");
    printf("Carta 1 - %s: %d habitantes\n", nome1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", nome2, populacao2);
    printf("Analisando os números...\n");

    if (populacao1 > populacao2) {
        printf("E o resultado é... Vitória da Carta 1 (%s)! Com mais habitantes, vence com tranquilidade !\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("E o resultado é... Vitória da Carta 2 (%s)! Sua população maior garantiu a vitória!\n", nome2);
    } else {
        printf("Inacreditável! Temos um empate! Igual a Copa União de 87.\n");
    }

    return 0;
}