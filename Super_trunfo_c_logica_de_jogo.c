#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as informações de uma carta
typedef struct {
    char estado[3];        // Estado (ex: SP, RJ, MG)
    char codigo[10];       // Código da carta (ex: A01)
    char nome[50];         // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade em bilhões
    int pontosTuristicos;  // Número de pontos turísticos
} Carta;

// Função para calcular a densidade populacional
float calcularDensidade(int populacao, float area) {
    // Retorna a densidade populacional (população / área)
    return (area > 0) ? (float)populacao / area : 0;  
}

// Função para calcular o PIB per capita
float calcularPIBperCapita(float pib, int populacao) {
    // Retorna o PIB per capita (PIB / população)
    return (populacao > 0) ? pib / populacao : 0;  
}

// Função para comparar duas cartas com base em um atributo fixo
void compararCartas(Carta c1, Carta c2) {
    // Atributo escolhido para a comparação. Aqui, estamos comparando a População.
    char atributoEscolhido[] = "População";  

    float valorC1 = 0, valorC2 = 0;
    int criterio = 1; // 1 = maior valor vence, -1 = menor valor vence

    // Determinando qual atributo será comparado
    if (strcmp(atributoEscolhido, "População") == 0) {
        valorC1 = c1.populacao;
        valorC2 = c2.populacao;
    } else if (strcmp(atributoEscolhido, "Área") == 0) {
        valorC1 = c1.area;
        valorC2 = c2.area;
    } else if (strcmp(atributoEscolhido, "PIB") == 0) {
        valorC1 = c1.pib;
        valorC2 = c2.pib;
    } else if (strcmp(atributoEscolhido, "Densidade Populacional") == 0) {
        valorC1 = calcularDensidade(c1.populacao, c1.area);
        valorC2 = calcularDensidade(c2.populacao, c2.area);
        criterio = -1; // Para densidade populacional, o menor valor vence
    } else if (strcmp(atributoEscolhido, "PIB per Capita") == 0) {
        valorC1 = calcularPIBperCapita(c1.pib, c1.populacao);
        valorC2 = calcularPIBperCapita(c2.pib, c2.populacao);
    } else {
        // Caso o atributo não seja válido, exibe uma mensagem de erro
        printf("Atributo inválido para comparação.\n");
        return;
    }

    // Exibindo os valores comparados
    printf("\n===== Comparação: %s =====\n", atributoEscolhido);
    printf("Carta 1 - %s (%s): %.2f\n", c1.nome, c1.estado, valorC1);
    printf("Carta 2 - %s (%s): %.2f\n", c2.nome, c2.estado, valorC2);

    // Determinando o vencedor com base no critério escolhido (maior ou menor)
    if ((criterio == 1 && valorC1 > valorC2)) {
        printf("Resultado: Carta 1 (%s) venceu!\n", c1.nome);
    } else if (valorC1 == valorC2) {
        printf("Resultado: Empate!\n");
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", c2.nome);
    }
}

// Função principal
int main() {
    // Criando duas cartas fixas para a comparação
    Carta carta1 = {"SP", "A01", "São Paulo", 12300000, 1521.0, 699.28, 100};
    Carta carta2 = {"RJ", "A02", "Rio de Janeiro", 6710000, 1200.0, 415.26, 120};

    // Exibindo os detalhes das cartas
    printf("Carta 1: %s (%s)\n", carta1.nome, carta1.estado);
    printf("Carta 2: %s (%s)\n", carta2.nome, carta2.estado);

    // Chamando a função para comparar as duas cartas
    compararCartas(carta1, carta2);

    return 0;
}
