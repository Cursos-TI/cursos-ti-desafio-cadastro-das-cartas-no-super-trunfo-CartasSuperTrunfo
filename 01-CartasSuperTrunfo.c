#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // --- 1. Definição de Variáveis ---
    // Crie "caixas" para guardar os dados das duas cartas de cidades.

    // Variáveis da Carta 1
    char codigo1[10];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis da Carta 2
    char codigo2[10];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // --- 2. Cadastro das Cartas ---
    // Peça ao usuário para digitar as informações de cada cidade e armazene nas variáveis.

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a populacao (em milhoes): ");
    scanf("%d", &populacao1);
    printf("Digite a area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes de dolares): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a populacao (em milhoes): ");
    scanf("%d", &populacao2);
    printf("Digite a area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes de dolares): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // --- 3. Exibição dos Dados das Cartas ---
    // Mostre as informações que foram cadastradas, de forma organizada.

    printf("\n--- Dados das Cartas Cadastradas ---\n");
    printf("--- Carta 1 ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d milhoes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    
    printf("\n--- Carta 2 ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d milhoes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    
    return 0;
}
