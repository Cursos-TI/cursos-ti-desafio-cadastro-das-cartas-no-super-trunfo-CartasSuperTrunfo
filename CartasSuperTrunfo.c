#include <stdio.h>

//Jogo de cartas Super Trunfo - Parte 1
// Objetivo: Cadastro das Cartas

//Abaixo, vamos inserir as variaveis que iremos trabalhar...
int main() {
    char Estado[20], Estado2[20];
    char Cod_carta [5], Cod_carta2[5];
    char Nome_da_cidade [30], Nome_da_cidade2[30];
    int Populacao, Populacao2, Tot_Pontos_Turisticos, Tot_Pontos_Turisticos2;
    float Area_em_km2, Area_em_km2_2;
    float PIB, PIB2;

    //Estrutura para o usúario interagir e criar as cartas...
    //Cadastrando 2 cidades:

    //Cidade/Carta 1...
    printf ("Dados da Carta 1.. \n");

    //O código da carta será uma letra como A, seguida de 0 e demonstrando a carta que voce esta cadastrando 1, 2 3...
    printf("Digite o nome do Estado: \n");
    scanf("%s", & Estado);
    
    printf("Digite o Código da Carta: \n");
    scanf("%s", & Cod_carta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", & Nome_da_cidade);

    printf("Digite o total da População: \n");
    scanf("%d", & Populacao);

    printf("Digite a area de Extensão da Cidade: \n");
    scanf("%f,", & Area_em_km2);

    printf("PIB: \n");
    scanf("%f", & PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", & Tot_Pontos_Turisticos);

    printf("\n");
    
    //Cidade/Carta 2...

    printf ("Dados da Carta 2.. \n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", & Estado2);
    
    printf("Digite o Código da Carta: \n");
    scanf("%s", & Cod_carta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", & Nome_da_cidade2);

    printf("Digite o total da População: \n");
    scanf("%d", & Populacao2);

    printf("Digite a area de Extensão da Cidade: \n");
    scanf("%f,", & Area_em_km2_2);

    printf("PIB: \n");
    scanf("%f", & PIB2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", & Tot_Pontos_Turisticos2);
 
    printf("\n");

    //Exibição dos dados inseridos pelo usuario:

    printf("Carta 1: \n");
    printf("Nome do Estado: %s \n", Estado);
    printf("Código da Carta: %s \n", Cod_carta);
    printf("Nome da Cidade: %s \n", Nome_da_cidade);
    printf("Populacao: %d \n", Populacao);
    printf("Extensão Territorial: %.2f Km² \n", Area_em_km2);
    printf("PIB: %.2f Bilhões de Reais \n", PIB);
    printf("Total de Pontos Turísticos: %d \n", Tot_Pontos_Turisticos);
   
    printf("\n");

    printf("Carta 2: \n");
    printf("Nome do Estado: %s \n", Estado2);
    printf("Código da Carta: %s \n", Cod_carta2);
    printf("Nome da Cidade: %s \n", Nome_da_cidade2);
    printf("Populacao: %d \n", Populacao2);
    printf("Extensão Territorial: %.2f Km² \n", Area_em_km2_2);
    printf("PIB: %.2f Bilhões de Reais \n", PIB2);
    printf("Total de Pontos Turísticos: %d \n", Tot_Pontos_Turisticos2);

    return 0;
}