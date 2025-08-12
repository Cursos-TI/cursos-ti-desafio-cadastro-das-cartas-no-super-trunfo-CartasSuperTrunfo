#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main() {
    // Definindo variáveis para armazenar os dados das duas cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2, escolha;
    float area1, area2, pib1, pib2, desin1, desin2, capita1, capita2, super1, super2;
    int pontos1, pontos2;
    int densidade_invertida1, densidade_invertida2;
    
    // Coletando dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (de A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    getchar();
    fgets(codigo1, 5, stdin);

    printf("Nome da Cidade: ");
    fgets(cidade1, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    desin1 = (float)populacao1 / area1;
    capita1 = (float)pib1 / populacao1;
    densidade_invertida1 = area1 / populacao1;
    super1 = populacao1 + area1 + pib1 + pontos1 + capita1 + densidade_invertida1;

    // Coletando dados para a Carta 2
    printf("Digite os dados da Carta 2:\n");

    printf("Estado (de A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A01): ");
    getchar();
    fgets(codigo2, 10, stdin);

    printf("Nome da Cidade: ");
    fgets(cidade2, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    desin2 = (float)populacao2 / area2;
    capita2 = (float)pib2 / populacao2;
    densidade_invertida2 = area2 / populacao2;
    super2 = populacao2 + area2 + pib2 + pontos2 + capita2 + densidade_invertida2;

    // Exibindo os dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional (hab/km²): %.2f\n", desin1);
    printf("PIB per Capita (reais): %.2f\n", capita1);

    // Exibindo os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional (hab/km²): %.2f\n", desin2);
    printf("(PIB per Capita (reais): %.2f\n", capita2);

    
    //Comparaçoes das cartas 1 e 2.
    printf("\nComparação de Cartas:\n");
    printf("População: %d Carta 1 venceu %d\n",populacao1, populacao1 > populacao2);
    printf("Área: %.2f Carta 1 venceu %d\n",area1, area1 > area2);
    printf("PIB: %.2f Carta 1 venceu %d\n",pib1, pib1 > pib2);
    printf("Pontos Turísticos: %d Carta 1 venceu %d\n",pontos1, pontos1 > pontos2);
    printf("Densidade Populacional: %.2f Carta 1 venceu %d\n",desin1, desin1 < desin2);
    printf("PIB per Capita: %.2f Carta 1 venceu %d\n",capita1, capita1 > capita2);
    printf("Super Poder: %.2f Carta 1 venceu %d\n",super1, super1 < super2);

    // Menu de escolha do atributo
printf("\nEscolha um atributo para comparação:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Densidade Populacional (menor vence)\n");
printf("5. PIB per Capita\n");
printf("6. Pontos Turísticos\n");
printf("7. Super Poder (maior vence)\n");
printf("Sua escolha: ");
scanf("%d", &escolha);

switch (escolha) {
    case 1:
    if (populacao1 > populacao2) {
    printf("População: Carta 1 venceu com %d habitantes.\n", populacao1);
    } else if (populacao1 < populacao2) {
    printf("População: Carta 2 venceu com %d habitantes.\n", populacao2);
    } else {
    printf("População: Empate!\n");
    }

    break;
    case 2:
    if (area1 > area2) {
    printf("Área: Carta 1 venceu com %.2f km².\n", area1);
    } else if (area1 < area2) {
    printf("Área: Carta 2 venceu com %.2f km².\n", area2);
    } else {
    printf("Área: Empate!\n");
    }

    break;
    case 3:
    if (pib1 > pib2) {
    printf("PIB: Carta 1 venceu com %.2f bilhões.\n", pib1);
    } else if (pib1 < pib2) {
    printf("PIB: Carta 2 venceu com %.2f bilhões.\n", pib2);
    } else {
    printf("PIB: Empate!\n");
    }

    break;
    case 4:
    if (desin1 < desin2) {
    printf("Densidade Populacional: Carta 1 venceu com %.2f hab/km².\n", desin1);
    } else if (desin1 > desin2) {
    printf("Densidade Populacional: Carta 2 venceu com %.2f hab/km².\n", desin2);
    } else {
    printf("Densidade Populacional: Empate!\n");
    }

    break;
    case 5:
    if (capita1 > capita2) {
    printf("PIB per Capita: Carta 1 venceu com R$%.2f.\n", capita1);
    } else if (capita1 < capita2) {
    printf("PIB per Capita: Carta 2 venceu com R$%.2f.\n", capita2);
    } else {
    printf("PIB per Capita: Empate!\n");
    }
    break;

    case 6:
    if (pontos1 > pontos2) {
    printf("Pontos Turísticos: Carta 1 venceu com %d pontos.\n", pontos1);
    } else if (pontos1 < pontos2) {
    printf("Pontos Turísticos: Carta 2 venceu com %d pontos.\n", pontos2);
    } else {
    printf("Pontos Turísticos: Empate!\n");
    }

    break;
    case 7:
    if (super1 > super2) {
    printf("Super Poder: Carta 1 venceu com %.2f pontos.\n", super1);
    } else if (super1 < super2) {
    printf("Super Poder: Carta 2 venceu com %.2f pontos.\n", super2);
    } else {
    printf("Super Poder: Empate!\n");
    }

    break;
    default:
    printf("Opção inválida. Tente novamente.\n");
    break;
    }

    return 0;}