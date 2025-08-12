#include <stdio.h>

int main() {
    char estado[100], estado2[100];
    char cidade[100], cidade2[100];
    char codigo [3]="01"; 
    char codigo2 [3] = "02";
    int populacao, populacao2,pontosTur2, pontosTur;
    float areakm, areakm2, PIB2, PIB;

    printf("CARTA 1\n");

    printf("Qual estado?\n");
    scanf("%s", estado);


    printf("nome da cidade?\n");
    scanf("%s", cidade);
    
    printf("numero de habitantes?\n");
    scanf("%d", &populacao);

    printf("qual area quadrada?\n");
    scanf("%f", &areakm);

    printf("qual o PIB da cidade?\n");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &pontosTur );

    printf("CARTA 2\n");

    printf("Qual estado?\n");
    scanf("%s", estado2);


    printf("nome da cidade?\n");
    scanf("%s", cidade2);
    
    printf("numero de habitantes?\n");
    scanf("%d", &populacao2);

    printf("qual area quadrada?\n");
    scanf("%f", &areakm2);

    printf("qual o PIB da cidade?\n");
    scanf("%f", &PIB2);

    printf("Quantos pontos turisticos?\n");
    scanf("%d", &pontosTur2);

    printf("CARTA 1\n");
    printf("ESTADO: %s\n", estado);
    printf("CODIGO DA CARTA: %s-%s\n", estado, codigo);
    printf("NOME DA CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", populacao);
    printf("ÁREA: %f\n", areakm);
    printf("PIB: %f\n", PIB);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosTur);

    printf("CARTA 2\n");
    printf("ESTADO: %s\n", estado2);
    printf("CODIGO DA CARTA: %s-%s\n",estado2, codigo2);
    printf("NOME DA CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", populacao2);
    printf("ÁREA: %f\n", areakm2);
    printf("PIB: %f\n", PIB2);
    printf("NUMERO DE PONTOS TURISTICOS: %d\n", pontosTur2);


    return 0;
}
