#include <stdio.h>

int main() {
    // ================= VARIÁVEIS CARTA 1 =================
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePop1;
    float pibPerCapita1;
    float superPoder1;

    // ================= VARIÁVEIS CARTA 2 =================
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePop2;
    float pibPerCapita2;
    float superPoder2;

    printf("=== SUPER TRUNFO - BATALHA DE CARTAS ===\n");

    // ================= CADASTRO CARTA 1 =================
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1);

    printf("Informe a População: ");
    scanf("%lu", &populacao1);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidadePop1 = (area1 > 0) ? ((float)populacao1 / area1) : 0;
    pibPerCapita1 = (populacao1 > 0) ? ((pib1 * 1000000000.0f) / populacao1) : 0;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 +
                  ((densidadePop1 > 0) ? (1.0f / densidadePop1) : 0);

    // ================= CADASTRO CARTA 2 =================
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Informe o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%3s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Informe a População: ");
    scanf("%lu", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidadePop2 = (area2 > 0) ? ((float)populacao2 / area2) : 0;
    pibPerCapita2 = (populacao2 > 0) ? ((pib2 * 1000000000.0f) / populacao2) : 0;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 +
                  ((densidadePop2 > 0) ? (1.0f / densidadePop2) : 0);

    // ================= RESULTADOS =================
    printf("\n=== Comparação de Cartas ===\n");


    if(populacao1 > populacao2){
        printf("carta 1 venceu!\n");
    } else{
        printf("carta 2 venceu!\n");
    }
    
    if(area1 > area2){
        printf("carta 1 venceu!\n");
    } else{
        printf("carta 2 venceu!\n");
    }
   
    if(pib1 > pib2){
        printf("carta 1 venceu!\n");
    } else{
        printf("carta 2 venceu!\n");
    }

    if(pontosTuristicos1 > pontosTuristicos2){
        printf("carta 1 venceu!\n");
    } else{
        printf("carta 2 venceu!\n");
    }

    if(densidadePop1 < densidadePop2){
        printf("carta 1 venceu!\n");
    } else{
        printf("carta 2 venceu!\n");
    }

    if(pibPerCapita1 > pibPerCapita2){
        printf("carta 1 venceu!\n");
    } else{
        printf("carta 2 venceu!\n");
    }

    if(superPoder1 > superPoder2){
        printf("carta 1 venceu!\n");
    } else{
        printf("carta 2 venceu!\n");
    }



    return 0;
}