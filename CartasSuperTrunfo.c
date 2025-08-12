#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo_cidade;
    char nome[50];
    float populacao;
    float area;
    float pib;
    int qtd_pontos_turisticos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Cadastro de uma Carta de Cidade.\n");

    printf("Digite o Código da Cidade: ");
    scanf("%d", &codigo_cidade);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49s", nome);

    printf("Digite a População da Cidade (em Milhões): ");
    scanf("%f", &populacao);

    printf("Digite a Área da Cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib);

    printf("Digite a Quantidade de Pontos Turisticos da Cidade: ");
    scanf("%d", &qtd_pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("--------- Carta da Cidade ---------\n");
    printf("Cidade: %s\n", nome);
    printf("Código: %d\n", codigo_cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Quantidade de Pontos Turisticos: %d\n", qtd_pontos_turisticos);
    printf("-----------------------------------\n");

    return 0;
}
