#include <stdio.h>

int main()
{

    // INICIALIZANDO AS VARIAVEIS DA PRIMEIRA CARTA
    char estado1[5];
    char codigoCidade1[10];
    char cidade1[20];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    // INICIALIZANDO AS VARIAVEIS DA SEGUNDA CARTA
    char estado2[5];
    char codigoCidade2[10];
    char cidade2[20];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    // ENTRADA DE DADOS PARA A PRIMEIRA CARTA
    printf("----- CARTA 1 -----\n\n");
    // ESTADO DA PRIMEIRA CARTA
    printf("Informe o estado da sua carta \n(ex: 'A' ou 'a' até 'h' ou 'H'): ");
    scanf("%s", &estado1);
    // CÓDIGO DA CIDADE
    printf("Informe o código da carta: \n(ex: 'A001'): ");
    scanf("%s", &codigoCidade1);
    // INFORMAR O NOME DA CIDADE
    // Consome a NewLine 'enter' anterior e consegue ler a proxima entrada;
    getchar();
    printf("Informe o nome da cidade: \n(ex: Rio de Janeiro): ");
    fgets(cidade1, sizeof(cidade1), stdin);
    // INFORMAR A POPULAÇÃO DA CIDADE
    printf("Informe a população da cidade: \n(ex: 120025): ");
    scanf("%d", &populacao1);
    // INFORMAR A AREA EM M²
    printf("Informe a área da cidade em Km²: \n(ex: 1200.25): ");
    scanf("%f", &area1);
    // INFORMAR O PIB DA CIDADE
    printf("Informe o PIB da cidade: \n(ex: 300.50): ");
    scanf("%f", &pib1);
    // INFORMAR O NÚMERO DE PONTOS TURISTICOS
    printf("Informe a quantidade de pontos turisticos: \n(ex: 4): ");
    scanf("%d", &pontosTuristicos1);
    getchar();

    // ENTRADA DE DADOS PARA A SEGUNDA CARTA
    printf("\n\n\n----- CARTA 2 -----\n\n");
    // ESTADO DA CARTA
    printf("Informe o estado da sua carta \n(ex: 'A' ou 'a' até 'h' ou 'H'): ");
    scanf("%s", &estado2);
    // CÓDIGO DA CIDADE
    printf("Informe o código da carta: \n(ex: 'A002'): ");
    scanf("%s", &codigoCidade2);
    // INFORMAR O NOME DA CIDADE
    getchar();
    printf("Informe o nome da cidade: \n(ex: Rio de Janeiro): ");
    fgets(cidade2, sizeof(cidade2), stdin);
    // INFORMAR A POPULAÇÃO DA CIDADE
    printf("Informe a população da cidade: \n(ex: 220025): ");
    scanf("%d", &populacao2);
    // INFORMAR A AREA EM M²
    printf("Informe a área da cidade em Km²: \n(ex: 2200.25): ");
    scanf("%f", &area2);
    // INFORMAR O PIB DA CIDADE
    printf("Informe o PIB da cidade: \n(ex: 300.50): ");
    scanf("%f", &pib2);
    // INFORMAR O NÚMERO DE PONTOS TURISTICOS
    printf("Informe a quantidade de pontos turisticos: \n(ex: 4): ");
    scanf("%d", &pontosTuristicos2);

    // APRESENTAÇÃO DOS DADOS CADASTRADOS PARA A PRIMEIRA CARTA
    printf("\n\n\n---------------------\n");
    printf("====CARTA 01====\n");
    printf("---------------------\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCidade1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões/Milhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    // APRESENTAÇÃO DOS DADOS CADASTRADOS PARA A SEGUNDA CARTA
    printf("\n\n\n---------------------\n");
    printf("====CARTA 02====\n");
    printf("---------------------\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCidade2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões/Milhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
