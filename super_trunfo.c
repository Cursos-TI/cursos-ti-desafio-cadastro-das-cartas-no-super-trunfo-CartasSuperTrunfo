#include <stdio.h>

int main() {
    // Carta 1
    char Estado1;
    char Codigo1[10];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float Pib1;
    int PontosTuristicos1;

    // Carta 2
    char Estado2;
    char Codigo2[10];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float Pib2;
    int PontosTuristicos2;

    printf("Carta 1:\n");

    printf("Digite o Estado (letra A-H): \n");
    scanf(" %c", &Estado1); // espaço antes de %c para ignorar newline

    printf("Digite o Codigo da Carta (ex: A01): \n");
    scanf("%s", Codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", Cidade1); // permite espaços

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao1);

    printf("Digite o tamanho da area (km²): \n");
    scanf("%f", &Area1);

    printf("Digite o PIB (em bilhoes): \n");
    scanf("%f", &Pib1);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos1);

    printf("\nCarta 2:\n");

    printf("Digite o Estado (letra A-H): \n");
    scanf(" %c", &Estado2);

    printf("Digite o Codigo da Carta (ex: B02): \n");
    scanf("%s", Codigo2);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", Cidade2);

    printf("Digite a Populacao: \n");
    scanf("%d", &Populacao2);

    printf("Digite o tamanho da area (km²): \n");
    scanf("%f", &Area2);

    printf("Digite o PIB (em bilhoes): \n");
    scanf("%f", &Pib2);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &PontosTuristicos2);

    // Exibir os dados
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhoes de reais\n", Pib1);
    printf("Pontos Turisticos: %d\n", PontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhoes de reais\n", Pib2);
    printf("Pontos Turisticos: %d\n", PontosTuristicos2);

    return 0;
}