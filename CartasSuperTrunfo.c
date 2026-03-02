#include <stdio.h>

int main() {
    // CARTA 1
    char estado1;       //C
    char codigo1[4];    //A
    char cidade1[100];  //R
    int populacao1;     //T
    float area1;        //A
    float pib1;
    int pontos1;        //1
    float densidade1;
    float perCapita1;
    

    // CARTA 2
    char estado2;       //C
    char codigo2[4];    //A
    char cidade2[100];  //R
    int populacao2;     //T
    float area2;        //A
    float pib2;
    int pontos2;        //2
    float densidade2;
    float perCapita2;

    // CARTA 1
    printf(" Cadastro da Carta 1 \n");

    printf("Estado (A a H): \n");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): \n");
    scanf("%3s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf(" %s", &cidade1);

    printf("Populacao: \n");
    scanf("%d", &populacao1);

    printf("Area (km²): \n");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): \n");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos1);
    densidade1 = (populacao1 / area1);
    perCapita1 = (pib1 / populacao1);

    // CARTA 2
    printf("\n Cadastro da Carta 2 \n");

    printf("Estado (A a H): \n");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): \n");
    scanf("%3s", &codigo2);

    printf("Nome da Cidade: \n");
    scanf(" %s", &cidade2);

    printf("Populacao: \n");
    scanf("%d", &populacao2);

    printf("Area (km²): \n");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): \n");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos2);
    densidade2 = (populacao2 / area2);
    perCapita2 = (pib2 / populacao2);

    //  EXIBIR
    printf(" CARTAS CADASTRADAS \n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade popolacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", perCapita1);

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade popolacional: %.2f \n" , densidade2);
    printf("PIB per capita: %.2f \n", perCapita2);

    return 0;
}

/*
Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. 
Para cada carta, o usuário deverá fornecer as seguintes informações:

Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char

Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)

Nome da Cidade: O nome da cidade. Tipo: char[] (string)

População: O número de habitantes da cidade. Tipo: int

Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float

PIB: O Produto Interno Bruto da cidade. Tipo: float

Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
----------------------------------------------
Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.
 
Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.
 
Exibir os Resultados: Além de exibir as informações lidas do usuário (como no nível básico), seu programa também deve exibir a densidade populacional e o PIB per capita calculados para cada cidade. Formate os valores de ponto flutuante com duas casas decimais.
*/
