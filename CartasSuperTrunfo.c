#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Novato


int main() {

    char estado;
    char codigo[3];
    char cidade[20];
    float area;
    float pib;
    int pontosTuristicos;
 
    //coletando dados
    printf("Digite a primeira letra de seu Estado:\n");
    scanf(" %c", &estado);
    printf("Digite o código de 01 a 04:\n");
    scanf("%2s", &codigo);
    printf("Digite o nome de sua cidade:\n");
    scanf("%19s", &cidade);
    printf("Digite a área de sua cidade em km²:\n");
    scanf(" %f", &area);
    printf("Digite o PIB de sua cidade:\n");
    scanf(" %f", &pib);
    printf("Digite o número de pontos turísticos de sua cidade:\n");
    scanf(" %d", &pontosTuristicos);

    //imprimindo dados
    printf("\nSeu Estado é: %c\n", estado);
    printf("Seu código é: %c%s\n", estado, codigo);
    printf("Sua cidade é: %s\n", cidade);
    printf("A área da sua cidade é: %.2f km²\n", area);
    printf("O PIB de sua cidade é: %.2f\n", pib);
    printf("O número de pontos turísticos são: %d\n\n", pontosTuristicos);

    return 0;
}
