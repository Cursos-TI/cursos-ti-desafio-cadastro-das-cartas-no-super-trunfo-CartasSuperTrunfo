#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    char estado1, estado2, cidade1[50], cidade2[50];
    char codigo1[50], codigo2[50];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2;
    float PIBporCapita1, PIBporCapita2;

    printf ("Desafio Super Trunfo\n");

    printf ("\nCadastro da Carta 01\n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado1);

    printf("digite a letra do estado e um numero de 01 a 03:");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populção da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área do territorio: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Diigite a quantidade de Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf ("\nCadastro da Carta 02\n");

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado e um numero de 01 a 03: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populção da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área do territorio: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos dos novos itens:
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    PIBporCapita1 = pib1 / populacao1;
    PIBporCapita2 = pib2 / populacao2;

    // Exibição dos Dados das Cartas:
    printf("\nINFORMAÇÔES DA CARTA 01\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n", PIBporCapita1);

    printf("\nINFORMAÇÔES DA CARTA 02\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f\n", PIBporCapita2);

    return 0;
}
