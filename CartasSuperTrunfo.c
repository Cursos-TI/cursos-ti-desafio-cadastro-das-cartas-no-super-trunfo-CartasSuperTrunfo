#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define BUFFER_SIZE 256

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Declarando variáveis
    char carta_1[BUFFER_SIZE], carta_2[BUFFER_SIZE];
    char estado_1[BUFFER_SIZE], estado_2[BUFFER_SIZE];
    char codigo_1[BUFFER_SIZE], codigo_2[BUFFER_SIZE];
    char cidade_1[BUFFER_SIZE], cidade_2[BUFFER_SIZE];
    unsigned long populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade_populacional_1, densidade_populacional_2;
    float pib_per_capita_1, pib_per_capita_2;
    int pontos_turisticos1, pontos_turisticos2,menu_1,menu_2;
    float super_poder_1, super_poder_2;
    float atributo_1,atributo_2;
    char buffer[BUFFER_SIZE];

    // Coletando os dados da primeira carta
    printf("********************************************************************\n");
    printf("------------------| JOGO SUPER TRUNFO | CIDADES |--------------------\n");
    printf("********************************************************************\n\n");
    printf("JOGADOR 1 | CADASTRO DE CARTA |\n\n");

    printf("ESCOLHA UMA LETRA DE [A - H] PARA SUA CARTA: ");
    fgets(carta_1, BUFFER_SIZE, stdin);
    carta_1[strcspn(carta_1, "\n")] = 0;

    printf("INFORME O ESTADO: ");
    fgets(estado_1, BUFFER_SIZE, stdin);
    estado_1[strcspn(estado_1, "\n")] = 0;

    printf("INFORME O CÓDIGO DA SUA CARTA [ENTRE 1 E 4]: ");
    fgets(codigo_1, BUFFER_SIZE, stdin);
    codigo_1[strcspn(codigo_1, "\n")] = 0;

    printf("INFORME O NOME DA CIDADE: ");
    fgets(cidade_1, BUFFER_SIZE, stdin);
    cidade_1[strcspn(cidade_1, "\n")] = 0;

    printf("INFORME A POPULAÇÃO DA CIDADE: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    populacao1 = strtoul(buffer, NULL, 10);

    printf("INFORME A ÁREA DA CIDADE EM Km²: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    area1 = strtof(buffer, NULL);

    printf("INFORME O PIB DA CIDADE EM BILHÕES: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    pib1 = strtof(buffer, NULL);

    printf("INFORME A QUANTIDADE DE PONTOS TURISTICOS: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    pontos_turisticos1 = strtol(buffer, NULL, 10);

    // Coletando os dados da segunda carta
    printf("********************************************************************\n");
    printf("********************************************************************\n\n");
    printf("JOGADOR 2 | CADASTRO DE CARTA |\n\n");

    printf("ESCOLHA UMA LETRA DE [A - H] PARA SUA CARTA: ");
    fgets(carta_2, BUFFER_SIZE, stdin);
    carta_2[strcspn(carta_2, "\n")] = 0;

    printf("INFORME O ESTADO: ");
    fgets(estado_2, BUFFER_SIZE, stdin);
    estado_2[strcspn(estado_2, "\n")] = 0;

    printf("INFORME O CÓDIGO DA SUA CARTA [ENTRE 1 E 4]: ");
    fgets(codigo_2, BUFFER_SIZE, stdin);
    codigo_2[strcspn(codigo_2, "\n")] = 0;

    printf("INFORME O NOME DA CIDADE: ");
    fgets(cidade_2, BUFFER_SIZE, stdin);
    cidade_2[strcspn(cidade_2, "\n")] = 0;

    printf("INFORME A POPULAÇÃO DA CIDADE: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    populacao2 = strtoul(buffer, NULL, 10);

    printf("INFORME A ÁREA DA CIDADE EM Km²: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    area2 = strtof(buffer, NULL);

    printf("INFORME O PIB DA CIDADE EM BILHÕES: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    pib2 = strtof(buffer, NULL);

    printf("INFORME A QUANTIDADE DE PONTOS TURISTICOS: ");
    fgets(buffer, BUFFER_SIZE, stdin);
    pontos_turisticos2 = strtol(buffer, NULL, 10);

    // Calculando densidade populacional e PIB per capita
    densidade_populacional_1 = populacao1 / area1;
    densidade_populacional_2 = populacao2 / area2;

    pib_per_capita_1 = (pib1 * 1e9) / populacao1;
    pib_per_capita_2 = (pib2 * 1e9) / populacao2;

    super_poder_1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita_1 + (1 / densidade_populacional_1);
    super_poder_2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita_2 + (1 / densidade_populacional_2);

    //Exibindo o menu
    printf("**********************************************************************\n");
    printf("----------|     SUPER TRUNFO - CIDADES - MODO DE JOGO     |-----------\n");
    printf("********************************************************************\n\n");
    printf("|MENU ATRIBUTOS|ESCOLHA QUAIS ATRIBUTO SERÃO AVALIADO PARA DETERMINAR O VENCEDOR|\n\n");
    printf("|ATRIBUTO|1|POPULAÇÃO|\n");
    printf("|ATRIBUTO|2|ÁREA|\n");
    printf("|ATRIBUTO|3|DENSIDADE POPULACIONAL|\n");
    printf("|ATRIBUTO|4|PIB|\n");
    printf("|ATRIBUTO|5|PIB PER CAPTA|\n");
    printf("|ATRIBUTO|6|PONTOS TURISTICOS|\n");
    printf("|ATRIBUTO|7|SUPER PODER|\n\n");
    printf("DIGITE A PRIMEIRA OPÇÃO:");
    scanf("%d", &menu_1);
    printf("DIGITE A SEGUNDA OPÇÃO:");
    scanf("%d", &menu_2);

    // Verifica se os atributos são iguais
    if (menu_1 == menu_2) {
        printf("Erro: Os atributos devem ser diferentes.\n");
        return 1;
    }
    // Inicializa as somas
    atributo_1 = 0;
    atributo_2 = 0;

    //Estrutura Switch

    switch (menu_1) {
        case 1:
            atributo_1 += populacao1;
            atributo_2 += populacao2;
            break;
        case 2:
            atributo_1 += area1;
            atributo_2 += area2;
            break;
        case 3:
            atributo_1 += densidade_populacional_1;
            atributo_2 += densidade_populacional_2;
            break;
        case 4:
            atributo_1 += pib1;
            atributo_2 += pib2;
            break;
        case 5:
            atributo_1 += pib_per_capita_1;
            atributo_1 += pib_per_capita_2;
            break;
        case 6:
            atributo_1 += pontos_turisticos1;
            atributo_2 += pontos_turisticos2;
            break;
        case 7:
            atributo_1 += super_poder_1;
            atributo_2 += super_poder_2;
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }

    switch (menu_2) {
        case 1:
            atributo_1 += populacao1;
            atributo_2 += populacao2;
            break;
        case 2:
            atributo_1 += area1;
            atributo_2 += area2;
            break;
        case 3:
            atributo_1 += densidade_populacional_1;
            atributo_2 += densidade_populacional_2;
            break;
        case 4:
            atributo_1 += pib1;
            atributo_2 += pib2;
            break;
        case 5:
            atributo_1 += pib_per_capita_1;
            atributo_2 += pib_per_capita_2;
            break;
        case 6:
            atributo_1 += pontos_turisticos1;
            atributo_2 += pontos_turisticos2;
            break;
        case 7:
            atributo_1 += super_poder_1;
            atributo_2 += super_poder_2;
            break;
        default:
            printf("Atributo inválido.\n");
            return 1;
    }

    // Exibindo o resultado da comparação
    printf("**********************************************************************\n");
    printf("-----------|     SUPER TRUNFO - CIDADES - RESULTADO     |-------------\n");
    printf("********************************************************************\n\n");

    if (atributo_1 > atributo_2) {
        printf("Parabéns, a carta %s%s venceu com a soma dos atributos: %.2f!\n\n", carta_1, codigo_1, atributo_1);
    } else if (atributo_2 > atributo_1) {
        printf("Parabéns, a carta %s%s venceu com a soma dos atributos: %.2f!\n\n", carta_2, codigo_2, atributo_2);
    } else {
        printf("Empate! Ambas as cartas têm a mesma soma de atributos: %.2f.\n\n", atributo_1);
    }

    // Exibindo os resultados da primeira carta
    printf("\n********************************************************************\n");
    printf("--------------| SUPER TRUNFO - CIDADES 1° CARTA EM JOGO|--------------\n");
    printf("********************************************************************\n\n");

    printf("Carta: %s%s\n", carta_1, codigo_1);
    printf("Estado: %s\n", estado_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %lu\n", populacao1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f Bilhões de reais\n", pib1);
    printf("PIB PER CAPTA: %.2f reais\n", pib_per_capita_1);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n\n", pontos_turisticos1);
    printf("Super Poder: %.2f\n\n", super_poder_1);


    // Exibindo os resultados da segunda carta
    printf("\n********************************************************************\n");
    printf("--------------| SUPER TRUNFO - CIDADES 2° CARTA EM JOGO|--------------\n");
    printf("********************************************************************\n\n");

    printf("Carta: %s%s\n", carta_2, codigo_2);
    printf("Estado: %s\n", estado_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %lu\n", populacao2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de reais\n", pib2);
    printf("PIB PER CAPTA: %.2f reais\n", pib_per_capita_2);
    printf("NÚMERO DE PONTOS TURISTICOS: %d\n\n", pontos_turisticos2);
    printf("Super Poder: %.2f\n\n", super_poder_2);

    printf("********************************************************************\n");
    printf("********************************************************************\n\n");

    return 0;
}