#include <stdio.h>

int main() {


     //Declaração das variaveis da primeira carta

    // Declaração das variáveis da primeira carta:
    char estado1[60];
    char codigodacidade1[3];
    char nomedacidade1[60];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float densidadepopulacional1;
    float pibpercapita1;
    double superpoder1;

    printf("Carta 1:\n");

    printf("Estado: ");
    scanf("%[^\n]", estado1);

    printf("Código: ");
    scanf(" %[^\n]", codigodacidade1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidade1);

    printf("População: ");
    scanf(" %ld", &populacao1);

    printf("Área: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos1);


    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 10e8) / populacao1;
    superpoder1 = populacao1 + 
                     area1 + 
                     pib1 + 
                     pontosturisticos1 + 
                     pibpercapita1 + 
                     (area1 / populacao1);

    
                        
    

    //Declaração das variaveis da segunda carta
    
    char estado2[60];
    char codigodacidade2[3];
    char nomedacidade2[60];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float densidadepopulacional2;
    float pibpercapita2;
    double superpoder2;
    
    printf("\nCarta 2:\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Código: ");
    scanf(" %[^\n]", codigodacidade2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidade2);

    printf("População: ");
    scanf(" %ld", &populacao2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosturisticos2);


    densidadepopulacional2 = populacao2 / area2;
   pibpercapita2 = (pib2 * 10e8) / populacao2;
    superpoder2 = populacao2 + 
                     area2 + 
                     pib2 + 
                     pontosturisticos2 + 
                     pibpercapita2 + 
                     (area2 / populacao2);

    
    
    
    printf("\nQual atributo deseja comparar?\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super poder\n");

    printf("\nOpção: ");
    int opcao;
    scanf(" %d", &opcao);

     switch (opcao) {
        case 1:
            printf("\nAtributo utilizado para comparação: População\n\n");

            printf("Carta 1 - Estado: %s\n", estado1);
            printf("Carta 1 - População: %d habitantes\n", populacao1);
            printf("Carta 2 - Estado: %s\n", estado2);
            printf("Carta 2 - População: %d habitantes\n\n", populacao2);
            
            if (populacao1 > populacao2) {
                printf("População: Carta 1 venceu (1)\n");
            } else if (populacao1 < populacao2) {
                printf("População: Carta 2 venceu (0)\n");
            } else {
                printf("População: Empate!\n");
            }

            break;

        case 2:
            printf("\nCarta 1 - Estado: %s\n", estado1);
            printf("Carta 2 - Estado: %s\n", estado2);
            printf("Atributo utilizado para comparação: Área\n\n");
            printf("Carta 1 - Área: %.2f\n", area1);
            printf("Carta 2 - Área: %.2f\n\n", area2);

            if (area1 > area2) {
                printf("Área: Carta 1 venceu (1)\n");
            } else if (area1 < area2) {
                printf("Área: Carta 2 venceu (0)\n");
            } else {
                printf("Área: Empate!\n");
            }

            break;
        
        case 3:
            printf("\nCarta 1 - Estado: %s\n", estado1);
            printf("Carta 2 - Estado: %s\n", estado2);
            printf("Atributo utilizado para comparação: PIB\n\n");
            printf("Carta 1 - PIB: %.2f\n", pib1);
            printf("Carta 2 - PIB: %.2f\n\n", pib2);

            if (area1 > area2) {
                printf("PIB: Carta 1 venceu (1)\n");
            } else if (area1 < area2) {
                printf("PIB: Carta 2 venceu (0)\n");
            } else {
                printf("PIB: Empate!\n");
            }

            break;

    case 4:
            printf("\nCarta 1 - Estado: %s\n", estado1);
            printf("Carta 2 - Estado: %s\n", estado2);
            printf("Atributo utilizado para comparação: Número de pontos turísticos\n\n");
            printf("Carta 1 - Número de pontos turísticos: %d\n", pontosturisticos1);
            printf("Carta 2 - Número de pontos turísticos: %d\n\n", pontosturisticos2);

            if (area1 > area2) {
                printf("Número de pontos turísticos: Carta 1 venceu (1)\n");
            } else if (area1 < area2) {
                printf("Número de pontos turísticos: Carta 2 venceu (0)\n");
            } else {
                printf("Número de pontos turísticos: Empate!\n");
            }

            break;

        case 5:
            printf("\nCarta 1 - Estado: %s\n", estado1);
            printf("Carta 2 - Estado: %s\n", estado2);
            printf("Atributo utilizado para comparação: Densidade populacional\n\n");
            printf("Carta 1 - Densidade populacional: %.2f\n", densidadepopulacional1);
            printf("Carta 2 - Densidade populacional: %.2f\n\n", densidadepopulacional2);

            if (area1 > area2) {
                printf("Densidade populacional: Carta 1 venceu (1)\n");
            } else if (area1 < area2) {
                printf("Densidade populacional: Carta 2 venceu (0)\n");
            } else {
                printf("Densidade populacional: Empate!\n");
            }

            break;

        case 6:
            printf("\nCarta 1 - Estado: %s\n", estado1);
            printf("Carta 2 - Estado: %s\n", estado2);
            printf("Atributo utilizado para comparação: PIB per capita\n\n");
            printf("Carta 1 - PIB per capita: %.2f\n", pibpercapita1);
            printf("Carta 2 - PIB per capita: %.2f\n\n", pibpercapita2);

            if (area1 > area2) {
                printf("PIB per capita: Carta 1 venceu (1)\n");
            } else if (area1 < area2) {
                printf("PIB per capita: Carta 2 venceu (0)\n");
            } else {
                printf("PIB per capita: Empate!\n");
            }

            break;

        case 7:
            printf("\nCarta 1 - Estado: %s\n", estado1);
            printf("Carta 2 - Estado: %s\n", estado2);
            printf("Atributo utilizado para comparação: Super poder\n\n");
            printf("Carta 1 - Super poder: %.2f\n", superpoder1);
            printf("Carta 2 - Super poder: %.2f\n\n", superpoder2);

            if (area1 > area2) {
                printf("Super poder: Carta 1 venceu (1)\n");
            } else if (area1 < area2) {
                printf("Super poder: Carta 2 venceu (0)\n");
            } else {
                printf("Super poder: Empate!\n");
            }

            break;

        default:
            printf("\nOpção inválida! Tenta novamente.\n");
            break;
    }

}