#include <stdio.h>

int main() {
    // População da cidade
    int populacao = 2000000;  
    // Pontos turísticos
    int turistico = 55;
    // PIB da cidade
    float pib = 300000.0; //
    // Área da cidade em quilômetros quadrados
    float area = 1.5000; 
    // Estado da carta
    char estado[7] = "Paraná"; 
    // Código da carta
    char codigo[6] = "000457"; 
    // Nome da cidade
    char nome[9] = "Curitiba"; 

    printf("A população do %s é: %d\n", nome, populacao);
    printf("Pontos turísticos: %d\n", turistico);
    printf("PIB da cidade: %.2f\n", pib);
    printf("Área da cidade: %.4f km²\n", area);
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo);

    return 0;
}
