#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    #include <stdio.h>
#include <string.h>

// Definição da estrutura para uma cidade
struct Cidade {
    int codigo;
    char nome[50];
    long populacao;
    float area;
    double pib;
    int pontos_turisticos;
};

// Definição da estrutura para um estado
struct Estado {
    char nome[50];
    struct Cidade cidades[4]; // Cada estado tem 4 cidades
};

int main() {
    struct Estado estados[8]; // Array para 8 estados
    int i, j;

    // Cadastro dos estados e cidades
    for (i = 0; i < 8; i++) {
        printf("\n--- Cadastro do Estado %d ---\n", i + 1);
        printf("Nome do estado: ");
        scanf(" %[^\n]", estados[i].nome); // Lê o nome do estado com espaços

        for (j = 0; j < 4; j++) {
            printf("\n--- Cadastro da Cidade %d do Estado %s ---\n", j + 1, estados[i].nome);

            printf("Código da cidade: ");
            scanf("%d", &estados[i].cidades[j].codigo);

            printf("Nome da cidade: ");
            scanf(" %[^\n]", estados[i].cidades[j].nome); // Lê o nome da cidade com espaços

            printf("População: ");
            scanf("%ld", &estados[i].cidades[j].populacao);

            printf("Área (em km²): ");
            scanf("%f", &estados[i].cidades[j].area);

            printf("PIB: ");
            scanf("%lf", &estados[i].cidades[j].pib);

            printf("Número de pontos turísticos: ");
            scanf("%d", &estados[i].cidades[j].pontos_turisticos);
        }
    }

    // Exibição dos dados dos estados e cidades
    printf("\n--- Dados dos Estados e Cidades Cadastradas ---\n");
    for (i = 0; i < 8; i++) {
        printf("\nEstado: %s\n", estados[i].nome);
        for (j = 0; j < 4; j++) {
            printf("\n  Cidade %d:\n", j + 1);
            printf("    Código: %d\n", estados[i].cidades[j].codigo);
            printf("    Nome: %s\n", estados[i].cidades[j].nome);
            printf("    População: %ld\n", estados[i].cidades[j].populacao);
            printf("    Área: %.2f km²\n", estados[i].cidades[j].area);
            printf("    PIB: %.2lf\n", estados[i].cidades[j].pib);
            printf("    Pontos Turísticos: %d\n", estados[i].cidades[j].pontos_turisticos);
        }
    }


    return 0;
}
