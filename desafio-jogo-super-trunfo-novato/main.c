#include <stdio.h>
#include <stdlib.h> 


int main() {
    printf("* Bem-Vido(a) ao Jogo Super Trunfo *");

    // Variáveis da CARTA 1 
    char estado1; 
    char codigo1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;  // Alterado para unsigned long int
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;
    float super_poder1;  // Nova variável para Super Poder


    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    unsigned long int populacao2; 
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;
    float super_poder2; 

    // Entrada dos dados da carta 1
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // Lê uma letra (A-H)

    printf("Código (Ex: A01): ");
    scanf("%3s", codigo1);   // Lê 3 caracteres (ex: A01)

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade1);  // Lê o nome (com espaços)

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para Carta 1
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9) / populacao1;  // Convertendo PIB para reais (bilhões -> unidades) 
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);

    // Entrada dos dados da Carta 2 
    printf("\n== Cadastro da Segunda Carta ==\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (Ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2); 

    // Cálculos para Carta 1
    densidade1 = populacao2 / area2;
    pib_per_capita1 = (pib1 * 1e9) / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibição das Cartas
    printf("\n--- Dados das Cartas ---\n");

    // Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1); 
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1); 

    // Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2); 

    // Comparação das Cartas
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2)); 

    return 0;

}
