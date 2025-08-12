#include <stdio.h>

int main() {
    char estado;
    char codigoCarta[3]; 
    char nomeCidade[20];  
    int populacao;
    float area;
    float pib;
    int qtdPontosTuristicos;
    char codigoFinal[4]; 

    char estado2;
    char codigoCarta2[3];  
    char nomeCidade2[20];  
    int populacao2;
    float area2;
    float pib2;
    int qtdPontosTuristicos2;
    char codigoFinal2[4];  

    /* Carta 1*/
    printf("Carta 1\n");

    printf("Digite o código do Estado (Entre 'A' e 'H'):\n");
    scanf(" %c", &estado);  

    printf("Digite o código da carta (De 01 a 04):\n");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade);  

    printf("Digite a quantidade de pessoas:\n");
    scanf("%d", &populacao);

    printf("Digite a área em km²:\n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &qtdPontosTuristicos);

    // Junta estado e códigoCarta em codigoFinal
    sprintf(codigoFinal, "%c%s", estado, codigoCarta);

    printf("\nFim do cadastro da Primeira Carta!\n\n");

    /* Carta 2*/
    printf("Carta 2\n");

    printf("Digite o código do Estado (Entre 'A' e 'H'):\n");
    scanf(" %c", &estado2);  

    printf("Digite o código da carta (De 01 a 04):\n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade2);  

    printf("Digite a quantidade de pessoas:\n");
    scanf("%d", &populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &qtdPontosTuristicos2);

    // Junta estado2 e códigoCarta2 em codigoFinal2
    sprintf(codigoFinal2, "%c%s", estado2, codigoCarta2);

    printf("\nFim do cadastro da Segunda Carta!\n\n");


    /* Impressão */

    printf("\nCarta 1:\n\n"
        "Estado: %c\n"
        "Código: %s\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais\n"
        "Número de Pontos Turísticos: %d\n",
        estado, codigoFinal, nomeCidade, populacao, area, pib, qtdPontosTuristicos);

    printf("\nCarta 2:\n\n"
           "Estado: %c\n"
           "Código: %s\n"
           "Nome da Cidade: %s\n"
           "População: %d\n"
           "Área: %.2f km²\n"
           "PIB: %.2f bilhões de reais\n"
           "Número de Pontos Turísticos: %d\n",
           estado2, codigoFinal2, nomeCidade2, populacao2, area2, pib2, qtdPontosTuristicos2);
    return 0;
}
