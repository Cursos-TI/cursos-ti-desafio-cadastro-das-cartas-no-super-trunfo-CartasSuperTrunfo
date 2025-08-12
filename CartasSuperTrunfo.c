#include <stdio.h>

int main() {

    //Desafio Novato

    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];  // Espaço para "A01" + caractere nulo '\0'
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontoTuristico1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;

    // Entrada da Carta 1
    printf("Digite o Estado da Carta 1: \n");
    scanf("%c", &estado1);

    printf("Digite o Código da Carta 1: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade1);

    printf("Digite a População da Cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontoTuristico1);

    // Entrada da Carta 2
    printf("\nDigite o Estado da Carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da Carta: \n");
    scanf(" %s", &cidade2);

    printf("Digite a População da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontoTuristico2);

    // Exibição das Cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);

    return 0;

}
