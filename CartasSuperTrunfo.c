#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

// Estrutura para representar uma carta de cidade
typedef struct {
    char estado;           // Letra do estado (A a H)
    char codigo[4];        // Código único da carta (e.g., A01, B02)
    char nome[50];         // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área total da cidade em km²
    float pib;             // PIB da cidade em milhões
    int pontosTuristicos;  // Número de pontos turísticos na cidade
} CartaCidade;

// Constantes para o número de estados e cidades por estado
#define NUM_ESTADOS 8
#define NUM_CIDADES_POR_ESTADO 4
#define MAX_CARTAS (NUM_ESTADOS * NUM_CIDADES_POR_ESTADO)

// Função para cadastrar as cartas do jogo
void cadastrarCartas(CartaCidade cartas[], int *quantidade) {
    // Array com os estados identificados pelas letras de A a H
    char estados[NUM_ESTADOS] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    for (int i = 0; i < MAX_CARTAS; i++) {
        printf("\n=== Cadastro da Carta %d/%d ===\n", i + 1, MAX_CARTAS);

        // Determina o estado e o número da cidade com base no índice
        char estado = estados[i / NUM_CIDADES_POR_ESTADO]; // Seleciona o estado correspondente
        int numero = (i % NUM_CIDADES_POR_ESTADO) + 1;     // Determina o número da cidade
        snprintf(cartas[i].codigo, sizeof(cartas[i].codigo), "%c%02d", estado, numero); // Gera o código
        cartas[i].estado = estado; // Armazena a letra do estado

        printf("Estado: %c\n", cartas[i].estado); // Mostra o estado selecionado
        printf("Código da Carta: %s\n", cartas[i].codigo); // Mostra o código gerado

        // Solicita o nome da cidade
        printf("Digite o nome da cidade: ");
        scanf(" %[^\n]s", cartas[i].nome);

        // Solicita a população da cidade
        printf("Digite a população: ");
        scanf("%d", &cartas[i].populacao);

        // Solicita a área da cidade
        printf("Digite a área em km²: ");
        scanf("%f", &cartas[i].area);

        // Solicita o PIB da cidade
        printf("Digite o PIB (em milhões): ");
        scanf("%f", &cartas[i].pib);

        // Solicita o número de pontos turísticos
        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        // Incrementa a quantidade de cartas cadastradas
        (*quantidade)++;

        // Confirmação do cadastro
        printf("\nCarta cadastrada com sucesso!\n");
    }
}

// Função para exibir as cartas cadastradas
void exibirCartas(CartaCidade cartas[], int quantidade) {
    printf("\n=== Cartas Cadastradas ===\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código da Carta: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nome);
        printf("População: %d habitantes\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f milhões\n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("---------------------------\n");
    }
}

// Função principal
int main() {
    // Configura o locale para UTF-8
    setlocale(LC_ALL, ".UTF-8");

    // Configura o console do Windows para aceitar UTF-8
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    CartaCidade cartas[MAX_CARTAS]; // Array para armazenar as cartas
    int quantidade = 0;            // Quantidade de cartas cadastradas

    printf("=== Bem-vindo ao Super Trunfo: Países ===\n");

    // Chama a função para cadastrar as cartas
    cadastrarCartas(cartas, &quantidade);

    // Exibe as cartas cadastradas
    exibirCartas(cartas, quantidade);

    printf("\nObrigado por utilizar o sistema!\n");
    return 0;
}
