#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para armazenar informações das cartas
    char estado1, estado2; // Letras de A a H
    char carta1[4], carta2[4]; // Números de 01 a 04
    char cidade1[50], cidade2[50]; // Nomes das cidades
    unsigned long int populacao1, populacao2; // População das cidades
    float area1, area2; // Área em km²
    float pib1, pib2; // PIB das cidades
    unsigned int pontoTuristicos1, pontoTuristicos2; // Pontos turísticos
    float densidadePopulacional1, densidadePopulacional2; // Densidade populacional
    float pibPerCapita1, pibPerCapita2; // PIB per capita
    int superPoder1, superPoder2;


    // Cadastro da primeira carta
    printf("Bem vindo ao Jogo Super trunfo\n");

    printf("\n");

    printf("Registre a carta 1\n");

    printf("\n");

    printf("Escolha uma Letra de (A a H): ");
    scanf("%c", &estado1); // Lê a letra do estado

    printf("Escolha um número de (01 a 04): ");
    scanf("%3s", carta1); // Lê o número da carta

    getchar(); // Remove o Enter que ficou no buffer

    printf("Digite uma cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin); // Lê o nome da cidade
    cidade1[strcspn(cidade1, "\n")] = 0; // Remove a quebra de linha

    printf("População da cidade: ");
    scanf("%ld", &populacao1); // Lê a população

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1); // Lê a área

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1); // Lê o PIB

    printf("Pontos turísticos da cidade: ");
    scanf("%d", &pontoTuristicos1); // Lê a quantidade de pontos turísticos


    printf("\n");

    // Cadastro da segunda carta
    printf("Registre a carta 2\n");

    printf("\n");

    printf("Escolha uma Letra de (A a H): ");
    scanf(" %c", &estado2); // Lê a letra do estado

    printf("Escolha um número de (01 a 04): ");
    scanf("%3s", carta2); // Lê o número da carta

    getchar(); // Remove o Enter que ficou no buffer

    printf("Digite uma cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin); // Lê o nome da cidade
    cidade2[strcspn(cidade2, "\n")] = 0; // Remove a quebra de linha

    printf("População da cidade: ");
    scanf("%ld", &populacao2); // Lê a população

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2); // Lê a área

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2); // Lê o PIB

    printf("Pontos turísticos da cidade: ");
    scanf("%d", &pontoTuristicos2); // Lê a quantidade de pontos turísticos


    printf("\n");

    //Calculos das cartas

    densidadePopulacional1 = (float)populacao1 / area1; // Calcula a densidade populacional
    pibPerCapita1 = pib1 / populacao1; // Calcula o PIB per capita
    superPoder1 = populacao1 + area1 + pontoTuristicos1 + pibPerCapita1 + densidadePopulacional1;

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pontoTuristicos2 + pibPerCapita2 + densidadePopulacional2;

    // Exibe os resultados da primeira carta
    printf("Carta 1:\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristicos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\n");

    // Exibe os resultados da segunda carta
    printf("Carta 2:\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    printf("\n");

    //Resultado

    printf("População: Carta 1 ganhou: (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 ganhou: (%d)\n", area1 > area2);
    printf("PIB: Carta 1 ganhou: (%d)\n", pib1 > pib2);
    printf("Pontos turisticos: Carta 1 ganhou (%d)\n", pontoTuristicos1 > pontoTuristicos2);
    printf("Densidade: Carta 1 ganhou (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per capita: Carta 1 ganhou (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("superPoder: Carta 1 venceu: (%d)\n", superPoder1 > superPoder2);


    return 0;

}
