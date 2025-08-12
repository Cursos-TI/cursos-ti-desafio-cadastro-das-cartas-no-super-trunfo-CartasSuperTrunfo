#include <stdio.h>

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char codigo[3];
    char nome[50];
    double populacao;
    double area;
    double PIB;
    int pontos_turisticos;
    float densidade;
    float PIB_per_capita;
} Cidade;

// Função para calcular a densidade e PIB per capita
void calcular_propriedades(Cidade* cidade) {
    cidade->densidade = cidade->populacao / cidade->area;
    cidade->PIB_per_capita = cidade->PIB / cidade->populacao;
}

// Função para calcular o "Super Poder" (soma das propriedades)
float calcular_super_poder(Cidade cidade) {
    return cidade.populacao + cidade.area + cidade.PIB + cidade.pontos_turisticos + cidade.densidade + cidade.PIB_per_capita;
}

// Função para coletar os dados de uma cidade
void cadastrar_cidade(Cidade* cidade) {
    printf("Digite o codigo da cidade: ");
    scanf("%2s", cidade->codigo);
    while (getchar() != '\n'); // Limpa o buffer
    printf("Digite o nome da cidade: ");
    // Aqui usamos o scanf para capturar o nome, substituindo o fgets
    scanf("%49[^\n]", cidade->nome); // Lê até o primeiro '\n'
    while (getchar() != '\n'); // Limpa o buffer após ler o nome

    printf("Populacao: ");
    scanf("%lf", &cidade->populacao);

    printf("Qual a area (m2): ");
    scanf("%lf", &cidade->area);

    printf("Qual o PIB: ");
    scanf("%lf", &cidade->PIB);

    printf("Quantidade de pontos turisticos: ");
    scanf("%d", &cidade->pontos_turisticos);

    // Calcula as propriedades derivadas
    calcular_propriedades(cidade);
}

// Função para exibir as informações de uma cidade
void exibir_informacoes(Cidade cidade) {
    printf("\nInformacoes da Carta - %s %s\n", cidade.codigo, cidade.nome);
    printf("Populacao: %.2lf\nArea: %.2lf m2\nPIB: %.2lf\nPontos turisticos: %d\nDensidade populacional: %.2f\nPIB per Capita: %.2f\n", 
        cidade.populacao, cidade.area, cidade.PIB, cidade.pontos_turisticos, cidade.densidade, cidade.PIB_per_capita);
}

// Função para comparar as cartas e exibir o vencedor
void comparar_cartas(Cidade cidade1, Cidade cidade2) {
    printf("\n\nComparacao de Cartas:\n");
    printf("Densidade Populacional: Vencedora - %s\n", (cidade1.densidade < cidade2.densidade) ? cidade1.nome : cidade2.nome);
    printf("Populacao: Vencedora - %s\n", (cidade1.populacao > cidade2.populacao) ? cidade1.nome : cidade2.nome);
    printf("Area: Vencedora - %s\n", (cidade1.area > cidade2.area) ? cidade1.nome : cidade2.nome);
    printf("PIB: Vencedora - %s\n", (cidade1.PIB > cidade2.PIB) ? cidade1.nome : cidade2.nome);
    printf("Pontos Turisticos: Vencedora - %s\n", (cidade1.pontos_turisticos > cidade2.pontos_turisticos) ? cidade1.nome : cidade2.nome);
    printf("PIB per Capita: Vencedora - %s\n", (cidade1.PIB_per_capita > cidade2.PIB_per_capita) ? cidade1.nome : cidade2.nome);
}

// Função principal
int main() {
    Cidade cidade1, cidade2;

    // Cadastro das cidades
    printf("Cadastro da Carta 1:\n");
    cadastrar_cidade(&cidade1);

    printf("\nCadastro da Carta 2:\n");
    cadastrar_cidade(&cidade2);

    // Exibe as informações das duas cartas
    exibir_informacoes(cidade1);
    exibir_informacoes(cidade2);

    // Comparação das cartas
    comparar_cartas(cidade1, cidade2);

    // Cálculo do "Super Poder" das cartas
    float super_poder1 = calcular_super_poder(cidade1);
    float super_poder2 = calcular_super_poder(cidade2);

    printf("\nSuper Poder:\n");
    printf("Carta 1: %.2f\n", super_poder1);
    printf("Carta 2: %.2f\n", super_poder2);
    printf("Super Poder Vencedor: %s\n", (super_poder1 > super_poder2) ? cidade1.nome : cidade2.nome);

    return 0;
}

