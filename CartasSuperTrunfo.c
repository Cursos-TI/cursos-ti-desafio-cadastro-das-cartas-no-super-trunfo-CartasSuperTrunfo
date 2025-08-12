#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;
    int pontosTuristicos1, pontosTuristicos2;
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[100], nomeCidade2[100];

    // Leitura dos dados da Carta 1
    printf("Dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf("%2s", estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%4s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nDados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf("%2s", estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%4s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade e PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000.0f) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000.0f) / populacao2;

    // Cálculo do Super Poder
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);

    // Comparações com mensagens ajustadas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2, densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}
