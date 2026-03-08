#include <stdio.h>

#include <string.h>

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado[20];
    char codigo[10];
    char nome_cidade[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

int main() {
    // --- 1. Definição do Atributo de Comparação ---
    // Escolha diretamente no código qual atributo será comparado.
    // 1 = População, 2 = Área, 3 = PIB, 4 = Densidade, 5 = PIB per Capita
    int atributo_escolhido = 1; 

    // --- 2. Cadastro das Cartas (Dados Pré-definidos) ---
    Carta carta1, carta2;

    // Inicialização da Carta 1 (Exemplo: São Paulo)
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "SP001");
    strcpy(carta1.nome_cidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 750000000000.00;
    carta1.pontos_turisticos = 150;

    // Inicialização da Carta 2 (Exemplo: Rio de Janeiro)
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "RJ001");
    strcpy(carta2.nome_cidade, "Rio de Janeiro");
    carta2.populacao = 6700000;
    carta2.area = 1221.00;
    carta2.pib = 350000000000.00;
    carta2.pontos_turisticos = 120;

    // --- 3. Cálculo de Atributos Derivados ---
    // Evitar divisão por zero (embora improvável com dados reais)
    if (carta1.area > 0) {
        carta1.densidade_populacional = (float)carta1.populacao / carta1.area;
    } else {
        carta1.densidade_populacional = 0;
    }
    if (carta1.populacao > 0) {
        carta1.pib_per_capita = carta1.pib / carta1.populacao;
    } else {
        carta1.pib_per_capita = 0;
    }

    if (carta2.area > 0) {
        carta2.densidade_populacional = (float)carta2.populacao / carta2.area;
    } else {
        carta2.densidade_populacional = 0;
    }
    if (carta2.populacao > 0) {
        carta2.pib_per_capita = carta2.pib / carta2.populacao;
    } else {
        carta2.pib_per_capita = 0;
    }

    // --- 4. Exibição dos Dados das Cartas ---
    printf("=== Comparação de Cartas do Super Trunfo ===\n\n");
    
    // Função auxiliar de impressão para manter o código limpo
    printf("Carta 1 - %s (%s): População: %d | Área: %.2f km² | PIB: R$ %.2f\n", 
           carta1.nome_cidade, carta1.estado, carta1.populacao, carta1.area, carta1.pib);
    printf("Carta 2 - %s (%s): População: %d | Área: %.2f km² | PIB: R$ %.2f\n", 
           carta2.nome_cidade, carta2.estado, carta2.populacao, carta2.area, carta2.pib);
    printf("\n--- Detalhes Calculados ---\n");
    printf("Carta 1 - Densidade: %.2f hab/km² | PIB per Capita: R$ %.2f\n", 
           carta1.densidade_populacional, carta1.pib_per_capita);
    printf("Carta 2 - Densidade: %.2f hab/km² | PIB per Capita: R$ %.2f\n", 
           carta2.densidade_populacional, carta2.pib_per_capita);

    // --- 5. Lógica de Comparação ---
    // Variáveis para armazenar os valores comparados
    float valor1 = 0, valor2 = 0;
    const char *nome_atributo = "";
    int vencedor = 0; // 0 = Empate, 1 = Carta 1, 2 = Carta 2

    // Seleciona o atributo e os valores correspondentes
    if (atributo_escolhido == 1) {
        nome_atributo = "População";
        valor1 = (float)carta1.populacao;
        valor2 = (float)carta2.populacao;
    } else if (atributo_escolhido == 2) {
        nome_atributo = "Área";
        valor1 = carta1.area;
        valor2 = carta2.area;
    } else if (atributo_escolhido == 3) {
        nome_atributo = "PIB";
        valor1 = carta1.pib;
        valor2 = carta2.pib;
    } else if (atributo_escolhido == 4) {
        nome_atributo = "Densidade Populacional";
        valor1 = carta1.densidade_populacional;
        valor2 = carta2.densidade_populacional;
    } else if (atributo_escolhido == 5) {
        nome_atributo = "PIB per Capita";
        valor1 = carta1.pib_per_capita;
        valor2 = carta2.pib_per_capita;
    } else {
        printf("Atributo inválido selecionado.\n");
        return 1;
    }

    // Exibe o cabeçalho da comparação
    printf("\nComparação de cartas (Atributo: %s):\n", nome_atributo);
    printf("Carta 1 - %s: %.2f\n", carta1.nome_cidade, valor1);
    printf("Carta 2 - %s: %.2f\n", carta2.nome_cidade, valor2);

    // Determina o vencedor com base na regra do atributo
    // Regra Geral: Maior valor vence.
    // Exceção: Densidade Populacional (Menor valor vence).
    
    if (atributo_escolhido == 4) {
        // Lógica para Densidade (Menor é melhor)
        if (valor1 < valor2) {
            vencedor = 1;
        } else if (valor2 < valor1) {
            vencedor = 2;
        } else {
            vencedor = 0;
        }
    } else {
        // Lógica para os demais atributos (Maior é melhor)
        if (valor1 > valor2) {
            vencedor = 1;
        } else if (valor2 > valor1) {
            vencedor = 2;
        } else {
            vencedor = 0;
        }
    }

    // --- 6. Exibição do Resultado ---
    printf("\nResultado: ");
    if (vencedor == 1) {
        printf("Carta 1 (%s) venceu!\n", carta1.nome_cidade);
    } else if (vencedor == 2) {
        printf("Carta 2 (%s) venceu!\n", carta2.nome_cidade);
    } else {
        printf("Empate! Os valores são iguais.\n");
    }

    return 0;
}

   
