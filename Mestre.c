// Bibliotecas
#include <stdio.h>
#include <locale.h>

int main()
{
    // Biblioteca para o terminal interpretar os caracteres
    setlocale(LC_ALL, "Portuguese_Brazil");

    // variáveis
    char estado[3];
    char codigo[10];
    char nomeCidade[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densiPopulacionalCarta1 = 0, densiPopulacionalCarta2 = 0;
    float pibPercapitoCarta1 = 0, pibPercapitoCarta2 = 0;
    float superPoder1, superPoder2;

    // Inicio do Jogo
    printf("### Super Trunfo ###\n");
    printf("### Cadastro de Cartas ###\n\n");

    // Carta 1 informações
    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %2s", estado);
    printf("Código: ");
    scanf("%9s", codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", nomeCidade);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (Km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Comparação de duas variáveis para saber se e diferente de 0
    if (area1 != 0)
        densiPopulacionalCarta1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f\n", densiPopulacionalCarta1);

    if (populacao1 != 0)
        pibPercapitoCarta1 = (pib1 * 1000000000) / populacao1;
    printf("PIB per capita: %.2f\n", pibPercapitoCarta1);

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPercapitoCarta1 + (area1 != 0 ? (1 / densiPopulacionalCarta1) : 0);

    // separação das cartas pulando a linha
    printf("\n");

    // Carta 2 informações
    printf("Carta 2:\n");
    printf("Estado: ");
    scanf(" %2s", estado);
    printf("Código: ");
    scanf("%9s", codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", nomeCidade);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (Km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Comparação de duas variáveis para saber se e diferente de 0
    if (area2 != 0)
        densiPopulacionalCarta2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f\n", densiPopulacionalCarta2);

    if (populacao2 != 0)
        pibPercapitoCarta2 = (pib2 * 1000000000) / populacao2;
    printf("PIB per capita: %.2f\n", pibPercapitoCarta2);

    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapitoCarta2 + (area2 != 0 ? (1 / densiPopulacionalCarta2) : 0);

    // Comparação das cartas
    printf("*** Comparação das Cartas ***\n\n");

    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densiPopulacionalCarta1 < densiPopulacionalCarta2 ? 1 : 2, densiPopulacionalCarta1 < densiPopulacionalCarta2);
    printf("PIB per capita: Carta %d venceu (%d)\n", pibPercapitoCarta1 > pibPercapitoCarta2 ? 1 : 2, pibPercapitoCarta1 > pibPercapitoCarta2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

    return 0; // Programa execultado corretamente
}