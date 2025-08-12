#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado;
    int num_cidade;
    char codigo[4];
    long int populacao;
    float area;
    double pib;
    int pontos_turisticos;

    // Cadastro da cidade
    printf("Cadastro de Cidade do Super Trunfo - Países\n");

    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado);

    printf("Digite o número da cidade (1-4): ");
    scanf(" %d", &num_cidade);

    // Gerar código da cidade (ex: A01, B02)
    sprintf(codigo, "%c%02d", estado, num_cidade);

    printf("População: ");
    scanf("%ld", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em biblhões): ");
    scanf("%lf", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Exibição dos dados cadastrados
    printf("\n====== Carta Cadastrada =====\n");
    printf("Código da Cidade: %s\n", codigo);
    printf("População: %ld habitantes\n", populacao);
    printf("Área: %.2f km²\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;
}
