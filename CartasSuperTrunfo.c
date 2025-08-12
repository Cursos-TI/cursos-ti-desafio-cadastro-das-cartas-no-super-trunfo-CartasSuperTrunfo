#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;                     // Variável para guardar dados de "Estado"
    char codigo_da_carta[4];         // Variável para guardar dados de "Codigo da carta"
    char nome_da_cidade[20] = "";    // Variável para guardar dados de "Nome da cidade"
    int populacao;                   // Variável para guardar dados de "População"
    float area_em_km;                // Variável para guardar dados de "Aréa por Km quadrado"
    float pib;                       // Variável para guardar dados de "PIB"
    int numero_de_pontos_turisticos; // Variável para guardar dados de "Numero de pontos turisticos"

    char estado2;                     // Variável para guardar dados de "Estado"
    char codigo_da_carta2[4];         // Variável para guardar dados de "Codigo da carta"
    char nome_da_cidade2[20] = "";    // Variável para guardar dados de "Nome da cidade"
    int populacao2;                   // Variável para guardar dados de "População"
    float area_em_km2;                // Variável para guardar dados de "Aréa por Km quadrado"
    float pib2;                       // Variável para guardar dados de "PIB"
    int numero_de_pontos_turisticos2; // Variável para guardar dados de "Numero de pontos turisticos"

    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.

    // Cadastro das Cartas:

    // Solicitando dados da carta 1 {
    printf("Carta 1 \n");
    printf("Por favor informe uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado);
    printf("Por favor informe o código da cidade (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%3s", codigo_da_carta);
    printf("Por favor informe o nome da cidade: \n");
    fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
    printf("Por favor informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao);
    printf("Por favor informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area_em_km);
    printf("Por favor informe o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f", &pib);
    printf("Por favor informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos);
    // } Finalizando solicitação dos dados da carta 1

    // Solicitando dados da carta 2 {
    printf("Carta 2: \n");
    printf("Por favor informe uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf(" %c", &estado2);
    printf("Por favor informe o código da cidade (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%3s", codigo_da_carta2);
    printf("Por favor informe o nome da cidade: \n");
    scanf("%19s", nome_da_cidade2);
    printf("Por favor informe o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);
    printf("Por favor informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area_em_km2);
    printf("Por favor informe o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f", &pib2);
    printf("Por favor informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    // } Finalizando solicitação dos dados da carta 2

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.

    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos Dados da carta 1{
    // Carta 1
    printf("Carta: 1 \n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %3s\n", codigo_da_carta);
    printf("Nome da Cidade: %19s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área (em km²): %.2f\n", area_em_km);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);
    // } Finalizando exibição dos Dados da carta 1.
    printf("\n");
    // Exibição dos Dados da carta 2{
    // carta 2
    printf("Carta: 2 \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %3s\n", codigo_da_carta2);
    printf("Nome da Cidade: %19s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área (em km²): %.2f\n", area_em_km2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    // } Finalizando exibição dos Dados da carta 2.

    return 0;
}
