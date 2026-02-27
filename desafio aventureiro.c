#include <stdio.h>

// Definição da estrutura Carta
typedef struct {
    char estado[50];
    char codigo[5];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular a densidade populacional
float calcularDensidadePopulacional(int populacao, float area) {
    return populacao / area;
}

// Função para calcular o PIB per capita
float calcularPibPerCapita(float pib, int populacao) {
    return pib / populacao;
}

// Função para criar uma carta e calcular os valores derivados
Carta criarCarta(char estado[], char codigo[], char nomeCidade[], int populacao, float area, float pib, int pontosTuristicos) {
    Carta c;
    
    // Atribuição dos valores
    sprintf(c.estado, "%s", estado);
    sprintf(c.codigo, "%s", codigo);
    sprintf(c.nomeCidade, "%s", nomeCidade);
    c.populacao = populacao;
    c.area = area;
    c.pib = pib;
    c.pontosTuristicos = pontosTuristicos;
    
    // Cálculo automático dos valores derivados
    c.densidadePopulacional = calcularDensidadePopulacional(populacao, area);
    c.pibPerCapita = calcularPibPerCapita(pib, populacao);

    return c;
}

// Função para exibir os dados de uma carta (agora sem retorno)
void exibirCarta(Carta c) {
    printf("\nCarta:\n");
    printf("Estado: %s\n", c.estado);
    printf("Código: %s\n", c.codigo);
    printf("Cidade: %s\n", c.nomeCidade);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", c.densidadePopulacional);
    printf("PIB per capita: %.2f\n", c.pibPerCapita);
}

int main() {
    // Criando as cartas corretamente
    Carta carta1 = criarCarta("São Paulo", "SP01", "São Paulo", 12300000, 1521.11, 699000.00, 10);
    Carta carta2 = criarCarta("Rio de Janeiro", "RJ02", "Rio de Janeiro", 6775561, 1200.27, 364000.50, 15);

    // Exibindo as cartas
    exibirCarta(carta1);
    exibirCarta(carta2);

    return 0;
}