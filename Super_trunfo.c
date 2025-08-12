#include <stdio.h>

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[10];       // Código da cidade (ex: A01)
    char nome[50];         // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade em bilhões
    int pontosTuristicos;  // Número de pontos turísticos
} Carta;

int main() {
    int totalCartas;

    // Mensagem de boas-vindas
    printf("====================================\n");
    printf("     Cadastro de Cartas - Cidades\n");
    printf("====================================\n");

    // Pergunta ao usuário quantas cartas deseja cadastrar
    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &totalCartas);

    // Validação para evitar entrada inválida
    if (totalCartas <= 0) {
        printf("Número inválido! O programa será encerrado.\n");
        return 1;
    }

    // Declara um array de cartas
    Carta cartas[totalCartas];

    // Loop para cadastrar cada cidade
    for (int i = 0; i < totalCartas; i++) {
        printf("\n------------------------------\n");
        printf(" Cadastro da carta %d\n", i + 1);
        printf("------------------------------\n");

        printf("Código da cidade (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Nome da cidade: ");
        scanf(" %[^\n]", cartas[i].nome); // Permite ler nomes com espaços

        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área (km²): ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhões): ");
        scanf("%f", &cartas[i].pib);

        printf("Número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        printf("Carta cadastrada com sucesso!\n");
    }

    // Exibição das cartas cadastradas
    printf("\n====================================\n");
    printf(" Cidades cadastradas\n");
    printf("====================================\n");

    for (int i = 0; i < totalCartas; i++) {
        printf("\n------------------------------\n");
        printf(" Carta %d\n", i + 1);
        printf("------------------------------\n");
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome: %s\n", cartas[i].nome);
        printf("População: %d habitantes\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões\n", cartas[i].pib);
        printf("Pontos turísticos: %d\n", cartas[i].pontosTuristicos);
    }

    printf("\nCadastro finalizado com sucesso!\n");

    return 0;
}
