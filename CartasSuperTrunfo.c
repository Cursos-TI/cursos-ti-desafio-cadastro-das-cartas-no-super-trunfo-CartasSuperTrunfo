#include<stdio.h>

int main() {

    //variáveis primeira carta
    char nomeCarta[30]="";
    char estado[1] = "A";
    char codigoCarta[3] = "A01";
    char nomeCidade[20] = "São Paulo";
    unsigned long int populacao = 12325000;
    float area = 1521.11;
    float pib = 699.28;
    int numPontosTur = 50;
    float densidadePopulac;
    float pibPerCapt;
    float superPoder1;

    //variáveis segunda carta
    char nomeCarta2[30];
    char estado2[1] = "B";
    char codigoCarta2[3] = "B02";
    char nomeCidade2[20] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int numPontosTur2 = 30;
    float densidadePopulac2;
    float pibPerCapt2;
    float superPoder2;

    // Variáveis de comparação
    int compPopulacao;
    int compArea;
    int compPib;
    int compPontTur;
    int compDensidPopul;
    int compPibPercap;
    int compSuperPoder;


    //Exibição das cartas

    //Exibição da carta 1
    printf("Carta 1: %s\n", nomeCarta);
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numPontosTur);
    densidadePopulac = populacao / area;
    printf("Desnsidade Populacional:  %.2f hab/km²\n", densidadePopulac);
    pib =  pib * 1000000000;
    pibPerCapt = (float) pib / populacao;
    printf("PIB per Capita:  %.2f reais\n", pibPerCapt);
    superPoder1 = populacao + (area / 1000) + (pib / 1000000000) + numPontosTur + pibPerCapt + (1 / densidadePopulac);
    printf("Super Poder da Carta 1: %.2f\n\n", superPoder1);

    //Exibição da carta 2
    printf("Carta 2: %s\n", nomeCarta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTur2);
    densidadePopulac2 = populacao2 / area2;
    printf("Desnsidade Populacional:  %.2f hab/km²\n", densidadePopulac2);
    pib2 =  pib2 * 1000000000;
    pibPerCapt2 = (float) pib2 / populacao2;
    printf("PIB per Capita:  %.2f reais\n", pibPerCapt2);
    superPoder2 = populacao2 + (area2 / 1000) + (pib2 / 1000000000) + numPontosTur2 + pibPerCapt2 + (1 / densidadePopulac2);
    printf("Super Poder da Carta 2: %.2f\n\n", superPoder2);


    // Exibição do comparativo entre cartas

    printf("*** Comparação de Cartas ***\n\n");
    compPopulacao = populacao > populacao2;
    printf("População: Carta 1 venceu (%d)\n", compPopulacao);
    compArea = area > area2;
    printf("Área: Carta 1 venceu (%d)\n", compArea);
    compPib = pib > pib2;
    printf("PIB: Carta 1 venceu (%d)\n", compPib);
    compPontTur = numPontosTur > numPontosTur2;
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", compPontTur);
    compDensidPopul = densidadePopulac > densidadePopulac2;
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", compDensidPopul);
    compPibPercap = pibPerCapt > pibPerCapt2;
    printf("PIB per Capita: Carta 1 venceu (%d)\n", compPibPercap);
    compSuperPoder = superPoder1 > superPoder2;
    printf("Super Poder: Carta 1 venceu (%d)\n", compSuperPoder);

    return 0;

}
