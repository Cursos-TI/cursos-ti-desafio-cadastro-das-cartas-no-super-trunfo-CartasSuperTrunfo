#include <stdio.h>

int main() {

    // Variáveis para armazenar dados da Carta1
    char estado1 = 'A';
    char codigo1[] = "A01";
    char nome_da_cidade1[20] = "Ceara";
    int populacao1 = 8794957;
    float area1 = 148.886; // em km²
    float pib1 = 194.885;  // em bilhões de reais
    int numero_de_pontos_turisticos1 = 40;

    // Variáveis para armazenar dados da Carta2
    char estado2 = 'B';
    char codigo2[] = "A02";
    char nome_da_cidade2[20] = "Maranhao";
    int populacao2 = 6775152;
    float area2 = 31.983; // em km²
    float pib2 = 124.981; // em bilhões de reais
    int numero_de_pontos_turisticos2 = 10;

    // Cálculo da densidade populacional
    float densidade_populacional1 = populacao1 / area1;
    float densidade_populacional2 = populacao2 / area2;

    // Cálculo do PIB per capita
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    float super_poder1 = populacao1 + area1 + pib1 + numero_de_pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    float super_poder2 = populacao2 + area2 + pib2 + numero_de_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    // Exibir dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.3f km²\n", area1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibir dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.3f km²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\n--- Resultados das Comparações ---\n");

    // População (maior vence)
    int resultado_populacao = populacao1 > populacao2 ? 1 : 0;
    printf("População: %d - Venceu: %s\n", resultado_populacao, resultado_populacao ? "Carta 1" : "Carta 2");

    // Área (maior vence)
    int resultado_area = area1 > area2 ? 1 : 0;
    printf("Área: %d - Venceu: %s\n", resultado_area, resultado_area ? "Carta 1" : "Carta 2");

    // PIB (maior vence)
    int resultado_pib = pib1 > pib2 ? 1 : 0;
    printf("PIB: %d - Venceu: %s\n", resultado_pib, resultado_pib ? "Carta 1" : "Carta 2");

    // Pontos Turísticos (maior vence)
    int resultado_pontos = numero_de_pontos_turisticos1 > numero_de_pontos_turisticos2 ? 1 : 0;
    printf("Pontos Turísticos: %d - Venceu: %s\n", resultado_pontos, resultado_pontos ? "Carta 1" : "Carta 2");

    // Densidade populacional (menor vence)
    int resultado_densidade = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
    printf("Densidade Populacional: %d - Venceu: %s\n", resultado_densidade, resultado_densidade ? "Carta 1" : "Carta 2");

    // PIB per capita (maior vence)
    int resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
    printf("PIB per Capita: %d - Venceu: %s\n", resultado_pib_per_capita, resultado_pib_per_capita ? "Carta 1" : "Carta 2");

    // Super Poder (maior vence)
    int resultado_super_poder = super_poder1 > super_poder2 ? 1 : 0;
    printf("Super Poder: %d - Venceu: %s\n", resultado_super_poder, resultado_super_poder ? "Carta 1" : "Carta 2");

    return 0;
}
