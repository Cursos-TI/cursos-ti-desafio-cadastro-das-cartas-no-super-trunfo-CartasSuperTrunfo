#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Variáveis da Carta 1
    char estado1;
    char codigo1[3];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // // Variáveis da Carta 2
    char estado2;
    char codigo2[3];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    /* 
    Cadastro das Cartas:
    Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    */

    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: 01-99): ");
    scanf(" %s", &codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    printf("\n");

    // Cadastro da Carta 2
    printf("Cadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo (ex: 00-99): ");
    scanf(" %s", &codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    printf("\n");

    /*
    Exibição dos Dados das Cartas:
    Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    Exiba os valores inseridos para cada atributo da cidade, um por linha.
    */

    //Exibição da Carta 1 
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);

    printf("\n");

    //Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);

    return 0;
}
