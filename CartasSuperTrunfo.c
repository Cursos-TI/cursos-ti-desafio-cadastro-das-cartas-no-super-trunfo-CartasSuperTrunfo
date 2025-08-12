#include <stdio.h>

int main() {
    // Declarando as variáveis para a primeira carta
    char estado, estado2;
    char nome_da_cidade[20], nome_da_cidade2[20];
    char codigo_da_carta[5], codigo_da_carta2[5];
    double populacao, area, pib, populacao2, area2, pib2;
    int pontosTuristicos, pontosTuristicos2;

    // Solicitando dados para cadastrar as cartas
    printf("Bem-vindo ao desafio ***Super Trunfo - Países!***\n");

    // Cadastrar Carta 1
    printf("========Carta1=======\n");
    printf("Digite o estado (letra de A a H):\n");
    scanf(" %c", &estado);  

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade);

    printf("Digite o código da carta (ex: A01, A02, B01):\n");
    scanf("%s", codigo_da_carta);

    printf("Digite a população:\n");
    scanf("%lf", &populacao);

    printf("Digite a área da cidade:\n");
    scanf("%lf", &area);

    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &pib);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos);

   
    // Cadastrar Carta 2
    printf("========Carta2=======\n");
    printf("Digite o estado (letra de A a H):\n");
    scanf(" %c", &estado2);  

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome_da_cidade2);

    printf("Digite o código da carta (ex: A01, A02, B01):\n");
    scanf("%s", codigo_da_carta2);

    printf("Digite a população:\n");
    scanf("%lf", &populacao2);

    printf("Digite a área da cidade:\n");
    scanf("%lf", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%lf", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Exibindo os resultados finais das duas cartas
    printf("\n===== Dados da Carta 1 =====\n");
    printf("Estado: %c\n", estado);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("População: %.2f habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("=====================================\n");

    printf("\n===== Dados da Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("Código da Carta: %s\n", codigo_da_carta2);
    printf("População: %.2f habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("=====================================\n");

    return 0;
}