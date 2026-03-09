#include <stdio.h>

int main() {

    /* ===== Variáveis Carta 1 ===== */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    /* ===== Variáveis Carta 2 ===== */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    /* ===== Entrada Carta 1 ===== */

    printf("Cadastro da Carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf('%s', codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", &cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    /* ===== Entrada Carta 2 ===== */

    printf("\nCadastro da Carta 2\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", &cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    /* ===== Cálculos ===== */

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    /* ===== Super Poder ===== */

    superPoder1 = populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1 / densidade1);

    superPoder2 = populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1 / densidade2);

    /* ===== Exibição dos dados ===== */

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    /* ===== Comparação ===== */

    printf("\nComparacao de Cartas:\n");

    
    if (populacao1 > populacao2){
        printf("Populacao: Carta 1 venceu (%d)\n");
    }else{
        printf("Populacao: Carta 2 venceu (%d)\n");}
    if (area1 > area2){
        printf("Area: Carta 1 venceu (%d)\n");
    }else{
        printf("Area: Carta 2 venceu (%d)\n");}
    
    if ( pib1 > pib2){
        printf("PIB: Carta 1 venceu (%d)\n");
    }else{
        printf("PIB: Carta 2 venceu (%d)\n");}
    
    if (pontos1 > pontos2){
        printf("Pontos Turisticos: Carta 1 venceu (%d)\n");
    }else{
        printf("Pontos Turisticos: Carta 2 venceu (%d)\n");}
    
    if (densidade1 < densidade2){
        printf("Densidade Populacional: Carta 1 venceu (%d)\n");
    }else{
        printf("Densidade Populacional: Carta 2 venceu (%d)\n");}
    
    if (pibPerCapita1 > pibPerCapita2){
        printf("PIB per Capita: Carta 1 venceu (%d)\n");
    }else{
        printf("PIB per Capita: Carta 2 venceu (%d)\n");
    }
     if (superPoder1 > superPoder2){
        printf("Super Poder: Carta 1 venceu (%d)\n");
    }else{
        printf("Super Poder: Carta 2 venceu (%d)\n");
    }

    return 0;
}
