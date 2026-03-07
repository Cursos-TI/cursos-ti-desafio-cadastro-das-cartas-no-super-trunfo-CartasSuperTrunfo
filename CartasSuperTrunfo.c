#include <stdio.h>
#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 100

// Estrutura que representa uma carta do jogo
typedef struct {
char codigo[4]; // Ex: "A01"
char nome[50]; // Nome da cidade ou país
long populacao; // População
float area; // Área em km²
float pib; // PIB em bilhões
int pontosTuristicos; // Número de pontos turísticos
} Carta;

// Funções auxiliares
float calcularDensidade(Carta c) {
return (c.area > 0) ? (c.populacao / c.area) : 0;
}

float calcularPIBperCapita(Carta c) {
return (c.populacao > 0) ? ((c.pib * 1000000000) / c.populacao) : 0;
}

// Função para comparar duas cartas em um atributo
void compararCartas(Carta c1, Carta c2, int atributo) {
float valor1, valor2;
switch (atributo) {
    case 1: valor1 = c1.populacao; valor2 = c2.populacao; printf("\nComparando População...\n"); break;
    case 2: valor1 = c1.area; valor2 = c2.area; printf("\nComparando Área...\n"); break;
    case 3: valor1 = c1.pib; valor2 = c2.pib; printf("\nComparando PIB...\n"); break;
    case 4: valor1 = c1.pontosTuristicos; valor2 = c2.pontosTuristicos; printf("\nComparando Pontos Turísticos...\n"); break;
    case 5: valor1 = calcularDensidade(c1); valor2 = calcularDensidade(c2); printf("\nComparando Densidade Populacional...\n"); break;
    case 6: valor1 = calcularPIBperCapita(c1); valor2 = calcularPIBperCapita(c2); printf("\nComparando PIB per capita...\n"); break;
    default: printf("Atributo inválido!\n"); return;
}

printf("Carta 1 (%s): %.2f\n", c1.nome, valor1);
printf("Carta 2 (%s): %.2f\n", c2.nome, valor2);

if (valor1 > valor2) {
    printf("Voce Ganhou: %s\n", c1.nome);
} else if (valor2 > valor1) {
    printf("Voce Ganhou: %s\n", c2.nome);
} else {
    printf("O importante e participar!\n");
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
