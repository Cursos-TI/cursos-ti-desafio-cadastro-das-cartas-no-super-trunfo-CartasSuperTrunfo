#include <stdio.h>

int main() {
    int pontostur1, populacao1;         // Dados CARTA 1
    char codigo1[30], cidade1[30];
    char estado1;
    float pib1, area1, densidpop1 = 0, pibpercap1 = 0;

    int pontostur2, populacao2;          // Dados CARTA 1
    char codigo2[30], cidade2[30];
    char estado2;
    float pib2, area2, densidpop2 = 0, pibpercap2 = 0;

    // Associando as informações que serão solicitadas ao usuário CARTA 1
    printf("Preencha os dados do Super Trunfo: \nCarta 1:\n");

    printf("Digite o Estado: ");
    scanf("%s", &estado1);

    printf("Digite o Código: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontostur1);

    // Associando as informações que serão solicitadas ao usuário CARTA 2
    
    printf("Preencha os dados do Super Trunfo: \nCarta 2:\n");

    printf("Digite o Estado: ");
    scanf("%s", &estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontostur2);

    // Densidade - Evitando divisão por zero
    densidpop1 = (populacao1 / area1) * (area1 != 0);
    densidpop2 = (populacao2 / area2) * (area2 != 0);

    // PIB per capita: PIB em bilhões * 1e9 / população
    pibpercap1 = ((pib1 * 1e9) / populacao1) * (populacao1 != 0);
    pibpercap2 = ((pib2 * 1e9) / populacao2) * (populacao2 != 0);

     /* Exibindo os dados coletados */
    printf("\n--- Resultado ---\n");
    printf("\nCarta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontostur1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidpop1);
    printf("PIB per Capita: R$ %.2f\n", pibpercap1);

    printf("\nCarta: 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontostur2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidpop2);
    printf("PIB per Capita: R$ %.2f\n", pibpercap2);

    return 0;
}