#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variáveis
    char carta01[50], estado01[50], cidade01[50], codigo01[50];
    unsigned long int populacao01;
    float area01, pib01, densidade_populacional01, pib_per_capita01, super_poder01;
    int pontos_turisticos01;

    char carta02[50], estado02[50], cidade02[50], codigo02[50];
    unsigned long int populacao02;
    float area02, pib02, densidade_populacional02, pib_per_capita02, super_poder02;
    int pontos_turisticos02;

    // Entrada de dados para a carta 01
    printf("Vamos entrar com as informações da primeira carta: \n");
    printf("Entre com a letra da carta (A ou B):\n");
    scanf("%s", carta01);
    printf("Entre com o nome do estado:\n");
    scanf(" %49[^\n]", estado01);
    printf("Entre com o nome da cidade:\n");
    scanf(" %49[^\n]", cidade01);
    printf("Entre com o código (A001, B001...):\n");
    scanf("%s", codigo01);
    printf("Entre com número da população:\n");
    scanf("%lu", &populacao01);  // Agora usamos unsigned long int
    printf("Entre com a área total (em km²):\n");
    scanf("%f", &area01);
    printf("Entre com o PIB (em R$):\n");
    scanf("%f", &pib01);
    printf("Entre com o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos01);

    // Cálculos da Densidade Populacional e PIB per Capita para a carta 01
    densidade_populacional01 = populacao01 / area01;
    pib_per_capita01 = pib01 / populacao01;
    super_poder01 = (float)populacao01 + area01 + pib01 + pontos_turisticos01 + (1 / densidade_populacional01);

    // Entrada de dados para a carta 02
    printf("Agora vamos entrar com as informações da segunda carta: \n");
    printf("Entre com a letra da carta (A ou B):\n");
    scanf("%s", carta02);
    printf("Entre com o nome do estado:\n");
    scanf(" %49[^\n]", estado02);
    printf("Entre com o nome da cidade:\n");
    scanf(" %49[^\n]", cidade02);
    printf("Entre com o código (A001, B001...):\n");
    scanf("%s", codigo02);
    printf("Entre com número da população:\n");
    scanf("%lu", &populacao02);  // Agora usamos unsigned long int
    printf("Entre com a área total (em km²):\n");
    scanf("%f", &area02);
    printf("Entre com o PIB (em R$):\n");
    scanf("%f", &pib02);
    printf("Entre com o número de pontos turísticos:\n");
    scanf("%d", &pontos_turisticos02);

    // Cálculos da Densidade Populacional e PIB per Capita para a carta 02
    densidade_populacional02 = populacao02 / area02;
    pib_per_capita02 = pib02 / populacao02;
    super_poder02 = (float)populacao02 + area02 + pib02 + pontos_turisticos02 + (1 / densidade_populacional02);

    // Comparação dos Atributos

    printf("\n### Comparação de Cartas ###\n");

    // Comparando População
    printf("População: Carta 1 venceu (%d)\n", populacao01 > populacao02);

    // Comparando Área
    printf("Área: Carta 1 venceu (%d)\n", area01 > area02);

    // Comparando PIB
    printf("PIB: Carta 1 venceu (%d)\n", pib01 > pib02);

    // Comparando Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos01 > pontos_turisticos02);

    // Comparando Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade_populacional01 > densidade_populacional02);

    // Comparando PIB per Capita
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita01 > pib_per_capita02);

    // Comparando Super Poder
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder01 > super_poder02);

    return 0;
}
