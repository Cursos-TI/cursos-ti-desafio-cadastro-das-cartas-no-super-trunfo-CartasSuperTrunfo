#include <stdio.h>

int main() {
    // Definindo estrutura da carta
    struct Carta {
        char codigo[6];           // Exemplo: A01 ou ABC12
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
    };

    // Declarando duas cartas
    struct Carta carta1;
    struct Carta carta2;

    // Entrada de dados da carta 1
    printf("Digite o código da carta 1 (ex: A01): ");
    scanf(" %s", carta1.codigo);
    printf("Digite a população da carta 1: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área da carta 1: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &carta1.pib);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Entrada de dados da carta 2
    printf("\nDigite o código da carta 2 (ex: B03): ");
    scanf(" %s", carta2.codigo);
    printf("Digite a população da carta 2: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área da carta 2: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &carta2.pib);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Saída dos dados da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", carta1.codigo);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);

    // Saída dos dados da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", carta2.codigo);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
