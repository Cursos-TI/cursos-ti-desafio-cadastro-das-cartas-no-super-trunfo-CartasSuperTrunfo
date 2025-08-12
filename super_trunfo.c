#include <stdio.h>
int main()
{

    char Estado[20], Nome_da_cidade[20], Codigo[2];
    int Populacao, Pontosturisticos;
    float Area, Pib;

    char Estado2[20], Nome_da_cidade2[20], Codigo2[3];
    int Populacao2, Pontosturisticos2;
    float Area2, Pib2;

    // entrada de dados de ambas as cartas
    // Carta 1
    printf("iremos começar cadastrando a primeira carta!\n");
    printf("Digite o Codigo da sua carta: \n");
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

    // pib per capita e densidade populacional
    float pib_per_capita, densidade_populacional, pib_per_capita2, densidade_populacional2;

    pib_per_capita = (float)Pib / Populacao;
    pib_per_capita2 = (float)Pib2 / Populacao2;

    densidade_populacional = (float)Populacao / Area;
    densidade_populacional2 = (float)Populacao2 / Area2;

    // cadastro feito mostro os dados na tela

    printf("Carta 1\n");

    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nome_da_cidade);
    printf("População: %i\n", Populacao);
    printf("Área: %f\n", Area);
    printf("PIB: %f\n", Pib);
    printf("Número de pontos turísticos: %i\n", Pontosturisticos);
    printf("Densidade Populacional: %f\n", densidade_populacional);
    printf("PIB per Capita: %f\n\n\n", pib_per_capita);

    printf("Carta 2\n");

    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Nome_da_cidade2);
    printf("População: %i\n", Populacao2);
    printf("Área: %f\n", Area2);
    printf("PIB: %f\n", Pib2);
    printf("Número de pontos turísticos: %i\n", Pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidade_populacional2);
    printf("PIB per Capita: %f\n\n\n", pib_per_capita2);


    
    
    //variaveis para comparações
    printf("Os resultados das comparações\n");
    float superpoder=(Populacao+Area+Pib+Pontosturisticos+densidade_populacional+pib_per_capita);
    float superpoder2=(Populacao2+Area2+Pib2+Pontosturisticos2+densidade_populacional2+pib_per_capita2);
    float r1=Populacao>Populacao2;
    float r2=Area>Area2;
    float r3=Pib>Pib2;
    float r4=Pontosturisticos>Pontosturisticos2;
    float r5=densidade_populacional>densidade_populacional2;
    float r6= pib_per_capita>pib_per_capita2;
    float R7=superpoder>superpoder2;
    //resultados na tela
    printf("Resultado 1: %f\n",r1);
    printf("Resultado 2: %f\n",r2);
    printf("Resultado 3: %f\n",r3);
    printf("Resultado 4: %f\n",r4);
    printf("Resultado 5: %f\n",r5);
    printf("Resultado 6: %f\n",r6);
    printf("Resultado Super Poder: %f\n",R7);



    return 0;
}
