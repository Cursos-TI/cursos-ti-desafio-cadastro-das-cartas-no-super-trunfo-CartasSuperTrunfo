#include <stdio.h>

int main(){

//insira os dados da primeira carta abaixo

char estado1[30];          //estado da carta 1
char estado0[30];          //NAO UTILIZAR
char codigo1[03];          //código da carta 1
char cidade1[40];          //cidade da carta 1
unsigned int  populacao1;           //população da carta 1
float area1;               //area em km² da carta 1
float PIB1;                //PIB da carta 1
float densidade1;
float pibpercapita1;
int   pontos1;             //Pontos turisticos da carta 1


printf("Para cadastrar suas cartas responda as questoes a seguir \n");
printf("Agora iremos dar inicio ao cadastro da carta 1 \n"); //frase para cadastro carta 1
printf("\n"); //espaçamento estético

printf("Carta 1 \n"); //titulo da primeira carta

printf("digite o estado: \n");
scanf("%s", &estado1);

printf("digite a cidade: \n");
scanf("%s", &cidade1);

printf("digite o codigo da carta: \n");
scanf("%s", &codigo1);

printf("digite a população: \n");
scanf("%u", &populacao1);

printf("digite a área: \n");
scanf("%f", &area1);

printf("digite o PIB: \n");
scanf("%f", &PIB1);

printf("digite os pontos turisticos: \n");
scanf("%d", &pontos1);

densidade1 = (populacao1 / area1);

pibpercapita1 = (PIB1 / populacao1);

//IMPRESSAO DE DADOS CARTA 1 \/

printf("\n"); //espaçamento estético

printf("Carta 1 \n"); //titulo da primeira carta

printf("Estado: %s\n", estado1);

printf("Cidade: %s\n", cidade1);

printf("Código da carta: %s\n", codigo1);

printf("População: %u\n", populacao1);

printf("Área: %.0f\n", area1);

printf("PIB: %.2f\n", PIB1);

printf("Pontos turisticos: %d\n", pontos1);

printf("a densidade populacional é: %.2f\n", densidade1);

printf("o PIB per capita é: %.2f\n", pibpercapita1);

printf("\n"); //espaçamento estético
printf("Agora com a primeira carta pronta iremos fazer o cadastro da segunda \n");
printf("\n"); //espaçamento estético



//insira os dados da segunda carta abaixo

char  estado2[30];              //estado da carta 2
char  estado00[20];             //NAO UTILIZAR
char  codigo2[3];               //código da carta 2
char  cidade2[20];              //cidade da carta 2
unsigned int   populacao2;               //população da carta 2
float area2;                   //area em km² da carta 2
float PIB2;                    //PIB da carta 
float densidade2;              
float pibpercapita2;
int   pontos2;                 //Pontos turisticos da carta 2


printf("Carta 2 \n"); //titulo da segunda carta
printf("digite o estado: \n");
scanf("%s", &estado2);

printf("digite a cidade: \n");
scanf("%s", &cidade2);

printf("digite o codigo da carta: \n");
scanf("%s", &codigo2);

printf("digite a população: \n");
scanf("%u", &populacao2);

printf("digite a área: \n");
scanf("%f", &area2);

printf("digite o PIB: \n");
scanf("%f", &PIB2);

printf("digite os pontos turisticos: \n");
scanf("%d", &pontos2);

densidade2 = (populacao2 / area2);

pibpercapita2 = (PIB2 / populacao2);

//IMPRESSAO DE  DADOS, CARTA2 \/

printf("\n"); //espaçamento estético

printf("Carta 2 \n"); //titulo da segunda carta

printf("Estado: %s\n", estado2);

printf("Cidade: %s\n", cidade2);

printf("Código da carta: %s\n", codigo2);

printf("População: %d\n", populacao2);

printf("Área: %.0f\n", area2);

printf("PIB: %.2f\n", PIB2);

printf("Pontos turisticos: %d\n", pontos2);

printf("a densidade populacional é: %.2f\n", densidade2);

printf("o PIB per capita é: %.2f\n", pibpercapita2);

return 0;
