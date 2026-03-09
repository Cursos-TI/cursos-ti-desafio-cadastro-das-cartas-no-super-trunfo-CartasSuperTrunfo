#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Declaração das variáveis Carta 1
    char estado_c1;
    char codigo_carta_c1[4];
    char nome_cidade_c1[40];
    int população_c1;
    float área_c1;
    float pib_c1;
    int n_pontos_tur_c1;

    // Declaração das variáveis Carta 2
    char estado_c2;
    char codigo_carta_c2[4];
    char nome_cidade_c2[40];
    int população_c2;
    float área_c2;
    float pib_c2;
    int n_pontos_tur_c2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
        //Solicitar dados da carta 1
    printf("\n######### Carta 1 ###########\n");
    printf("\nDigite o estado da carta 1, Ex.: 'S' de São Paulo:");
    scanf(" %c", &estado_c1);
    printf("\nDigite o codigo da carta 1, Ex.: A1 ou S1:");
    scanf(" %3[^\n]s", &codigo_carta_c1);
    printf("\nDigite o nome da cidade da carta 1:");
    scanf(" %39[^\n]s", &nome_cidade_c1);
    printf("\nDigite a população da cidade da carta 1:");
    scanf("%d", &população_c1);
    printf("\nDigite a área da cidade da carta 1:");
    scanf("%f", &área_c1);
    printf("\nDigite o PIB da cidade da carta 1:");
    scanf("%f", &pib_c1);
    printf("\nDigite o número de pontos turísticos da cidade da carta 1:");
    scanf("%d", &n_pontos_tur_c1);

        //Solicitar dados da carta 2
    printf("\n######### Carta 2 ###########\n");
    printf("\nDigite o estado da carta 2, Ex.: 'E' de Espírito Santo:");
    scanf(" %c", &estado_c2);
    printf("\nDigite o codigo da carta 2, Ex.: A1 ou S1:");
    scanf(" %3[^\n]s", &codigo_carta_c2);
    printf("\nDigite o nome da cidade da carta 2:");
    scanf(" %39[^\n]s", &nome_cidade_c2);
    printf("\nDigite a população da cidade da carta 2:");
    scanf("%d", &população_c2);
    printf("\nDigite a área da cidade da carta 2:");
    scanf("%f", &área_c2);
    printf("\nDigite o PIB da cidade da carta 2:");
    scanf("%f", &pib_c2);
    printf("\nDigite o número de pontos turísticos da cidade da carta 2:");
    scanf("%d", &n_pontos_tur_c2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        // Imprimir os dados da carta 1
    printf("\n######### Carta 1 ###########\n");
    printf("\nEstado: %c\n", estado_c1);
    printf("Código da carta: %s\n", codigo_carta_c1);
    printf("Nome da cidade: %s\n", nome_cidade_c1);
    printf("População: %d\n", população_c1);
    printf("Área em km²: %.2f\n", área_c1);
    printf("PIB: R$ %.2f\n", pib_c1);
    printf("Número de pontos turísticos: %d\n", n_pontos_tur_c1);
    printf("\n######### -------- ###########\n");

            // Imprimir os dados da carta 2
    printf("\n######### Carta 2 ###########\n");
    printf("\nEstado: %c\n", estado_c2);
    printf("Código da carta: %s\n", codigo_carta_c2);
    printf("Nome da cidade: %s\n", nome_cidade_c2);
    printf("População: %d\n", população_c2);
    printf("Área em km²: %.2f\n", área_c2);
    printf("PIB: R$ %.2f\n", pib_c2);
    printf("Número de pontos turísticos: %d\n", n_pontos_tur_c2);
    printf("\n######### -------- ###########\n");

    return 0;
}
