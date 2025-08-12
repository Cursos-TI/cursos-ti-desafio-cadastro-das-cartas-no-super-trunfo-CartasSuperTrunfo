// TEMA 2 - Super Trunfo em C: desenvolvendo a lógica do jogo
// Desafio: nível mestre - Implementando Comparações Avançadas com Atributos Múltiplos

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para usar exit() em caso de erro

// Função para obter o nome do atributo com base na escolha numérica
const char* getNomeAtributo(int escolha) {
    switch (escolha) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Número de Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Atributo Desconhecido";
    }
}

// Função para obter o valor numérico de um atributo para uma carta
float getValorAtributo(int escolha, int populacao, float area, float pib, int pontostur, float densidade, float pibPerCapita) {
    switch (escolha) {
        case 1: return (float)populacao;
        case 2: return area;
        case 3: return pib;
        case 4: return (float)pontostur;
        case 5: return densidade; // Densidade já calculada
        // pibPerCapita não é uma opção no menu, mas mantido no switch por completude
        case 6: return pibPerCapita;
        default: return 0; // Valor padrão para atributo desconhecido
    }
}

int main() {
    // Declaração de variáveis 1 (Carta 1)
    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontostur1;

    // Declaração de variáveis 2 (Carta 2)
    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontostur2;

    // Variáveis para as escolhas dos atributos no menu
    int escolha_atributo1 = 0;
    int escolha_atributo2 = 0;

    // --- Cadastro das Cartas (Mantido do código anterior) ---
    // Note: A limpeza do buffer após scanf é crucial para ler strings corretamente
    printf("--- Cadastro da 1ª carta ---\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);
    while (getchar() != '\n'); // Limpa buffer

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo1);
    while (getchar() != '\n'); // Limpa buffer

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    while (getchar() != '\n'); // Limpa buffer

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    while (getchar() != '\n'); // Limpa buffer

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    while (getchar() != '\n'); // Limpa buffer

    printf("Digite o PIB da cidade (em bilhões de R$): R$ ");
    scanf("%f", &pib1);
    while (getchar() != '\n'); // Limpa buffer

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontostur1);
    while (getchar() != '\n'); // Limpa buffer


    printf("\n--- Cadastro da 2ª carta ---\n");

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);
    while (getchar() != '\n'); // Limpa buffer

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
     while (getchar() != '\n'); // Limpa buffer

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
     while (getchar() != '\n'); // Limpa buffer

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
     while (getchar() != '\n'); // Limpa buffer

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
     while (getchar() != '\n'); // Limpa buffer

    printf("Digite o PIB da cidade (em bilhões de R$): R$ ");
    scanf("%f", &pib2);
     while (getchar() != '\n'); // Limpa buffer

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontostur2);
    while (getchar() != '\n'); // Limpa buffer


    // --- Cálculos Derivados (Mantido do código anterior) ---
    // Calcular densidade populacional
    float densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0; // Evita divisão por zero
    float densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0; // Evita divisão por zero

    // Calcular PIB per capita (não usado diretamente na comparação multi-atributo, mas mantido)
    float pibPerCapita1 = (populacao1 > 0) ? (pib1 * 1e9) / populacao1 : 0; // Evita divisão por zero
    float pibPerCapita2 = (populacao2 > 0) ? (pib2 * 1e9) / populacao2 : 0; // Evita divisão por zero

    // --- Menu Dinâmico para Escolha de Dois Atributos ---

    int escolha_valida = 0;

    // Primeira escolha
    while (!escolha_valida) {
        printf("\n--- Escolha o PRIMEIRO atributo para comparar ---\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Demográfica\n");
        printf("Digite o número do atributo desejado: ");
        if (scanf("%d", &escolha_atributo1) != 1) {
            printf("Entrada inválida. Digite um número.\n");
            while (getchar() != '\n'); // Limpa buffer
        } else if (escolha_atributo1 >= 1 && escolha_atributo1 <= 5) {
            escolha_valida = 1;
            while (getchar() != '\n'); // Limpa buffer
        } else {
            printf("Opção inválida! Tente novamente.\n");
             while (getchar() != '\n'); // Limpa buffer
        }
    }

    escolha_valida = 0; // Reset para a segunda escolha

    // Segunda escolha (menu dinâmico)
    while (!escolha_valida) {
        printf("\n--- Escolha o SEGUNDO atributo para comparar ---\n");
        // Exibe apenas as opções que não foram escolhidas primeiro
        if (escolha_atributo1 != 1) printf("1 - População\n");
        if (escolha_atributo1 != 2) printf("2 - Área\n");
        if (escolha_atributo1 != 3) printf("3 - PIB\n");
        if (escolha_atributo1 != 4) printf("4 - Número de Pontos Turísticos\n");
        if (escolha_atributo1 != 5) printf("5 - Densidade Demográfica\n");
        printf("Digite o número do atributo desejado: ");
         if (scanf("%d", &escolha_atributo2) != 1) {
            printf("Entrada inválida. Digite um número.\n");
            while (getchar() != '\n'); // Limpa buffer
        } else if (escolha_atributo2 >= 1 && escolha_atributo2 <= 5 && escolha_atributo2 != escolha_atributo1) {
            escolha_valida = 1;
            while (getchar() != '\n'); // Limpa buffer
        } else {
             if (escolha_atributo2 == escolha_atributo1) {
                 printf("Este atributo já foi escolhido. Escolha outro.\n");
             } else {
                printf("Opção inválida! Tente novamente.\n");
             }
             while (getchar() != '\n'); // Limpa buffer
        }
    }

    // --- Obtendo os Valores dos Atributos Escolhidos ---
    float valor_atributo1_carta1 = getValorAtributo(escolha_atributo1, populacao1, area1, pib1, pontostur1, densidade1, pibPerCapita1);
    float valor_atributo1_carta2 = getValorAtributo(escolha_atributo1, populacao2, area2, pib2, pontostur2, densidade2, pibPerCapita2);

    float valor_atributo2_carta1 = getValorAtributo(escolha_atributo2, populacao1, area1, pib1, pontostur1, densidade1, pibPerCapita1);
    float valor_atributo2_carta2 = getValorAtributo(escolha_atributo2, populacao2, area2, pib2, pontostur2, densidade2, pibPerCapita2);

    // --- Cálculo da Soma dos Atributos ---
    float soma_carta1 = valor_atributo1_carta1 + valor_atributo2_carta1;
    float soma_carta2 = valor_atributo1_carta2 + valor_atributo2_carta2;

    // --- Exibição Clara do Resultado e Declaração do Vencedor ---
    printf("\n--- Resultado da Comparação Avançada ---\n");
    printf("Cidades: %s vs %s\n", nomeCidade1, nomeCidade2);

    // Exibe os detalhes do primeiro atributo escolhido
    printf("\nPrimeiro Atributo: %s\n", getNomeAtributo(escolha_atributo1));
    printf("  Valor %s: %.2f\n", nomeCidade1, valor_atributo1_carta1);
    printf("  Valor %s: %.2f\n", nomeCidade2, valor_atributo1_carta2);
    // Para densidade, menor valor ganha, para outros, maior valor ganha
     if (escolha_atributo1 == 5) { // Densidade Demográfica
         if (valor_atributo1_carta1 < valor_atributo1_carta2) printf("  %s leva vantagem neste atributo.\n", nomeCidade1);
         else if (valor_atributo1_carta2 < valor_atributo1_carta1) printf("  %s leva vantagem neste atributo.\n", nomeCidade2);
         else printf("  Empate neste atributo.\n");
     } else { // Outros atributos
         if (valor_atributo1_carta1 > valor_atributo1_carta2) printf("  %s leva vantagem neste atributo.\n", nomeCidade1);
         else if (valor_atributo1_carta2 > valor_atributo1_carta1) printf("  %s leva vantagem neste atributo.\n", nomeCidade2);
         else printf("  Empate neste atributo.\n");
     }


    // Exibe os detalhes do segundo atributo escolhido
    printf("\nSegundo Atributo: %s\n", getNomeAtributo(escolha_atributo2));
    printf("  Valor %s: %.2f\n", nomeCidade1, valor_atributo2_carta1);
    printf("  Valor %s: %.2f\n", nomeCidade2, valor_atributo2_carta2);
     if (escolha_atributo2 == 5) { // Densidade Demográfica
         if (valor_atributo2_carta1 < valor_atributo2_carta2) printf("  %s leva vantagem neste atributo.\n", nomeCidade1);
         else if (valor_atributo2_carta2 < valor_atributo2_carta1) printf("  %s leva vantagem neste atributo.\n", nomeCidade2);
         else printf("  Empate neste atributo.\n");
     } else { // Outros atributos
         if (valor_atributo2_carta1 > valor_atributo2_carta2) printf("  %s leva vantagem neste atributo.\n", nomeCidade1);
         else if (valor_atributo2_carta2 > valor_atributo2_carta1) printf("  %s leva vantagem neste atributo.\n", nomeCidade2);
         else printf("  Empate neste atributo.\n");
     }


    printf("\n--- Soma dos Atributos Escolhidos ---\n");
    printf("Soma total %s: %.2f\n", nomeCidade1, soma_carta1);
    printf("Soma total %s: %.2f\n", nomeCidade2, soma_carta2);

    // Declaração do Vencedor ou Empate com base na soma total
    if (soma_carta1 > soma_carta2) {
        printf("\n--- VENCEDOR: %s ---\n", nomeCidade1);
    } else if (soma_carta1 < soma_carta2) {
        printf("\n--- VENCEDOR: %s ---\n", nomeCidade2);
    } else {
        printf("\n--- EMPATE! ---\n");
    }

    return 0;
}
