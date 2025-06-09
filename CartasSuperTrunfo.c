#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //Configurações das variáveis
    char estadoCarta1, estadoCarta2, codigoCarta1[9], codigoCarta2[9], nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2, numeroPontosTuristicos1,numeroPontosTuristicos2;
    float area1, area2, pib1, pib2;

    //Configurações da carta 1
    printf("Estado da carta 1: ");
    scanf(" %c", &estadoCarta1);
    printf("Código Carta 1: ");
    scanf("%s", codigoCarta1);
    printf("Nome da Cidade 1: ");
    scanf("%s", nomeCidade1);
    printf("População 1: ");
    scanf("%d", &populacao1);
    printf("Área 1 (em Km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeroPontosTuristicos1);
    printf(" \n");
    //fim das Configurações da carta 1

    //Configurações da carta 2
    printf("Estado da carta 2: ");
    scanf(" %c", &estadoCarta2);
    printf("Código Carta 2: ");
    scanf("%s", codigoCarta2);
    printf("Nome da Cidade 2: ");
    scanf("%s", nomeCidade2);
    printf("População 2: ");
    scanf("%d", &populacao2);
    printf("Área 2 (em Km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeroPontosTuristicos2);
    printf(" \n");
    //fim das Configurações da carta 2

    //Imprimir dados da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c \n", estadoCarta1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n \n", numeroPontosTuristicos1);
    //Fim da impressão dos dados da carta 1

    //Imprimir dados da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c \n", estadoCarta2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numeroPontosTuristicos2);
    //Fim da impressão dos dados da carta 2
    
    return 0;
}
