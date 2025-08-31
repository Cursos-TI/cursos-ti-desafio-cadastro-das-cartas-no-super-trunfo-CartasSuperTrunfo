#include <stdio.h>

// A struct organiza todos os dados de uma carta, tanto os inseridos quanto os calculados.
struct Carta {
    // Atributos inseridos pelo usuário
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Atributos calculados pelo sistema
    float densidade;
    float pibPerCapita;
    float superPoder;
};

int main() {
    // Declaração das duas cartas que serão usadas no jogo
    struct Carta carta1, carta2;

    // ===============================================
    // CADASTRO DAS CARTAS
    // ===============================================
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite a Populacao: ");
    scanf("%lu", &carta1.populacao); // %lu é para unsigned long int

    printf("Digite a Area (km2): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Digite o N. de Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    printf("\n");

    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite a Populacao: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a Area (km2): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Digite o N. de Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    printf("\n");

    // ===============================================
    // CÁLCULO DOS ATRIBUTOS (Nível Aventureiro e Mestre)
    // ===============================================
    // Carta 1
    carta1.densidade = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / (float)carta1.populacao;
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib + (float)carta1.pontosTuristicos + carta1.pibPerCapita + (1.0f / carta1.densidade);
    
    // Carta 2
    carta2.densidade = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / (float)carta2.populacao;
    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib + (float)carta2.pontosTuristicos + carta2.pibPerCapita + (1.0f / carta2.densidade);


    // ===============================================
    // EXIBIÇÃO DOS DADOS COMPLETOS
    // ===============================================
    printf("--- DADOS COMPLETOS DAS CARTAS ---\n");
    printf("--- CARTA 1 ---\n");
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: R$ %.2f bilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta1.densidade);
    printf("PIB per Capita: R$ %.2f por habitante\n", carta1.pibPerCapita * 1e9 / carta1.populacao); // Exibição mais realista
    printf("SUPER PODER: %.2f\n\n", carta1.superPoder);
    
    printf("--- CARTA 2 ---\n");
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: R$ %.2f bilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta2.densidade);
    printf("PIB per Capita: R$ %.2f por habitante\n", carta2.pibPerCapita * 1e9 / carta2.populacao); // Exibição mais realista
    printf("SUPER PODER: %.2f\n\n", carta2.superPoder);


    // ===============================================
    // COMPARAÇÃO (Nível Mestre)
    // ===============================================
    printf("--- RESULTADO DA COMPARACAO (1 = Vitoria da Carta 1, 0 = Vitoria da Carta 2) ---\n");
    printf("Populacao: %d\n", (carta1.populacao > carta2.populacao) ? 1 : 0);
    printf("Area: %d\n", (carta1.area > carta2.area) ? 1 : 0);
    printf("PIB: %d\n", (carta1.pib > carta2.pib) ? 1 : 0);
    printf("Pontos Turisticos: %d\n", (carta1.pontosTuristicos > carta2.pontosTuristicos) ? 1 : 0);
    printf("PIB per Capita: %d\n", (carta1.pibPerCapita > carta2.pibPerCapita) ? 1 : 0);
    // Para Densidade, a lógica é invertida: o MENOR valor vence.
    printf("Densidade Populacional (menor vence): %d\n", (carta1.densidade < carta2.densidade) ? 1 : 0);
    printf("----------------------------------------\n");
    // Para o Super Poder, o MAIOR valor vence.
    printf("SUPER PODER: %d\n", (carta1.superPoder > carta2.superPoder) ? 1 : 0);

    return 0;
}
