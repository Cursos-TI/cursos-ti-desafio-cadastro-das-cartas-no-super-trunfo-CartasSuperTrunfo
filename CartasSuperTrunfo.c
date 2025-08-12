#include <stdio.h>
#include <string.h>
#include <locale.h>

// Função para limpar o buffer
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Mostrar o nome do atributo
const char* nomeAtributo(int opcao) {
    switch (opcao) {
        case 1: return "População";
        case 2: return "Área";
        case 3: return "PIB";
        case 4: return "Pontos Turísticos";
        case 5: return "Densidade Demográfica";
        default: return "Desconhecido";
    }
}

// Obter o valor do atributo
float obterValor(int atributo, int pop, float area, float pib, int pontos, float densidade) {
    switch (atributo) {
        case 1: return (float)pop;
        case 2: return area;
        case 3: return pib;
        case 4: return (float)pontos;
        case 5: return densidade;
        default: return 0;
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char cidade1[50], cidade2[50];
    int pop1, pop2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float dens1, dens2;

    // Entrada dados carta 1
    printf("Cadastro da primeira carta:\n");
    printf("Nome da cidade: ");
    fgets(cidade1, 50, stdin); cidade1[strcspn(cidade1, "\n")] = '\0';
    printf("População: "); scanf("%d", &pop1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Nº de pontos turísticos: "); scanf("%d", &pontos1);
    dens1 = (area1 != 0) ? pop1 / area1 : 0;
    limparBuffer();

    // Entrada dados carta 2
    printf("\nCadastro da segunda carta:\n");
    printf("Nome da cidade: ");
    fgets(cidade2, 50, stdin); cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("População: "); scanf("%d", &pop2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Nº de pontos turísticos: "); scanf("%d", &pontos2);
    dens2 = (area2 != 0) ? pop2 / area2 : 0;

    int escolha1, escolha2;

    // Primeiro menu
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Sua escolha: ");
    scanf("%d", &escolha1);

    // Segundo menu (dinâmico)
    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i != escolha1)
            printf("%d - %s\n", i, nomeAtributo(i));
    }
    printf("Sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2 || escolha1 < 1 || escolha1 > 5 || escolha2 < 1 || escolha2 > 5) {
        printf("\nOpções inválidas. Encerrando programa.\n");
        return 1;
    }

    float val1_attr1 = obterValor(escolha1, pop1, area1, pib1, pontos1, dens1);
    float val2_attr1 = obterValor(escolha1, pop2, area2, pib2, pontos2, dens2);
    float val1_attr2 = obterValor(escolha2, pop1, area1, pib1, pontos1, dens1);
    float val2_attr2 = obterValor(escolha2, pop2, area2, pib2, pontos2, dens2);

    // Comparação atributo 1
    int resultado1 = (escolha1 == 5) ?  // densidade é invertido
        (val1_attr1 < val2_attr1 ? 1 : val1_attr1 > val2_attr1 ? 2 : 0)
        :
        (val1_attr1 > val2_attr1 ? 1 : val1_attr1 < val2_attr1 ? 2 : 0);

    // Comparação atributo 2
    int resultado2 = (escolha2 == 5) ?
        (val1_attr2 < val2_attr2 ? 1 : val1_attr2 > val2_attr2 ? 2 : 0)
        :
        (val1_attr2 > val2_attr2 ? 1 : val1_attr2 < val2_attr2 ? 2 : 0);

    // Soma final
    float soma1 = val1_attr1 + val1_attr2;
    float soma2 = val2_attr1 + val2_attr2;

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");
    printf("%s:\n  %s = %.2f\n  %s = %.2f\n  Soma = %.2f\n\n", cidade1, nomeAtributo(escolha1), val1_attr1, nomeAtributo(escolha2), val1_attr2, soma1);
    printf("%s:\n  %s = %.2f\n  %s = %.2f\n  Soma = %.2f\n", cidade2, nomeAtributo(escolha1), val2_attr1, nomeAtributo(escolha2), val2_attr2, soma2);

    // Resultado final
    if (soma1 > soma2) {
        printf("\nResultado: %s venceu!\n", cidade1);
    } else if (soma2 > soma1) {
        printf("\nResultado: %s venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}