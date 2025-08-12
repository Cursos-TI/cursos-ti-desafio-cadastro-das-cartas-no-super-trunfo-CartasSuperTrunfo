#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Estrutura que representa uma carta do jogo Super Trunfo
struct Carta {
    char codigo[4];              // Código da carta (ex: A01)
    char nome_pais[50];          // Nome do país
    unsigned long int populacao; // População do país
    double pib;                  // PIB do país (não será usado na comparação)
    float area;                  // Área do país
    int pontos_turisticos;       // Número de pontos turísticos
    float densidade_populacional;// Densidade populacional
    float pib_per_capita;        // PIB per capita
    float super_poder;           // Super Poder da carta
};

// Função para limpar o buffer de entrada
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Função para entrada de dados de uma carta
void input_carta(struct Carta *c) {
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", c->codigo);
    limpar_buffer();

    printf("Digite o nome do país: ");
    fgets(c->nome_pais, sizeof(c->nome_pais), stdin);
    c->nome_pais[strcspn(c->nome_pais, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%lu", &c->populacao);
    limpar_buffer();

    printf("Digite o PIB: ");
    scanf("%lf", &c->pib);
    limpar_buffer();

    printf("Digite a área (em km²): ");
    scanf("%f", &c->area);
    limpar_buffer();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &c->pontos_turisticos);
    limpar_buffer();
}

// Função para calcular propriedades (exceto PIB, que não é usado na comparação)
void calcular_propriedades(struct Carta *c) {
    c->densidade_populacional = c->populacao / c->area;
    c->pib_per_capita = c->pib / c->populacao;
    c->super_poder = c->populacao + c->area + c->pontos_turisticos + c->pib_per_capita + (1 / c->densidade_populacional);
}

// Função para exibir os dados de uma carta
void display_carta(struct Carta c) {
    printf("Código: %s\n", c.codigo);
    printf("Nome do País: %s\n", c.nome_pais);
    printf("População: %lu\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2lf reais\n", c.pib);
    printf("Número de Pontos Turísticos: %d\n", c.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", c.densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", c.pib_per_capita);
    printf("Super Poder: %.2f\n", c.super_poder);
}

// Função auxiliar que retorna o valor numérico do atributo para uma carta
double obter_valor_atributo(struct Carta c, char *atributo) {
    if (strcmp(atributo, "População") == 0)
        return (double)c.populacao;
    else if (strcmp(atributo, "Área") == 0)
        return (double)c.area;
    else if (strcmp(atributo, "Densidade Populacional") == 0)
        return (double)c.densidade_populacional;
    else if (strcmp(atributo, "PIB per Capita") == 0)
        return (double)c.pib_per_capita;
    else if (strcmp(atributo, "Pontos Turísticos") == 0)
        return (double)c.pontos_turisticos;
    else if (strcmp(atributo, "Super Poder") == 0)
        return (double)c.super_poder;
    return 0;
}

// Função para exibir o menu e obter a escolha do usuário (6 opções)
int exibir_menu(char *mensagem, int *opcoes_disponiveis, char *atributos[]) {
    int escolha;
    printf("\n%s\n", mensagem);
    for (int i = 0; i < 6; i++) {
        if (opcoes_disponiveis[i]) {
            printf("%d. %s\n", i + 1, atributos[i]);
        }
    }
    printf("Escolha uma opção (1-6): ");
    scanf("%d", &escolha);
    return escolha;
}

// Função para comparar cartas com base nos atributos escolhidos,
// formatando a saída conforme solicitado.
void comparar_cartas_usuario(struct Carta c1, struct Carta c2, int escolha1, int escolha2, char *atributos[]) {
    char *atributo1 = atributos[escolha1 - 1];
    char *atributo2 = atributos[escolha2 - 1];

    // Obter os valores de cada atributo para cada carta
    double valor1_a1 = obter_valor_atributo(c1, atributo1);
    double valor2_a1 = obter_valor_atributo(c2, atributo1);
    double valor1_a2 = obter_valor_atributo(c1, atributo2);
    double valor2_a2 = obter_valor_atributo(c2, atributo2);

    double soma_c1 = valor1_a1 + valor1_a2;
    double soma_c2 = valor2_a1 + valor2_a2;

    // Exibir os nomes dos países e os atributos comparados
    printf("\nComparação entre %s e %s\n", c1.nome_pais, c2.nome_pais);
    printf("Atributos selecionados: %s e %s\n\n", atributo1, atributo2);

    // Exibir os valores de cada atributo para cada carta
    printf("%s: %s (%.2lf) + %s (%.2lf) = %.2lf\n",
           c1.nome_pais, atributo1, valor1_a1, atributo2, valor1_a2, soma_c1);
    printf("%s: %s (%.2lf) + %s (%.2lf) = %.2lf\n",
           c2.nome_pais, atributo1, valor2_a1, atributo2, valor2_a2, soma_c2);
           
    // Determinar e exibir o vencedor
    if (soma_c1 > soma_c2)
        printf("\nVencedor: %s!\n", c1.nome_pais);
    else if (soma_c1 < soma_c2)
        printf("\nVencedor: %s!\n", c2.nome_pais);
    else
        printf("\nResultado: Empate geral!\n");
}

// Função para comparar cartas automaticamente com base em todos os atributos
void comparar_cartas_automaticamente(struct Carta c1, struct Carta c2, char *atributos[]) {
    double soma_c1 = 0, soma_c2 = 0;

    for (int i = 0; i < 6; i++) {
        double valor1 = obter_valor_atributo(c1, atributos[i]);
        double valor2 = obter_valor_atributo(c2, atributos[i]);
        soma_c1 += valor1;
        soma_c2 += valor2;
    }

    printf("\nComparação Automática entre %s e %s\n", c1.nome_pais, c2.nome_pais);
    printf("%s: Soma dos Atributos = %.2lf\n", c1.nome_pais, soma_c1);
    printf("%s: Soma dos Atributos = %.2lf\n", c2.nome_pais, soma_c2);

    if (soma_c1 > soma_c2)
        printf("\nVencedor: %s!\n", c1.nome_pais);
    else if (soma_c1 < soma_c2)
        printf("\nVencedor: %s!\n", c2.nome_pais);
    else
        printf("\nResultado: Empate geral!\n");
}

int main() {
    // Removemos "PIB" da lista de atributos para comparação
    char *atributos[] = {"População", "Área", "Densidade Populacional", "PIB per Capita", "Pontos Turísticos", "Super Poder"};

    srand(time(NULL));

    struct Carta carta1, carta2;

    printf("Cadastro da Carta 1:\n");
    input_carta(&carta1);
    calcular_propriedades(&carta1);

    printf("\nCadastro da Carta 2:\n");
    input_carta(&carta2);
    calcular_propriedades(&carta2);

    while (1) {
        printf("\nCarta 1:\n");
        display_carta(carta1);

        printf("\nCarta 2:\n");
        display_carta(carta2);

        int escolha1, escolha2;
        int opcoes_disponiveis[6] = {1, 1, 1, 1, 1, 1};

        escolha1 = exibir_menu("Escolha o primeiro atributo para comparar:", opcoes_disponiveis, atributos);
        if (escolha1 < 1 || escolha1 > 6) {
            printf("Escolha inválida! Tente novamente.\n");
            continue;
        }
        opcoes_disponiveis[escolha1 - 1] = 0;

        escolha2 = exibir_menu("Escolha o segundo atributo para comparar:", opcoes_disponiveis, atributos);
        if (escolha2 < 1 || escolha2 > 6 || escolha2 == escolha1) {
            printf("Escolha inválida! Tente novamente.\n");
            continue;
        }

        char modo_comparacao;
        printf("Deseja comparar automaticamente? (s/n): ");
        limpar_buffer();
        scanf("%c", &modo_comparacao);

        if (modo_comparacao == 's' || modo_comparacao == 'S') {
            comparar_cartas_automaticamente(carta1, carta2, atributos);
        } else {
            comparar_cartas_usuario(carta1, carta2, escolha1, escolha2, atributos);
        }

        char continuar;
        printf("Deseja continuar? (s/n): ");
        limpar_buffer();
        scanf("%c", &continuar);
        if (continuar == 'n' || continuar == 'N') break;

        char adicionar_novas;
        printf("Deseja adicionar novas cartas? (s/n): ");
        limpar_buffer();
        scanf("%c", &adicionar_novas);
        if (adicionar_novas == 's' || adicionar_novas == 'S') {
            printf("Cadastro da Carta 1:\n");
            input_carta(&carta1);
            calcular_propriedades(&carta1);

            printf("\nCadastro da Carta 2:\n");
            input_carta(&carta2);
            calcular_propriedades(&carta2);
        }
    }
    return 0;
}
