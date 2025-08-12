#include <stdio.h>

int main(){
   // Variáveis da carta 1
   char estado1;
   char codigo1[5];
   char nomeCidade1[50];
   int populacao1, pontosTuristicos1;
   float area1, pib1, densidade1;

   // Variáveis da carta 2
   char estado2;
   char codigo2[5];
   char nomeCidade2[50];
   int populacao2, pontosTuristicos2;
   float area2, pib2, densidade2;
    
   // Início do programa
    printf("=== Cadastro de 2 Cartas do Super Trunfo ===\n\n");

    // Coletando os dados da primeira carta
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n");

    // Coletando os dados da segunda carta

     printf("Digite os dados da Carta 2:\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n");
    
    // Calcular a Densidade Populacional
    densidade1 = populacao1 / area1;
    

    // Calcular o PIB per Capita
    pib1 = (pib1 * 1000000000) / populacao1;
    

      // Mostrando os dados da primeira carta
    printf("=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("A Densidade Demográfica é: %.2f hab/km²\n", densidade1);
    printf("O PIB per Capita é: %.2f reais\n", pib1);


    printf("\n");

     // Calcular a Densidade Populacional
    densidade2 = populacao2 / area2;
    

    // Calcular o PIB per Capita
    pib2 = (pib2 * 1000000000) / populacao2;

    // Mostrando os dados da segunda carta
    printf("=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("A Densidade Demográfica é: %.2f hab/km²\n", densidade2);
    printf("O PIB per Capita é: %.2f reais\n", pib2);

   
    return 0;
}
