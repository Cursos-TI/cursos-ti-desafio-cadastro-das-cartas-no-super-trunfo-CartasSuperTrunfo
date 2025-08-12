
#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    // O numeral na frente da variavel representa qualcarta se refere sendo 1 para carta 1 e dois para carta 2
    char codigo1[20] = "J01", codigo2[20] = "H02";
    char cidade1[30] = "Natal", cidade2[30] = "Belém";
    int populacao1 = 12325012, ponto1 = 23, populacao2 = 65432155, ponto2 = 75;
    float area1 = 1854.52, pib1 = 589.25, area2 = 1254.85, pib2 = 7896.65;
    char estado1 = 'N', estado2 = 'S';
    float densidade1, densidade2, capita1, capita2;
    float super1, super2;

// Cadastro da carta 1
    printf("\n----------------------Cadastro da Carta 1----------------------- \n");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da cidade: \n");
    scanf("%s", codigo1);

    getchar();//Limpa o buffer da entrada
    printf("Nome da cidade: \n");
    fgets(cidade1, 30, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;// Elimina a quebra de linha do fgets

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &ponto1);

// Cadastro da carta 2
printf("\n----------------------Cadastro da Carta 2----------------------- \n");

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código da cidade: \n");
    scanf("%s", codigo2);

    getchar();// Limpa o buffer da entrada
    printf("Nome da cidade: \n");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0; //Elimina a quebra de linha do fgets

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf("%d", &ponto2);

//Caulculos de densidade populacional e de PIB per capita carta 1

    densidade1 = (float)populacao1 / area1;
    capita1 = pib1 *100000000 / (float)populacao1;

//Caulculos de densidade populacional e de PIB per capita carta 2

    densidade2 = (float)populacao2 / area2;
    capita2 = pib2 *100000000 / (float)populacao2;

//Caulculo do super poder

    super1 = (float)populacao1 + area1 + pib1 + (float)ponto1 + capita1 - densidade1;
    super2 = (float)populacao2 + area2 + pib2 + (float)ponto2 + capita2 - densidade2;
    

//Exibição dos dados da carta 1
    printf("\n-----------------------------Carta 1----------------------------- \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1); 
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d de habitantes \n", populacao1); 
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhoes \n", pib1); 
    printf("Número de pontos Turisticos: %d \n", ponto1);
    printf("Desidade demografica: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", capita1);
    
//Exibição dos dados da carta 2
    printf("\n-----------------------------Carta 2----------------------------- \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2); 
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d de habitantes \n", populacao2); 
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhoes \n", pib2); 
    printf("Número de pontos Turisticos: %d \n", ponto2);
    printf("Desidade demografica: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", capita2);

//Comparação das Cartas 

    printf("\n-------------------Comparação entre as cartas-------------------\n");
    printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 Vence (1)" : "Carta 2 Vence (0)");
    printf("Área: %s\n", (area1 > area2) ? "Carta 1 Vence (1)" : "Carta 2 Vence (0)");
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 Vence (1)" : "Carta 2 Vence (0)");
    printf("Número de pontos turisticos: %s\n", (ponto1 > ponto2) ? "Carta 1 Vence (1)" : "Carta 2 Vence (0)");
    printf("Densidade demografica: %s\n", (densidade1 < densidade2) ? "Carta 1 Vence (1)" : "Carta 2 Vence (0)");
    printf("PIB per capita: %s\n", (capita1 > capita2) ? "Carta 1 Vence (1)" : "Carta 2 Vence (0)");
    printf("Super Poder: %s\n", (super1 > super2) ? "Carta 1 Vence (1)" : "Carta 2 Vence (0)");






    return 0;

}
    
