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

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char Estado[20], Nome_da_cidade[20], Codigo[2];
    int Populacao, Pontosturisticos;
    float Area, Pib;

    char Estado2[20], Nome_da_cidade2[20], Codigo2[3];
    int Populacao2, Pontosturisticos2;
    float Area2, Pib2;

    // entrada de dados de ambas as cartas
    // Carta 1
    printf("iremos começar cadastrando a primrira carta!\nDigite o Codigo da sua carta: \n");
    scanf("%s", Codigo);
    printf("Código: %s\n", Codigo);

    printf("Digite o Estado da sua Cidade: \n");
    scanf("%s", Estado);
    printf("Estado: %s\n", Estado);

    printf("Digite o Nome da sua Cidade: \n");
    scanf("%s", Nome_da_cidade);
    printf("Cidade: %s\n", Nome_da_cidade);

    printf("Digite a População: \n");
    scanf("%i", &Populacao);
    printf("População: %i\n", Populacao);

    printf("Digite a Área: \n");
    scanf("%f", &Area);
    printf("Área: %f\n", Area);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib);
    printf("PIB: %f\n", Pib);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%i", &Pontosturisticos);
    printf("Pontos Turisticos: %i\n", Pontosturisticos);

    // carta 2

    printf("Primrira cadastrada!\nDigite o Codigo da sua carta: \n");
    scanf("%s", Codigo2);
    printf("Código: %s\n", Codigo2);

    printf("Digite o Estado da sua Cidade: \n");
    scanf("%s", Estado2);
    printf("Estado: %s\n", Estado2);

    printf("Digite o Nome da sua Cidade: \n");
    scanf("%s", Nome_da_cidade2);
    printf("Cidade: %s\n", Nome_da_cidade2);

    printf("Digite a População: \n");
    scanf("%i", &Populacao2);
    printf("População: %i\n", Populacao2);

    printf("Digite a Área: \n");
    scanf("%f", &Area2);
    printf("Área: %f\n", Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &Pib2);
    printf("PIB: %f\n", Pib2);

    printf("Digite o n´sumero de pontos turisticos:\n");
    scanf("%i", &Pontosturisticos2);
    printf("Pontos Turisticos: %i\n\n\n", Pontosturisticos2);

    // cadastro feito mostro os dados na tela

    printf("Carta 1\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f\nPIB: %f\nNumero de pontos turisticos: %i\n\n\nCarta 2\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %i\nÁrea: %f\nPIB: %f\nNumero de pontos turisticos: %i",
           Estado, Codigo, Nome_da_cidade, Populacao, Area, Pib, Pontosturisticos, Estado2, Codigo2, Nome_da_cidade2, Populacao2, Area2, Pib2, Pontosturisticos2);
    return 0;
}
// novo commit
