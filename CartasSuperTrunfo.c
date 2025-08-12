#include <stdio.h>

int main()
{
    
    // variáveis
    char estado[3];
    char codigo[10];
    char nomeCidade[50];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    unsigned int pontosTuristicos1, pontosTuristicos2;
    float densiPopulacionalCarta1 = 0, densiPopulacionalCarta2 = 0;
    float pibPercapitoCarta1 = 0, pibPercapitoCarta2 = 0;
    float superPoder1, superPoder2;

    // Inicio do Jogo
    printf(" Super Trunfo\n");
    printf("### Cadastro de Cartas ###\n\n");

    // Carta 1 informações
    printf("Carta 1:\n");
 
    printf("Estado: ");
    scanf(" %2s", estado);
 
    printf("Código: ");
    scanf("%9s", codigo);
 
    printf("Cidade: ");
    scanf(" %[^\n]", nomeCidade);
 
    printf("População: ");
    scanf("%d", &populacao1);
 
    printf("Área (Km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // separação das cartas pulando a linha
    printf("\n");

     // Carta 2 informações
     printf("Carta 2:\n");
 
     printf("Estado: ");
     scanf(" %2s", estado);
 
     printf("Código: ");
     scanf("%9s", codigo);
 
     printf("Cidade: ");
     scanf(" %[^\n]", nomeCidade);
 
     printf("População: ");
     scanf("%d", &populacao2);
 
     printf("Área (Km²): ");
     scanf("%f", &area2);
 
     printf("PIB (em bilhões): ");
     scanf("%f", &pib2);
 
     printf("Pontos Turísticos: ");
     scanf("%d", &pontosTuristicos2);

     // separação das cartas pulando a linha
    printf("\n");
 

    // Comparação de duas variáveis para saber se e diferente
    
    if (populacao1 > populacao2){
        printf("Carta1 venceu!\n");
    }else{
        printf("Carta2 venceu!\n");
    }

    if (area1 > area2){
        printf("População1 venceu!\n");
    }else{
        printf("População2 venceu!\n");
    }

    if (pib1 > pib2){
        printf("PIB1 venceu!\n");
    }else{
        printf("PIB2 venceu!\n");
    }

    if (pontosTuristicos1 > pontosTuristicos2){
        printf("Pontos turísticos1 venceu!\n");
    }else{
        printf("Pontos turísticos2 venceu!\n");
    }

    if (pibPercapitoCarta1 > pibPercapitoCarta2){
        printf("PIB per Capta1 venceu!\n");
    }else{
        printf("PIB per Capta2 venceu\n");
    }
    
    if (densiPopulacionalCarta1 > densiPopulacionalCarta2){
        printf("Densidade Populacional1 venceu!\n");
    }else{
        printf("Densidade Populacional2 venceu!\n");
    }

    if (superPoder1 > superPoder2){
        printf("Super Poder1 venceu!\n");
    }else{
    printf("Super Poder2 venceu!\n");
    }

    // separação das cartas pulando a linha
    printf("\n");

        pibPercapitoCarta1 = (pib1 * 1000000000) / populacao1;
    printf("PIB per capita: %.2f\n", pibPercapitoCarta1);

    pibPercapitoCarta2 = (pib2 * 1000000000) / populacao2;
    printf("PIB per capita: %.2f\n", pibPercapitoCarta2);

    // separação das cartas pulando a linha
    printf("\n");

    densiPopulacionalCarta1 = populacao1 / area1;
    printf("Densidade Populacional: %.2f\n", densiPopulacionalCarta1);

    densiPopulacionalCarta2 = populacao2 / area2;
    printf("Densidade Populacional: %.2f\n", densiPopulacionalCarta2);

    
    // separação das cartas pulando a linha
    printf("\n");

    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPercapitoCarta1 + (area1 != 0 ? (1 / densiPopulacionalCarta1) : 0);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapitoCarta2 + (area2 != 0 ? (1 / densiPopulacionalCarta2) : 0);



    // Comparação das cartas
    printf("*** Comparação das Cartas ***\n\n");

    
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densiPopulacionalCarta1 < densiPopulacionalCarta2 ? 1 : 2, densiPopulacionalCarta1 < densiPopulacionalCarta2);
    
    printf("PIB per capita: Carta %d venceu (%d)\n", pibPercapitoCarta1 > pibPercapitoCarta2 ? 1 : 2, pibPercapitoCarta1 > pibPercapitoCarta2);
    
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

  

    return 0; // Programa execultado corretamente
}
    






















