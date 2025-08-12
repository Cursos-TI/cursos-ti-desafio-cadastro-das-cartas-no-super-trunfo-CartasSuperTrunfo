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
    unsigned long int populacao;     // Variável para guardar dados de "População"
    float area_em_km;                // Variável para guardar dados de "Aréa por Km quadrado"
    float pib;                       // Variável para guardar dados de "PIB"
    int numero_de_pontos_turisticos; // Variável para guardar dados de "Numero de pontos turisticos"
    float densidade_populacional;    // Variável para guardar dados de "Numero de densidade populacional"
    float pib_per_capita;            // Variável para guardar dados de "Numero de PiB per capita"
    float super_poder;               // Variável para guardar dados de "Numero do super poder"

    char estado2;                     // Variável para guardar dados de "Estado"
    char codigo_da_carta2[4];         // Variável para guardar dados de "Codigo da carta"
    char nome_da_cidade2[20] = "";    // Variável para guardar dados de "Nome da cidade"
    unsigned long int populacao2;     // Variável para guardar dados de "População"
    float area_em_km2;                // Variável para guardar dados de "Aréa por Km quadrado"
    float pib2;                       // Variável para guardar dados de "PIB"
    int numero_de_pontos_turisticos2; // Variável para guardar dados de "Numero de pontos turisticos"
    float densidade_populacional2;    // Variável para guardar dados de "Numero de densidade populacional"
    float pib_per_capita2;            // Variável para guardar dados de "Numero de PiB per capita"
    float super_poder2;               // Variável para guardar dados de "Numero do super poder"

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
    scanf("%19s", nome_da_cidade);
    printf("Por favor informe o número de habitantes da cidade: \n");
    scanf("%lu", &populacao);
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
    scanf("%lu", &populacao2);
    printf("Por favor informe a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area_em_km2);
    printf("Por favor informe o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f", &pib2);
    printf("Por favor informe a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos2);
    // } Finalizando solicitação dos dados da carta 2

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.

    // Calculos carta 1{
    densidade_populacional = populacao / area_em_km; // calculado densidade populacional
    pib_per_capita = pib / populacao;                // calculando PIB
    super_poder = populacao + area_em_km + pib + numero_de_pontos_turisticos + pib_per_capita + (1 / densidade_populacional);
    // }

    // Calculos carta 2{
    densidade_populacional2 = populacao2 / area_em_km2; // calculado densidade populacional
    pib_per_capita2 = pib2 / populacao2;                // calculando PIB
    super_poder2 = populacao2 + area_em_km2 + pib2 + numero_de_pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);
    // }

    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Exibição dos Dados da carta 1{
    // Carta 1
    // printf("Carta: 1 \n");
    // printf("Estado: %c\n", estado);
    // printf("Código da Carta: %3s\n", codigo_da_carta);
    // printf("Nome da Cidade: %19s\n", nome_da_cidade);
    // printf("População: %d\n", populacao);
    // printf("Área (em km²): %.2f\n", area_em_km);
    // printf("PIB: %.2f\n", pib);
    // printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);
    // printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    // printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    // // } Finalizando exibição dos Dados da carta 1.
    // printf("\n");
    // // Exibição dos Dados da carta 2{
    // // carta 2
    // printf("Carta: 2 \n");
    // printf("Estado: %c\n", estado2);
    // printf("Código da Carta: %3s\n", codigo_da_carta2);
    // printf("Nome da Cidade: %19s\n", nome_da_cidade2);
    // printf("População: %d\n", populacao2);
    // printf("Área (em km²): %.2f\n", area_em_km2);
    // printf("PIB: %.2f\n", pib2);
    // printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    // printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    // printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    // } Finalizando exibição dos Dados da carta 2.

    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: %s\n", (populacao > populacao2) ? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("Área: %s\n", (area_em_km > area_em_km2) ? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("PIB: %s\n", (pib > pib2) ? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("Pontos Turísticos: %s\n", (numero_de_pontos_turisticos > numero_de_pontos_turisticos2) ? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("Densidade Populacional: %s\n", (densidade_populacional < densidade_populacional2) ? "CARTA 1 VENCEU" : "CARTA 2 VENCEU"); // Inverso: menor é melhor
    printf("PIB per Capita: %s\n", (pib_per_capita > pib_per_capita2) ? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("Super Poder: %s\n", (super_poder > super_poder2) ? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");

    return 0;
}