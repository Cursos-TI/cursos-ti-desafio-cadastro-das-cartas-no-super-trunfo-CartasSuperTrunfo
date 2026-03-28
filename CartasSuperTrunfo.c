// Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo.
// Para cada carta, o usuário deverá fornecer as seguintes informações:

// Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).
// Tipo: char

// Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
// Tipo: char[] (um array de caracteres, ou string)

// Nome da Cidade: O nome da cidade.
// Tipo: char[] (string)

// População: O número de habitantes da cidade.
// Tipo: int

// Área (em km²): A área da cidade em quilômetros quadrados.
// Tipo: float

// PIB: O Produto Interno Bruto da cidade.
// Tipo: float

// Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.
// Tipo: int

// Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela
// as informações cadastradas, de forma organizada e legível.

// Para cada carta, imprima cada informação em uma linha separada,
// com uma descrição clara. Por exemplo:

// Carta 1:

// Estado: A
// Código: A01
// Nome da Cidade: São Paulo
// População: 12325000
// Área: 1521.11 km²
// PIB: 699.28 bilhões de reais
// Número de Pontos Turísticos: 50

// Carta 2:

// Estado: B
// Código: B02
// Nome da Cidade: Rio de Janeiro
// População: 6748000
// Área: 1200.25 km²
// PIB: 300.50 bilhões de reais
// Número de Pontos Turísticos: 30   




#include <stdio.h>
#include <string.h>

int main () {

    
    char estado1, estado2;

    char nomeDaCidade1[30], nomeDaCidade2[30];
    char codigo1[5], codigo2[5];

    int populacao1, populacao2, pontoTuristico1, pontoTuristico2;
    float area1, area2, pib1, pib2;

    printf("Forneça a informação da Carta 1:\n");

    printf("Estado 1: ");
    scanf(" %c", &estado1); 

    getchar(); 

    printf("Nome da Cidade 1: ");
    fgets(nomeDaCidade1, 30, stdin);

    printf("Código da cidade 1: ");
    scanf("%s", codigo1);

    printf("Número da população 1: ");
    scanf("%d", &populacao1);

    printf("Quantidade de pontos turísticos 1: ");
    scanf("%d", &pontoTuristico1);

    printf("Área (km2) 1: ");
    scanf("%f", &area1);

    printf("PIB 1: ");
    scanf("%f", &pib1);


    printf("\nForneça a informação da Carta 2:\n");

    printf("Estado 2: ");
    scanf(" %c", &estado2); 

    getchar();

    printf("Nome da Cidade 2: ");
    fgets(nomeDaCidade2, 30, stdin);

    printf("Código da cidade 2: ");
    scanf("%s", codigo2);

    printf("Número da população 2: ");
    scanf("%d", &populacao2);

    printf("Quantidade de pontos turísticos 2: ");
    scanf("%d", &pontoTuristico2);

    printf("Área (km2) 2: ");
    scanf("%f", &area2);

    printf("PIB 2: ");
    scanf("%f", &pib2);



    printf("\n===== Dados da Carta 1 =====\n");

    printf("Estado: %c\n", estado1); 

    printf("Nome da Cidade: %s", nomeDaCidade1);
    printf("Código da cidade: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Pontos turísticos: %d\n", pontoTuristico1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);



    printf("\n===== Dados da Carta 2 =====\n");

    printf("Estado: %c\n", estado2); 

    printf("Nome da Cidade: %s", nomeDaCidade2);
    printf("Código da cidade: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontoTuristico2);
    printf("Área: %.2f km2\n", area2);

    printf("PIB: %.2f\n", pib2);

    return 0;
}
