#include <stdio.h>
// incluindo variantes
// Função para remover o caractere de nova linha ('\n') gerado pelo fgets()
//Por: Rodolfo Assunçao :)
void limpar_nova_linha(char *str) {
    int i = 0;
    while (str[i] != '\0') {  // Percorre a string até encontrar o caractere nulo '\0'
        if (str[i] == '\n') {  // Se encontrar '\n', substitui por '\0' para evitar problemas na exibição
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main() {
    // Declaração das variáveis para armazenar os dados das cartas
    char cidade1[30], cidade2[30];      // Nome do país ou cidade da carta
    char codigo1[10], codigo2[10];      // Código identificador de cada carta
    char nome_cidade1[50], nome_cidade2[50];  // Nome da cidade principal da carta
    int populacao1, populacao2;         // População da cidade
    float area1, area2;                 // Área territorial em km²
    float pib1, pib2;                   // Produto Interno Bruto (PIB) em milhões
    int pontos_turisticos1, pontos_turisticos2;  // Número de pontos turísticos na cidade
    float densidade1, densidade2;       // Densidade populacional (hab/km²)
    float pib_per_capita1, pib_per_capita2;  // PIB per capita
    float soma1, soma2;                 // Soma dos atributos escolhidos para comparação

    // ============================
    // Cadastro da Carta 1
    // ============================
    printf("\n=== Cadastro da Carta 1 ===\n");
    printf("Código da Carta: ");
    scanf(" %9s", codigo1);  // Lê o código da carta (limite de 9 caracteres)
    getchar();  // Remove o caractere de nova linha pendente do buffer de entrada

    printf("Nome da cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);  // Lê o nome da cidade com segurança
    limpar_nova_linha(nome_cidade1);  // Remove a nova linha gerada pelo fgets()

    printf("País/Cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);  // Lê o nome do país ou cidade
    limpar_nova_linha(cidade1);

    printf("População: ");
    scanf("%d", &populacao1);  // Lê a população da cidade

    printf("Área (km²): ");
    scanf("%f", &area1);  // Lê a área territorial em km²

    printf("PIB (milhões): ");
    scanf("%f", &pib1);  // Lê o PIB da cidade

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);  // Lê o número de pontos turísticos

    // Cálculo da densidade demográfica e PIB per capita da Carta 1
    densidade1 = (area1 > 0) ? populacao1 / area1 : 0;  // Evita divisão por zero
    pib_per_capita1 = (populacao1 > 0) ? pib1 / populacao1 : 0;

    // ============================
    // Cadastro da Carta 2
    // ============================
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código da Carta: ");
    scanf(" %9s", codigo2);
    getchar();

    printf("Nome da cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    limpar_nova_linha(nome_cidade2);

    printf("País/Cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    limpar_nova_linha(cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (milhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade demográfica e PIB per capita da Carta 2
    densidade2 = (area2 > 0) ? populacao2 / area2 : 0;
    pib_per_capita2 = (populacao2 > 0) ? pib2 / populacao2 : 0;

    // Cálculo da soma dos atributos escolhidos para comparação
    soma1 = pib_per_capita1 + pontos_turisticos1;
    soma2 = pib_per_capita2 + pontos_turisticos2;

    // ============================
    // Exibição das informações
    // ============================
    printf("\n====================================\n");
    printf("         COMPARAÇÃO DE CARTAS       \n");
    printf("====================================\n");
    printf("Carta 1: %s (%s)  |  Carta 2: %s (%s)\n", nome_cidade1, cidade1, nome_cidade2, cidade2);
    printf("------------------------------------\n");
    printf("%-20s %-10s | %-10s\n", "Atributo", "Carta 1", "Carta 2");
    printf("------------------------------------\n");
    printf("%-20s %-10.2f | %-10.2f\n", "PIB per capita", pib_per_capita1, pib_per_capita2);
    printf("%-20s %-10d | %-10d\n", "Pontos Turísticos", pontos_turisticos1, pontos_turisticos2);
    printf("------------------------------------\n");
    printf("%-20s %-10.2f | %-10.2f\n", "Soma Total", soma1, soma2);
    printf("====================================\n");

    // ============================
    // Determinação do vencedor
    // ============================
    if (soma1 > soma2) {
        printf("🏆 Carta 1 (%s) venceu com %.2f pontos!\n", nome_cidade1, soma1);
    } else if (soma2 > soma1) {
        printf("🏆 Carta 2 (%s) venceu com %.2f pontos!\n", nome_cidade2, soma2);
    } else {
        printf("🤝 Empate! Ambas as cartas têm %.2f pontos.\n", soma1);
    }

    printf("====================================\n");

    return 0;
}
