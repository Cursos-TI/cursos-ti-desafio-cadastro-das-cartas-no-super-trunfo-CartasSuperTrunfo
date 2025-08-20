#include <stdio.h>
#include <string.h>

struct Carta {
    char estado;               // Ex: 'A'
    char codigo[5];            // Ex: "A01"
    char cidade[50];           // Nome da cidade
    int populacao;             // Habitantes
    float area;                // km²
    float pib;                 // Produto Interno Bruto
    int pontosTuristicos;      // Número de pontos turísticos
};

int main() {
    struct Carta carta1, carta2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.cidade);  // lê string com espaços

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);


    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (km2): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);


    // Exibir as cartas cadastradas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turisticos: %d\n", carta1.pontosTuristicos);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turisticos: %d\n", carta2.pontosTuristicos);

    return 0;
}

