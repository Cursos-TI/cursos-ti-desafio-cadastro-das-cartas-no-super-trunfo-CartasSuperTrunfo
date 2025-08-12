#include <stdio.h>


int main() {
    // Declaração das variáveis
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomeCidade1[50], nomeCidade2[50];
    long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    // Entrada de dados para a primeira carta
    printf("Digite o estado da primeira cidade (ex: A-H):A  ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: A01");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:Rio de Janeiro ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população:6775561 ");
    scanf("%ld", &populacao1);
    printf("Digite a área (km²):1200.27 ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais):5623478999213 ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos:15 ");
    scanf("%d", &pontosTuristicos1);
    
    // Entrada de dados para a segunda carta
    printf("\nDigite o estado da segunda cidade (ex: A-H):B ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta:B02 ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:São Paulo ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população:12300000 ");
    scanf("%ld", &populacao2);
    printf("Digite a área (km²):1521.11  ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais):3000000000000 ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos:10  ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    float densidadePopulacional1 = populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB convertido de bilhões para reais
    
    float densidadePopulacional2 = populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB convertido de bilhões para reais

    // Exibição dos resultados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional:5.645,031 %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita:829.965,076 %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional:8.086,2 %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita:243.902,439 %.2f reais\n", pibPerCapita2);

    return 0;
}
