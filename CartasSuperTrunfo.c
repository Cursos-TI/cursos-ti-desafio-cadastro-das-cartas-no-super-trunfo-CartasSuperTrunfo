#include <stdio.h>

/*
    Super Trunfo - Países (Cartas de Cidades)
    Cobertura:
      - Nível Novato: cadastro e exibição de 2 cartas
      - Nível Aventureiro: calcula Densidade Populacional e PIB per Capita
      - Nível Mestre: comparação atributo a atributo e Super Poder

    Observações:
      - População (Mestre): unsigned long int
      - PIB digitado em BILHÕES de reais (ex.: 699.28)
      - Para os cálculos, PIB é convertido para reais (× 1e9)
      - Densidade é invertida (1/densidade) no Super Poder
*/

typedef struct {
    char  estado;               // 'A'..'H'
    char  codigo[4];            // "A01".."H04"
    char  cidade[60];           // aceita espaço
    unsigned long int populacao; // Mestre pede unsigned long int
    float area;                 // km²
    float pib_bilhoes;          // PIB em bilhões de reais (entrada)
    int   pontos_turisticos;    // quantidade
} Carta;

int main(void) {
    Carta c1, c2;

    /* ================== CADASTRO (NOVATO) ================== */
    /* -------- Carta 1 -------- */
    printf("=== CADASTRO CARTA 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &c1.estado);
    printf("Codigo (ex: A01): ");
    scanf("%3s", c1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %59[^\n]", c1.cidade);
    printf("Populacao (unsigned long int): ");
    scanf("%lu", &c1.populacao);
    printf("Area (km2, float): ");
    scanf("%f", &c1.area);
    printf("PIB (em BILHOES de reais, float): ");
    scanf("%f", &c1.pib_bilhoes);
    printf("Pontos turisticos (int): ");
    scanf("%d", &c1.pontos_turisticos);

    /* -------- Carta 2 -------- */
    printf("\n=== CADASTRO CARTA 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &c2.estado);
    printf("Codigo (ex: B02): ");
    scanf("%3s", c2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %59[^\n]", c2.cidade);
    printf("Populacao (unsigned long int): ");
    scanf("%lu", &c2.populacao);
    printf("Area (km2, float): ");
    scanf("%f", &c2.area);
    printf("PIB (em BILHOES de reais, float): ");
    scanf("%f", &c2.pib_bilhoes);
    printf("Pontos turisticos (int): ");
    scanf("%d", &c2.pontos_turisticos);

    /* ================== CALCULOS (AVENTUREIRO) ================== */
    /* Carta 1 */
    float densidade1 = (c1.area > 0.0f) ? ( (float)c1.populacao / c1.area ) : 0.0f; // hab/km²
    double pib1_reais = (double)c1.pib_bilhoes * 1000000000.0;                       // bilhões -> reais
    float pib_per_capita1 = (c1.populacao > 0) ? (float)(pib1_reais / (double)c1.populacao) : 0.0f;

    /* Carta 2 */
    float densidade2 = (c2.area > 0.0f) ? ( (float)c2.populacao / c2.area ) : 0.0f;
    double pib2_reais = (double)c2.pib_bilhoes * 1000000000.0;
    float pib_per_capita2 = (c2.populacao > 0) ? (float)(pib2_reais / (double)c2.populacao) : 0.0f;

    /* ================== EXIBICAO (NOVATO + AVENTUREIRO) ================== */
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", c1.estado);
    printf("Codigo: %s\n", c1.codigo);
    printf("Cidade: %s\n", c1.cidade);
    printf("Populacao: %lu\n", c1.populacao);
    printf("Area: %.2f km2\n", c1.area);
    printf("PIB: %.2f bilhoes de reais\n", c1.pib_bilhoes);
    printf("Pontos turisticos: %d\n", c1.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", c2.estado);
    printf("Codigo: %s\n", c2.codigo);
    printf("Cidade: %s\n", c2.cidade);
    printf("Populacao: %lu\n", c2.populacao);
    printf("Area: %.2f km2\n", c2.area);
    printf("PIB: %.2f bilhoes de reais\n", c2.pib_bilhoes);
    printf("Pontos turisticos: %d\n", c2.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    /* ================== COMPARACOES (MESTRE) ================== */
    /* Regra: imprimir 1 se CARTA 1 vence, 0 se CARTA 2 vence.
       - Para DENSIDADE: vence a MENOR.
       - Para os demais (Populacao, Area, PIB, Pontos, PIB per Capita, Super Poder): vence a MAIOR.
    */
    int v_pop      = (c1.populacao     > c2.populacao)     ? 1 : 0;
    int v_area     = (c1.area          > c2.area)          ? 1 : 0;
    int v_pib      = (c1.pib_bilhoes   > c2.pib_bilhoes)   ? 1 : 0;
    int v_pts      = (c1.pontos_turisticos > c2.pontos_turisticos) ? 1 : 0;
    int v_pcap     = (pib_per_capita1  > pib_per_capita2)  ? 1 : 0;
    int v_dens     = (densidade1       < densidade2)       ? 1 : 0;  // menor vence

    /* Super Poder:
       Soma de TODOS os atributos (inclusive calculados),
       com densidade invertida (1/densidade) antes da soma.
       Atenção às conversões de tipo.
    */
    double inv_d1 = (densidade1 > 0.0f) ? (1.0 / densidade1) : 0.0;
    double inv_d2 = (densidade2 > 0.0f) ? (1.0 / densidade2) : 0.0;

    /* compondo as somas:
       - Populacao (unsigned long -> double)
       - Area (float -> double)
       - PIB em reais (double)
       - Pontos (int -> double)
       - 1/densidade (double)
       - PIB per Capita (float -> double)
    */
    double super1 = (double)c1.populacao + (double)c1.area + pib1_reais
                  + (double)c1.pontos_turisticos + inv_d1 + (double)pib_per_capita1;

    double super2 = (double)c2.populacao + (double)c2.area + pib2_reais
                  + (double)c2.pontos_turisticos + inv_d2 + (double)pib_per_capita2;

    int v_super   = (super1 > super2) ? 1 : 0;

    printf("\n===== COMPARACOES (1 = Carta 1 vence, 0 = Carta 2 vence) =====\n");
    printf("Populacao: %d\n", v_pop);
    printf("Area: %d\n", v_area);
    printf("PIB (bilhoes): %d\n", v_pib);
    printf("Pontos turisticos: %d\n", v_pts);
    printf("PIB per Capita: %d\n", v_pcap);
    printf("Densidade (menor vence): %d\n", v_dens);
    printf("Super Poder: %d\n", v_super);

    return 0;
}





























