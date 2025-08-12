#include <stdio.h>


int main() {

// Declaração de variáveis para a primeira carta
char estado1;
char codigo1[4];  // Exemplo: "A01"
char nomeCidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

// Entrada de dados da primeira carta
printf("Digite o estado da primeira carta (A-H):A ");
scanf(" %c", &estado1);

printf("Digite o código da primeira carta (ex: A01):A01 ");
scanf("%s", codigo1);

printf("Digite o nome da cidade da primeira carta:Rio de Janeiro ");
scanf(" %[^\n]", nomeCidade1);

printf("Digite a população da cidade da primeira carta:6775561 ");
scanf("%d", &populacao1);

printf("Digite a área da cidade da primeira carta (km²):1200.27 ");
scanf("%f", &area1);

printf("Digite o PIB da cidade da primeira carta (em bilhões de reais):5623478999213 ");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos da cidade da primeira carta:15 ");
scanf("%d", &pontosTuristicos1);

// Declaração de variáveis para a segunda carta
char estado2;
char codigo2[4];  // Exemplo: "B02"
char nomeCidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

// Entrada de dados da segunda carta
printf("\nDigite o estado da segunda carta (A-H):B ");
scanf(" %c", &estado2);

printf("Digite o código da segunda carta (ex: B02):B02 ");
scanf("%s", codigo2);

printf("Digite o nome da cidade da segunda carta:São Paulo ");
scanf(" %[^\n]", nomeCidade2);

printf("Digite a população da cidade da segunda carta:12300000 ");
scanf("%d", &populacao2);

printf("Digite a área da cidade da segunda carta (km²):1521.11 ");
scanf("%f", &area2);

printf("Digite o PIB da cidade da segunda carta (em bilhões de reais):3000000000000 ");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos da cidade da segunda carta:10 ");
scanf("%d", &pontosTuristicos2);

// Exibição dos dados das cartas
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    






return 0;
}