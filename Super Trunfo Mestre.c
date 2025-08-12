#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados do país
typedef struct {
    char nome[30];
    int populacao;       // em milhões
    float area;          // em mil km²
    float densidade;     // hab/km²
    int pib;             // em bilhões de dólares
} Carta;

// Função para imprimir menu de atributos
void mostrarAtributosDisponiveis(int ignorar) {
    for (int i = 1; i <= 4; i++) {
        if (i == ignorar) continue;
        switch (i) {
            case 1: printf("1. População\n"); 
            break;
            case 2: printf("2. Área\n"); 
            break;
            case 3: printf("3. Densidade Demográfica\n"); 
            break;
            case 4: printf("4. PIB\n"); 
            break;
        }
    }
}

// Função para obter valor do atributo selecionado
float obterValorAtributo(Carta carta, int opcao) {
    switch (opcao) {
        case 1: return (float)carta.populacao;
        case 2: return carta.area;
        case 3: return carta.densidade;
        case 4: return (float)carta.pib;
        default: return -1;
    }
}

int main() {
    // Cartas pré-definidas
    Carta carta1 = {"Brasil", 213, 8515.8, 25.0, 2200};
    Carta carta2 = {"Alemanha", 83, 357.4, 232.4, 3840};

    int atributo1, atributo2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2, soma1, soma2;
    int vencedor1, vencedor2;

    printf(" COMPARAÇÃO DE CARTAS DE PAÍSES !!!\n");

    // Escolha do primeiro atributo
    do {
        printf("Escolha o primeiro atributo:\n");
        mostrarAtributosDisponiveis(0);
        scanf("%d", &atributo1);
        if (atributo1 < 1 || atributo1 > 4) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (atributo1 < 1 || atributo1 > 4);

    // Escolha do segundo atributo (não pode ser igual ao primeiro)
    do {
        printf("Escolha o segundo atributo (diferente do primeiro):\n");
        mostrarAtributosDisponiveis(atributo1);
        scanf("%d", &atributo2);
        if (atributo2 < 1 || atributo2 > 4 || atributo2 == atributo1) {
            printf("Opção inválida. Tente novamente.\n");
        }
    } while (atributo2 < 1 || atributo2 > 4 || atributo2 == atributo1);

    // Obter valores dos atributos
    valor1_c1 = obterValorAtributo(carta1, atributo1);
    valor1_c2 = obterValorAtributo(carta2, atributo1);
    valor2_c1 = obterValorAtributo(carta1, atributo2);
    valor2_c2 = obterValorAtributo(carta2, atributo2);

    // Exibir os dados
    printf("\n--- COMPARAÇÃO ---\n");
    printf("País 1: %s\n", carta1.nome);
    printf("País 2: %s\n\n", carta2.nome);

    printf("Atributo 1: ");
    switch (atributo1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("Densidade Demográfica\n"); break;
        case 4: printf("PIB\n"); break;
    }

    printf("  %s: %.2f\n", carta1.nome, valor1_c1);
    printf("  %s: %.2f\n\n", carta2.nome, valor1_c2);

    printf("Atributo 2: ");
    switch (atributo2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("Densidade Demográfica\n"); break;
        case 4: printf("PIB\n"); break;
    }

    printf("  %s: %.2f\n", carta1.nome, valor2_c1);
    printf("  %s: %.2f\n\n", carta2.nome, valor2_c2);

    // Comparação individual com ternário
    vencedor1 = (atributo1 == 3) ? (valor1_c1 < valor1_c2 ? 1 : 2) : (valor1_c1 > valor1_c2 ? 1 : 2);
    vencedor2 = (atributo2 == 3) ? (valor2_c1 < valor2_c2 ? 1 : 2) : (valor2_c1 > valor2_c2 ? 1 : 2);

    // Soma total dos atributos
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("Soma dos Atributos:\n");
    printf("  %s: %.2f\n", carta1.nome, soma1);
    printf("  %s: %.2f\n\n", carta2.nome, soma2);

    printf("Resultado Final:\n");
    if (soma1 > soma2) {
        printf("Vitória de %s!\n", carta1.nome);
    } else if (soma2 > soma1) {
        printf("Vitória de %s!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
