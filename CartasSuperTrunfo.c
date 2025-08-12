#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Variáveis para a primeira carta
    int populacao1, pontosturisticos1;
    char estado1[30], nome1[30], codigo1[2];
    float PIB1, area1;

    // Variáveis para a segunda carta
    int populacao2, pontosturisticos2;
    char estado2[30], nome2[30], codigo2[2];
    float PIB2, area2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");

    printf("Em qual Estado está a cidade?\n");
    scanf(" %s", estado1);

    printf("Qual o nome da cidade?\n");
    scanf("%s", nome1);

    printf("Digite um código de A a H e um número de 1 a 8 para registrar a carta, como A1: \n");
    scanf("%s", codigo1);
    
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao1);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB1);

    printf("Quantos pontos turísticos tem a cidade?\n");
    scanf("%d", &pontosturisticos1);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area1);

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta:\n");

    printf("Em qual Estado está a cidade?\n");
    scanf(" %s", estado2);

    printf("Qual o nome da cidade?\n");
    scanf("%s", nome2);

    printf("Digite um código de A a H e um número de 1 a 8 para registrar a carta, como A1: \n");
    scanf("%s", codigo2);
    
    printf("Qual a população da cidade?\n");
    scanf("%d", &populacao2);

    printf("Qual o PIB da cidade?\n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos tem a cidade?\n");
    scanf("%d", &pontosturisticos2);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area2);

    // Exibição dos Dados das Cartas:
    printf("Dados da primeira carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nome1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Área: %f\n", area1);

    printf("Dados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nome2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Área: %f\n", area2);
  

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    return 0;
}
