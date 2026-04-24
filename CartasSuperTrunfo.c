#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


    // Variáveis para armazenar os dados das duas cartas
    char estado[2];
    char codigo[2][4];
    char cidade[2][50];
    int populacao[2];
    int pontos[2];
    float area[2];
    float PIB[2];
    float densidade[2];
    float pibpercapita[2];
    int opcao1, opcao2;
    float v1_c1, v1_c2, v2_c1, v2_c2;

    // ---------------------------
    // Cadastro da Carta 1
    // ---------------------------
    printf("Iniciando o cadastro das cartas do Super Trunfo. Vamos cadastrar a carta 1, digite uma letra de A a H para definir o estado: ");
    scanf(" %c", &estado[0]);

    printf("Digite o codigo da carta 1 (letra do estado seguida de 01 a 04, ex: A01: ");
    scanf(" %s", codigo[0]);

    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %s", cidade[0]);

    printf("Digite a populacao da carta 1: ");
    scanf(" %d", &populacao[0]);

    printf("Digite o numero de pontos turisticos da carta 1: ");
    scanf(" %d", &pontos[0]);

    printf("Digite a area da carta 1: ");
    scanf(" %f", &area[0]);

    printf("Digite o PIB da carta 1: ");
    scanf(" %f", &PIB[0]);

    // ---------------------------
    // Cadastro da Carta 1
    // ---------------------------
    printf("Vamos cadastrar a carta 2, digite uma letra de A a H para definir o estado: ");
    scanf(" %c", &estado[1]);

    printf("Digite o codigo da carta 2: ");
    scanf(" %s", codigo[1]);

    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %s", cidade[1]);

    printf("Digite a populacao da carta 2: ");
    scanf(" %d", &populacao[1]);

    printf("Digite o numero de pontos turisticos da carta 2: ");
    scanf(" %d", &pontos[1]);

    printf("Digite a area da carta 2: ");
    scanf(" %f", &area[1]);

    printf("Digite o PIB da carta 2: ");
    scanf(" %f", &PIB[1]);

    // ---------------------------
    // Exibicao das Cartas
    // ---------------------------
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nPontos turísticos: %d\nArea: %.2f km2\nPIB: %.2f bilhoes\n", 
    estado[0], codigo[0], cidade[0], populacao[0], pontos[0], area[0], PIB[0]);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\nCodigo: %s\nCidade: %s\nPopulacao: %d\nPontos turísticos: %d\nArea: %.2f km2\nPIB: %.2f bilhoes\n", 
    estado[1], codigo[1], cidade[1], populacao[1], pontos[1], area[1], PIB[1]);


    // ---------------------------
    // Calculo densidade e PIB per capita
    // ---------------------------
    densidade[0] = populacao[0] / area[0];
    densidade[1] = populacao[1] / area[1];

    pibpercapita[0] = (PIB[0] * 1000000000) / populacao[0];
    pibpercapita[1] = (PIB[1] * 1000000000) / populacao[1];

    printf("\nDensidade da carta 1: %.2f\n", densidade[0]);
    printf("PIB per capita da carta 1: %.2f\n", pibpercapita[0]);
    printf("Densidade da carta 2: %.2f\n", densidade[1]);
    printf("PIB per capita da carta 2: %.2f\n", pibpercapita[1]);


    // ---------------------------
    // Comparando atributos
    // ---------------------------

    printf("\n--- COMPARANDO ATRIBUTOS ---\n"
        "Escolha um atributo.\n"
        "1 - População\n"
        "2 - Pontos turisticos\n"
        "3 - Área\n"
        "4 - PIB\n"
        "5 - Densidade\n"
        "Escolha uma opção: ");
    scanf("%d", &opcao1);

    printf("\nEscolha outro atributo.\n");
        if (opcao1 != 1) printf("1 - População\n");
        if (opcao1 != 2) printf("2 - Pontos turisticos\n");
        if (opcao1 != 3) printf("3 - Área\n");
        if (opcao1 != 4) printf("4 - PIB\n");
        if (opcao1 != 5) printf("5 - Densidade\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao2);
    

    if (opcao2 == opcao1) {
    printf("Nao pode escolher o mesmo atributo!\n");
    return 0;
    } else {

        // PRIMEIRO ATRIBUTO
        switch (opcao1){
            case 1:
                v1_c1 = populacao[0];
                v1_c2 = populacao[1];
                break;
            case 2:
                v1_c1 = pontos[0];
                v1_c2 = pontos[1];
                break;
            case 3:
                v1_c1 = area[0];
                v1_c2 = area[1];
                break;
            case 4:
                v1_c1 = PIB[0];
                v1_c2 = PIB[1];
                break;
            case 5:
                // Densidade: menor valor vence.
                // Para usar na soma, invertemos (1/densidade),
                // assim valores menores viram maiores.
                v1_c1 = 1.0 / densidade[0];
                v1_c2 = 1.0 / densidade[1];
                break;

        // SEGUNDO ATRIBUTO
        } switch (opcao2){
            case 1:
                v2_c1 = populacao[0];
                v2_c2 = populacao[1];
                break;
            case 2:
                v2_c1 = pontos[0];
                v2_c2 = pontos[1];
                break;
            case 3:
                v2_c1 = area[0];
                v2_c2 = area[1];
                break;
            case 4:
                v2_c1 = PIB[0];
                v2_c2 = PIB[1];
                break;
            case 5:
                v2_c1 = 1.0 / densidade[0];
                v2_c2 = 1.0 / densidade[1];
                break;
        }
    }

    // MOSTRANDO QUAIS ATRIBUTOS ESTÃO SENDO COMPARADOS
    printf("\nAtributos escolhidos: ");

    if (opcao1 == 1) printf("População ");
    if (opcao1 == 2) printf("Pontos Turisticos ");
    if (opcao1 == 3) printf("Area ");
    if (opcao1 == 4) printf("PIB ");
    if (opcao1 == 5) printf("Densidade ");

    printf("e ");

    if (opcao2 == 1) printf("População\n");
    if (opcao2 == 2) printf("Pontos Turisticos\n");
    if (opcao2 == 3) printf("Área\n");
    if (opcao2 == 4) printf("PIB\n");
    if (opcao2 == 5) printf("Densidade\n");

    // SOMANDO OS VALORES DAS OPÇÕES ESCOLHIDAS
    float soma1 = v1_c1 + v2_c1;
    float soma2 = v1_c2 + v2_c2;

    printf("\nSoma da Carta 1: %.6f\n", soma1);
    printf("Soma da Carta 2: %.6f\n", soma2);

    if (soma1 == soma2){
        printf("Empate!\n");
    } else {
        (soma1 > soma2) ? printf("Carta 1 venceu") : printf("Carta 2 venceu");
    }

    return 0;
}

