#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Primeira carta:");
    char carta1;
    printf("Escolha uma letra entre A e H: \n");
    scanf(" %c", &carta1);

    char codigoCarta1[10];
    printf("Escreva o código da carta (Letra acima + numero de 01 a 04): \n");
    scanf(" %s", codigoCarta1);

    char nomeCidade1[20];
    printf("Nome da cidade: \n");
    scanf(" %s", nomeCidade1);

    int populacao1;
    printf("População: \n");
    scanf(" %i", &populacao1);

    float area1;
    printf("Area em km²: \n");
    scanf(" %f", &area1);

    float pib1;
    printf("PIB da cidade: \n");
    scanf(" %f", &pib1);

    int pontosTuristicos1;
    printf("Numero de pontos turisticos: \n");
    scanf(" %i", &pontosTuristicos1);

    printf("Segunda carta: \n");
    char carta2;
    printf("Escolha uma letra entre A e H: \n");
    scanf(" %c", &carta2);
    char codigoCarta2[10];
    printf("Escreva o código da carta (Letra acima + numero de 01 a 04): \n");
    scanf(" %s", codigoCarta2);

    char nomeCidade2[20];
    printf("Nome da cidade: \n");
    scanf(" %s", nomeCidade2);

    int populacao2;
    printf("População: \n");
    scanf(" %i", &populacao2);

    float area2;
    printf("Area em km²: \n");
    scanf(" %f", &area2);

    float pib2;
    printf("PIB da cidade: \n");
    scanf(" %f", &pib2);

    int pontosTuristicos2;
    printf("Numero de pontos turisticos: \n");
    scanf(" %i", &pontosTuristicos2);

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    printf("\nPrimeira Carta\n");
    printf("Carta: %c\n", carta1);
    printf("Código da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    printf("\nSegunda Carta\n");
    printf("Carta: %c\n", carta2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);

    printf("Carta1 - %c: %d habitantes", nomeCidade1, populacao1);
    printf("Carta2 - %c: %d habitantes", nomeCidade2, populacao2)

    if (area1 > area2)
    {
        printf("Resultado: A cidade %s venceu!\n", nomeCidade1);
    }
    else
    {
        printf("Resultado: A cidade %s venceu!\n", nomeCidade2);
    }


    return 0;
}
