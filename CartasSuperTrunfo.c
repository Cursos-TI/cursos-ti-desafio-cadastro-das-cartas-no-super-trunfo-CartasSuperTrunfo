#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {


    // Declaração das variáveis para os atributos das cidades

    int populacao, pontosturisticos, populacao2, pontosturisticos2; 
    float area, pib, area2, pib2;
    char estado[50], cidade[50], codigo[10],estado2[50], cidade2[50], codigo2[10];


    // requerimentos ao usuário para 1ª carta:

    printf("Digite o nome do 1º estado: ");
    scanf("%s", estado);

    printf("Digite o nome da 1ª cidade: ");
    scanf(" %[^\n]", cidade); // "%[^\n]" lê até a quebra de linha (nome com espaços) -- vi em um commit de um colega aqui

    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);


    // requerimentos ao usuário para 2ª carta:

    printf("\nDigite o nome do 2º estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da 2ª cidade: ");
    scanf("%s", cidade2);

    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib2);

    // exibição 1ª e 2ª cartas:

    printf("\n\n1ª Carta de Cidade:\nEstado: %s\nCidade: %s\nPopulação: %d\nPontos Turísticos: %d\nÁrea da cidade: %.2fm²\nPIB da cidade: R$%.0f\n\n", estado, cidade, populacao, pontosturisticos, area, pib);

    
    printf("2ª Carta de Cidade:\nEstado: %s\nCidade: %s\nPopulação: %d\nPontos Turísticos: %d\nÁrea da cidade: %.2fm²\nPIB da cidade: R$%.0f\n\n", estado2, cidade2, populacao2, pontosturisticos2, area2, pib2);



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
