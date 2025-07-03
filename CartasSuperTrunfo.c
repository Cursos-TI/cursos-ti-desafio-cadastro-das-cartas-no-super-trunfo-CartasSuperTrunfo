#include <stdio.h>

// Teste Alef Santos

int main() {
    
    //Váriaveis da PRIMEIRA carta
    char estado01[2];
    char codigo_carta01[4];
    char nome_cidade01[40];
    int populacao01;
    float area_km01;
    float PIB01;
    int qtd_pontos_turisticos01;

    //Váriaveis da SEGUNDA carta
    char estado02[2];
    char codigo_carta02[4];
    char nome_cidade02[40];
    int populacao02;
    float area_km02;
    float PIB02;
    int qtd_pontos_turisticos02;


    //Cadastro da PRIMEIRA carta para o jogo
    printf("\nInsira as informações da cidade para cadastrar a PRIMEIRA carta!\n");
    
    printf("\nInsira o Nome do Estado a qual a Cidade Escolhida Pertence (Use '_' ao em vez de Espaço): ");
    scanf("%s", estado01);

    printf("\nInsira o Código da Carta seguindo o padrão da Primeira letra do Estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo_carta01);

    printf("\nInsira o Nome da Cidade Escolhida (Use '_' ao em vez de Espaço): ");
    scanf("%s", nome_cidade01);

    printf("\nInsira a População da Cidade Escolhida: ");
    scanf("%d", &populacao01);

    printf("\nInsira o Tamanho Territorial da Cidade Escolhida em KM² (Quilomêtros Quadrados): ");
    scanf("%f", &area_km01);

    printf("\nInsira o PIB da Cidade Escolhida: ");
    scanf("%f", &PIB01);

    printf("\nInsira a quantidade de Pontos Turísticos que a Cidade Escolhida possui: ");
    scanf("%d", &qtd_pontos_turisticos01);

    printf("\nCarta 01 cadastrada com sucesso!\nCadastre a próxima carta!\n");


    //Cadastro da SEGUNDA carta para o jogo
    printf("\nInsira as informações da cidade para cadastrar a Segunda carta!\n");
    
    printf("\nInsira o Nome do Estado a qual a Cidade Escolhida Pertence (Use '_' ao em vez de Espaço): ");
    scanf("%s", estado02);

    printf("\nInsira o Código da Carta seguindo o padrão da Primeira letra do Estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", codigo_carta02);

    printf("\nInsira o Nome da Cidade Escolhida (Use '_' ao em vez de Espaço): ");
    scanf("%s", nome_cidade02);

    printf("\nInsira a População da Cidade Escolhida: ");
    scanf("%d", &populacao02);

    printf("\nInsira o Tamanho Territorial da Cidade Escolhida em KM² (Quilomêtros Quadrados): ");
    scanf("%f", &area_km02);

    printf("\nInsira o PIB da Cidade Escolhida: ");
    scanf("%f", &PIB02);

    printf("\nInsira a quantidade de Pontos Turísticos que a Cidade Escolhida possui: ");
    scanf("%d", &qtd_pontos_turisticos02);

    printf("\nCarta 02 cadastrada com sucesso!\n");

    
    /*
    Exibição da PRIMEIRA CARTA
    */
    printf("\nCarta 01:\n");
    printf("Estado: %s\n",estado01);
    printf("Código: %s\n", codigo_carta01);
    printf("Nome da Cidade: %s\n", nome_cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %f km²\n", area_km01);
    printf("PIB: %f bilhões de reais\n",PIB01);
    printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos01);
    

    /*
    Exibição da SEGUNDA CARTA
    */
    printf("\nCarta 02:\n");
    printf("Estado: %s\n",estado02);
    printf("Código: %s\n", codigo_carta02);
    printf("Nome da Cidade: %s\n", nome_cidade02);
    printf("População: %d", populacao02);
    printf("Área: %f km²\n", area_km02);
    printf("PIB: %f bilhões de reais\n",PIB02);
    printf("Número de Pontos Turísticos: %d\n", qtd_pontos_turisticos02);

    return 0;
}
