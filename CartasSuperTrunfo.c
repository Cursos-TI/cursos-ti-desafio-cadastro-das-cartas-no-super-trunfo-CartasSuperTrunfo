#include <stdio.h>
#include <string.h>

struct Carta {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
};

int main() {
    struct Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("\n--- Cadastrando a Carta %d ---\n", i + 1);

        printf("Estado (A-H): ");
        scanf(" %c", &cartas[i].estado);

        printf("Código da Carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Nome da Cidade: ");
        scanf(" %49[^\n]", cartas[i].nomeCidade);

        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhões de reais): ");
        scanf("%f", &cartas[i].pib);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].numPontosTuristicos);
    }

    printf("\n--- Cartas Cadastradas ---\n");
    for (int i = 0; i < 2; i++) {
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].numPontosTuristicos);
    }

    return 0;
}