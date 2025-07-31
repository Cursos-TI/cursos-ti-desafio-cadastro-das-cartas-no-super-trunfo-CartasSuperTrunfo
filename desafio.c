#include <stdio.h>

int main (){

    printf ("***Carta um***\n");

    char estado1 [25];
    int codigocarta1 [3];
    char cidade1 [25];
    int populacao1;
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;

    char estado2 [25];
    int codigocarta2 [3];
    char cidade2 [25];
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;

    printf ("***Carta um***\n");
    
    printf ("Digite a letra do estado:\n");
    scanf ("%s", estado1);

    printf ("Digite o codigo da carta:\n");
    scanf ("%s", codigocarta1);

    printf ("Digite o nome da cidade escolhida:\n");
    scanf ("%s", cidade1);

    printf ("Digite a população da cidade escolhida:\n");
    scanf ("%d", &populacao1);

    printf ("Digite a área da primeira cidadde escolhida:\n");
    scanf ("%f", &area1);

    printf ("Digite o PIB da primeira cidade escolhida:\n");
    scanf ("%f", &PIB1);

    printf ("Numero de pontos turisticos:\n");
    scanf ("%d", &numero_de_pontos_turisticos1);

    densidade1 = populacao1 / area1;
    printf ("Densidade: %.2f\n", densidade1);

    pib_per_capita1 = PIB1 / populacao1;
    printf ("Pib per capita: %.2\n", pib_per_capita1);

    printf ("***Carta dois***\n");

    printf ("Digite a letra do estado dois:\n");
    scanf ("%s", estado2);

    printf ("Digite o codigo da carta:\n");
    scanf ("%s", codigocarta2);

    printf ("Digite o nome da segunda cidade escolhida:\n");
    scanf ("%s", cidade2);

    printf ("Digite a população da segunda cidade escolhida:\n");
    scanf ("%d", &populacao2);

    printf ("Digite a área da segunda cidadde escolhida:\n");
    scanf ("%f", &area2);

    printf ("Digite o PIB da segunda cidade escolhida:\n");
    scanf ("%f", &PIB2);

    printf ("Numero de pontos turisticos da segunda cidade:\n");
    scanf ("%d", &numero_de_pontos_turisticos2);


    densidade2 = (float) populacao2 / area2; 
    printf ("Densidade: %.2f\n", densidade2);
    

    pib_per_capita2 = (float) PIB2 / populacao2;
    printf ("Pib per capita: %.2f\n", pib_per_capita2);


    return 0;


}
