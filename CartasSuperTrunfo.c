#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados da carta 1 e carta 2
    char estado1[50], estado2[50];
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Dados para a carta 1
    printf("Digite o estado (Carta 1): ");
    scanf(" %[^\n]", estado1); // Usando o " " para ignorar espaços antes da string
    printf("Digite o código da carta (ex: A01) (Carta 1): ");
    scanf("%s", codigo1);  // Lê a string (código da carta)
    printf("Nome da cidade (Carta 1): ");
    scanf(" %[^\n]", cidade1); // Usando o " " para ignorar espaços antes da string
    printf("População (Carta 1): ");
    scanf("%d", &populacao1);
    printf("Área (em km²) (Carta 1): ");
    scanf("%f", &area1);
    printf("Qual o PIB da cidade? (em bilhões de reais) (Carta 1): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos (Carta 1): ");
    scanf("%d", &pontos1);

    // Dados para a carta 2
    printf("Digite o estado (Carta 2): ");
    scanf(" %[^\n]", estado2); // Usando o " " para ignorar espaços antes da string
    printf("Digite o código da carta (ex: A01) (Carta 2): ");
    scanf("%s", codigo2);
    printf("Nome da cidade (Carta 2): ");
    scanf(" %[^\n]", cidade2); // Usando o " " para ignorar espaços antes da string
    printf("População (Carta 2): ");
    scanf("%d", &populacao2);
    printf("Área (em km²) (Carta 2): ");
    scanf("%f", &area2);
    printf("Qual o PIB da cidade? (em bilhões de reais) (Carta 2): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos (Carta 2): ");
    scanf("%d", &pontos2);

    // Exibindo os dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}
