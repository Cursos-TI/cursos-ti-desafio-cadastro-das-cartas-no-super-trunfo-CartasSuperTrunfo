#include <stdio.h>
#include <string.h>

int main() {
    char estado[3];
    char codigo[5];
    char codigo_da_carta[7];
    char municipio[20];
    int populacao;
    int pontos_turisticos;
    float area_territorial, pib, densidade_populacional, pib_percapita;

    char estado_1[3];
    char codigo1[5];
    char codigo_da_carta1[7];
    char municipio1[20];
    int populacao1;
    int pontos_turisticos1;
    float area_territorial1, pib1, densidade_populacional1, pib_percapita1;

    // ENTRADA DE DADOS - CARTA 01
    printf("CARTA 01\n");

    // CAPTURA DO ESTADO
    printf("Digite a UF do seu Estado:\n");
    scanf("%2s", estado);  // Limita a entrada a 2 caracteres
    getchar(); // Limpa o buffer

    // CAPTURA DO CÓDIGO
    printf("Digite um Código:\n");
    scanf("%4s", codigo);  // Limita a entrada a 4 caracteres
    getchar();

    // CAPTURAR E UNIR INICIAL DO ESTADO MAIS O CÓDIGO
    strcpy(codigo_da_carta, estado);
    strcat(codigo_da_carta, codigo);

    // CAPTURA DO MUNICÍPIO
    printf("Informe o nome do Município:\n");
    scanf(" %19[^\n]", municipio);  // Limita a entrada a 19 caracteres
    getchar();

    // CAPTURA DA POPULAÇÃO
    printf("Qual o número de Habitantes?\n");
    scanf("%d", &populacao);
    getchar();

    // CAPTURA DA ÁREA EM KM²
    printf("Informe a área em km²:\n");
    scanf("%f", &area_territorial);
    getchar();

    // CAPTURA DO PIB (em bilhões de reais)
    printf("Informe o PIB (Produto Interno Bruto) em bilhões de reais:\n");
    scanf("%f", &pib);
    getchar();

    // CÁLCULO DA DENSIDADE POPULACIONAL E DO PIB PER CAPITA (CARTA 1)
    densidade_populacional = populacao / area_territorial;
    pib_percapita = (pib * 1e9) / populacao;  // Converte PIB para reais

    // CAPTURA DA QUANTIDADE DE PONTOS TURÍSTICOS
    printf("Quantos pontos turísticos há nessa cidade?\n");
    scanf("%d", &pontos_turisticos);
    getchar();

    // ENTRADA DE DADOS - CARTA 02
    printf("\nCARTA 02\n");

    // CAPTURA DO ESTADO
    printf("Digite a UF do seu Estado:\n");
    scanf("%2s", estado_1);  // Limita a entrada a 2 caracteres
    getchar();

    // CAPTURA DO CÓDIGO
    printf("Digite um Código:\n");
    scanf("%4s", codigo1);  // Limita a entrada a 4 caracteres
    getchar();

    // CAPTURAR E UNIR INICIAL DO ESTADO MAIS O CÓDIGO DA CARTA 2
    strcpy(codigo_da_carta1, estado_1);
    strcat(codigo_da_carta1, codigo1);

    // CAPTURA DO MUNICÍPIO
    printf("Informe o nome do Município:\n");
    scanf(" %19[^\n]", municipio1);  // Limita a entrada a 19 caracteres
    getchar();

    // CAPTURA DA POPULAÇÃO
    printf("Qual o número de Habitantes?\n");
    scanf("%d", &populacao1);
    getchar();

    // CAPTURA DA ÁREA EM KM²
    printf("Informe a área em km²:\n");
    scanf("%f", &area_territorial1);
    getchar();

    // CAPTURA DO PIB (em bilhões de reais)
    printf("Informe o PIB (Produto Interno Bruto) em bilhões de reais:\n");
    scanf("%f", &pib1);
    getchar();

    // CÁLCULO DA DENSIDADE POPULACIONAL E DO PIB PER CAPITA (CARTA 2)
    densidade_populacional1 = populacao1 / area_territorial1;
    pib_percapita1 = (pib1 * 1e9) / populacao1;  // Converte PIB para reais

    // CAPTURA DA QUANTIDADE DE PONTOS TURÍSTICOS
    printf("Quantos pontos turísticos há nessa cidade?\n");
    scanf("%d", &pontos_turisticos1);
    getchar();

    // SAÍDA DE DADOS DA CARTA 1
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta 1: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", municipio);
    printf("População: %d Pessoas\n", populacao);
    printf("Área: %.2f km²\n", area_territorial);
    printf("PIB: R$ %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB Per Capita: R$ %.2f\n", pib_percapita);

    // SAÍDA DE DADOS DA CARTA 2
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado_1);
    printf("Código da Carta 2: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", municipio1);
    printf("População: %d Pessoas\n", populacao1);
    printf("Área: %.2f km²\n", area_territorial1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB Per Capita: R$ %.2f\n", pib_percapita1);

    return 0;
    
}