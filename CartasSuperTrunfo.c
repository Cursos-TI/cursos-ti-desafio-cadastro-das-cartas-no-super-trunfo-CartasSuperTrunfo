#include <stdio.h>
#include <stdlib.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    int atributo1, atributo2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    float soma1, soma2;

    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    printf("Digite a area (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    printf("Digite a area (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    printf("\n=== Escolha dois atributos para comparar ===\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade Populacional (quanto menor, melhor)\n6 - PIB per Capita\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &atributo1);
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
    } while (atributo2 == atributo1);

    float valores[6][2] = {{populacao1, populacao2}, {area1, area2}, {pib1, pib2},
                            {turistico1, turistico2}, {densidade1, densidade2}, {pibPerCapita1, pibPerCapita2}};

    valor1_carta1 = valores[atributo1 - 1][0];
    valor1_carta2 = valores[atributo1 - 1][1];
    valor2_carta1 = valores[atributo2 - 1][0];
    valor2_carta2 = valores[atributo2 - 1][1];

    soma1 = valor1_carta1 + valor2_carta1;
    soma2 = valor1_carta2 + valor2_carta2;

    printf("\n=== Resultado da Comparação ===\n");
    printf("%s (%.2f, %.2f) x %s (%.2f, %.2f)\n", cidade1, valor1_carta1, valor2_carta1, cidade2, valor1_carta2, valor2_carta2);
    printf("Soma dos atributos: %.2f x %.2f\n", soma1, soma2);

    if (soma1 > soma2) {
        printf("A carta 1 (%s) venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("A carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
