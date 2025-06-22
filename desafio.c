#include <stdio.h>

int main (){
    char nome_cidade1 [25];
    int populacao1;
    float area1;
    float PIB1;
    int numero_de_pontos_turisticos1;
    
    printf ("Digite o nome da primeira cidade:\n");
    scanf("%s", nome_cidade1);

    printf ("Digite a populacao1:\n");
    scanf ("%d", &populacao1);

    printf ("Digite a area da cidade escolhida:\n");
    scanf ("%f", &area1);

    printf ("Digite o PIB da cidade escolhida:\n");
    scanf ("%f", &PIB1);

    printf ("Numero de pontos turisticos:\n");
    scanf ("%d", &numero_de_pontos_turisticos1);

    char nome_cidade2 [30];
    int populacao2;
    float area2;
    float PIB2;
    int numero_de_pontos_turisticos2;
    
    printf ("Digite o nome da segunda cidade:\n");
    scanf("%s", nome_cidade2);

    printf ("Digite a populacao2:\n");
    scanf ("%d", &populacao2);

    printf ("Digite a area da segunda cidade escolhida:\n");
    scanf ("%f", &area2);

    printf ("Digite o PIB da segunda cidade escolhida:\n");
    scanf ("%f", &PIB2);

    printf ("Numero de pontos turisticos:\n");
    scanf ("%d", &numero_de_pontos_turisticos2);


    return 0;

}