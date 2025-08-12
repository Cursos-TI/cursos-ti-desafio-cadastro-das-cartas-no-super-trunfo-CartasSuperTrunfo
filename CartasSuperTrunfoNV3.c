#include <stdio.h>

int main() {

    //Desafio Aventureiro

    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];  // Espaço para "A01" + caractere nulo '\0'
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontoTuristico1;
    float densiPop1;
    float pibPerCapita1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontoTuristico2;
    float densiPop2;
    float pibPerCapita2;


    // Entrada da Carta 1
    printf("Digite o Estado da Carta 1: \n");
    scanf("%c", &estado1);

    printf("Digite o Código da Carta 1: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s", &cidade1);

    printf("Digite a População da Cidade: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Área da Cidade (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontoTuristico1);

    // Entrada da Carta 2
    printf("\nDigite o Estado da Carta 2: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta 2: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da Carta: \n");
    scanf(" %s", &cidade2);

    printf("Digite a População da Cidade: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontoTuristico2);

    //Logica
    pibPerCapita1 = pib1 / (float)populacao1; // Calcula o PIB Per capita da Cidade da carta 1
    pibPerCapita2 = pib2 / (float)populacao2; // Calcula o PIB Per capita da Cidade da carta 2

    densiPop1 = populacao1 / area1; // Cacula a densidade populacional da Cidade da carta 1
    densiPop2 =  populacao2 / area2; // Cacula a densidade populacional da Cidade da carta 2

    // Exibição das Cartas
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f\n", densiPop1);
    printf("PIB Per Capita: %.2f\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f\n", densiPop2);
    printf("PIB Per Capita: %.2f\n", pibPerCapita2);

     //Super Poder Carta 1

     float SuperPoder1 = populacao1 + area1 + pib1 + pontoTuristico1 + pibPerCapita1 + (1/densiPop1);
     float SuperPoder2 = populacao2 + area2 + pib2 + pontoTuristico2 + pibPerCapita2 + (1/densiPop2);
 
     printf("O Super Poder da Carta 1 é de %.2f pontos\n", SuperPoder1);
     printf("O Super Poder da Carta 2 é de %.2f pontos\n", SuperPoder2);
 
     //Comparação das Cartas

     printf("\n=== Comparação de Cartas ===\n");

     // População
     printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
 
     // Área
     printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
 
     // PIB
     printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
 
     // Pontos Turísticos
     printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontoTuristico1 > pontoTuristico2);
 
     // Densidade Populacional (menor é melhor!)
     printf("Densidade Populacional: Carta 1 venceu (%d)\n", densiPop1 < densiPop2);
 
     // PIB per Capita
     printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
 
     // Super Poder
     printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);
 

    return 0;
}
