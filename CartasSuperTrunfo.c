#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Criando objeto do tipo Carta
typedef struct {
    char codigo[4];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

// Criando método
void calcular_atributos(Carta *c) {
    c->densidade = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
    c->super_poder = c->populacao + c->area + c->pib + c->pontos_turisticos + c->pib_per_capita + (1 / c->densidade);
}

int main() {

    // Declaração de variável
    Carta cartas[2]; // Array com 2 cartas

    // Loop para leitura dos dados
    for (int i = 0; i < 2; i++) {
        printf("\n=== Cadastro da Carta %d ===\n", i + 1);

        printf("Digite o código da Carta: ");
        scanf("%s", cartas[i].codigo);

        printf("Digite a população da Carta: ");
        scanf("%lu", &cartas[i].populacao);

        printf("Digite a área da Carta: ");
        scanf("%f", &cartas[i].area);

        printf("Digite o PIB da Carta: ");
        scanf("%f", &cartas[i].pib);

        printf("Digite o número de pontos turísticos da Carta: ");
        scanf("%d", &cartas[i].pontos_turisticos);

        // Calcula os atributos no momento da leitura
        calcular_atributos(&cartas[i]); 
    }

    // Comparação
    printf("\n===== RESULTADOS =====\n");
    printf("População: %d\n", cartas[0].populacao > cartas[1].populacao);
    printf("Área: %d\n", cartas[0].area > cartas[1].area);
    printf("PIB: %d\n", cartas[0].pib > cartas[1].pib);
    printf("Pontos turísticos: %d\n", cartas[0].pontos_turisticos > cartas[1].pontos_turisticos);
    printf("Densidade Populacional: %d\n", cartas[0].densidade < cartas[1].densidade);
    printf("PIB per Capita: %d\n", cartas[0].pib_per_capita > cartas[1].pib_per_capita);
    printf("Super Poder: %d\n", cartas[0].super_poder > cartas[1].super_poder);

    return 0;
}
