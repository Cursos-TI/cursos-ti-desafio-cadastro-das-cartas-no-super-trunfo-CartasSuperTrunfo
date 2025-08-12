#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    // === Declaração de variáveis da Carta 1 e Carta 2 ===
    char estado1, estado2;              // Estado representado por uma letra de A a H
    char codigo1[4], codigo2[4];        // Código da carta no formato 'A01', com 3 caracteres + '\0'
    int numero_carta1, numero_carta2;   // Número da carta (1 a 4)
    char cidade1[50], cidade2[50];      // Nome da cidade (até 49 caracteres + '\0')
    
    unsigned long int populacao1, populacao2;  // População (grandes números)
    
    float area1, area2;                 // Área da cidade (em km²)
    float densidade1, densidade2;       // Densidade populacional (habitantes por km²)
    float pib1, pib2;                   // PIB da cidade (em bilhões de reais)
    float percapta1, percapta2;         // PIB per capita (PIB/população)
    int num_pontos1, num_pontos2;       // Número de pontos turísticos
    
    float superpoder1, superpoder2;     // Super Poder calculado com base em diversos atributos

    // ==== Cadastro da Carta 1 ====
    printf("=========  Carta 1  =========\n\n");

    // Entrada do estado da carta
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado1);  // Espaço antes de %c ignora espaços e quebras de linha

    // Entrada do número da carta
    printf("Digite o número da carta (1-4): ");
    scanf("%d", &numero_carta1);

    // Geração do código da carta (ex: A01)
    sprintf(codigo1, "%c%02d", estado1, numero_carta1);

    // Entrada do nome da cidade
    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    // Entrada da população
    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao1);  // %lu para unsigned long int

    // Entrada da área da cidade
    printf("Digite o tamanho da cidade em km²: ");
    scanf("%f", &area1);

    // Entrada do PIB da cidade
    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib1);

    // Entrada do número de pontos turísticos
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos1);

    // Cálculo da densidade populacional
    densidade1 = (float) populacao1 / area1;

    // Cálculo do PIB per capita
    percapta1 = pib1 / (float) populacao1;

    // Cálculo do Super Poder da carta 1
    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade)
    superpoder1 = (float) populacao1 + area1 + pib1 + num_pontos1 + percapta1 + (1 / densidade1);

    // ==== Cadastro da Carta 2 ====
    printf("\n\n=========  Carta 2  =========\n\n");

    // Entrada dos dados da segunda carta (mesma lógica da carta 1)
    printf("Digite o estado da carta (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o número da carta (1-4): ");
    scanf("%d", &numero_carta2);

    sprintf(codigo2, "%c%02d", estado2, numero_carta2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite o tamanho da população: ");
    scanf("%lu", &populacao2);

    printf("Digite o tamanho da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &num_pontos2);

    densidade2 = (float) populacao2 / area2;
    percapta2 = pib2 / (float) populacao2;
    superpoder2 = (float) populacao2 + area2 + pib2 + num_pontos2 + percapta2 + (1 / densidade2);

    // ==== Exibição das Cartas Cadastradas ====
    printf("\n\n=========  Cartas Cadastradas  =========\n");

    // Exibindo todas as informações da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_pontos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.10f\n", percapta1);  // precisão aumentada
    printf("Super Poder: %.2f\n", superpoder1);

    // Exibindo todas as informações da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_pontos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.10f\n", percapta2);
    printf("Super Poder: %.2f\n", superpoder2);

    // ==== Comparação das Cartas Atributo por Atributo ====
    printf("\n\n=========  Comparação de Cartas  =========\n");

    // Para cada atributo, exibe se a Carta 1 venceu (1) ou perdeu (0)
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", num_pontos1 > num_pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per capita: Carta 1 venceu (%d)\n", percapta1 > percapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}
