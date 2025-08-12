#include <stdio.h>

   int main(){
        printf("*** SEJA BEM VINDO AO JOGO SUPER TRUNFO***\n");
        printf("***PARA COMEÇARMOS DIGITE OS DADOS DA PRIMEIRA CARTA***\n");

       char estado[30] = "gustavo";
       char codigo[30] = "gustavo";
       char nome[30] = "gustavo";
       int populacao;
       float area;
       float pib;
       int numero;
       float densidade;
       float pibpercapita;

       printf("Digite o nome do Estado: \n");
       scanf("%s", &estado);

       printf("Digite o código: \n");
       scanf("%s", &codigo);

       printf("Digite o nome da cidade: \n");
       scanf("%s", &nome);

       printf("Digite a população: \n");
       scanf("%d", &populacao);

       printf("Digite a Área da Cidade: \n");
       scanf("%f", &area);

       printf("Digite o PIB: \n");
       scanf(" %f", &pib);

       printf("Digite o número de pontos Turisticos: \n");
       scanf(" %d", &numero);

       densidade = (float)(populacao / area);
       printf("A densidade é: %.2f\n", densidade);

       pibpercapita = (float)(pib / populacao);
       printf("O PIB per capita é: %.2f\n", pibpercapita);


       printf("***DIGITE OS DADOS DA SEGUNDA CARTA***\n");

       char estado2[30] = "gustavo";
       char codigo2[30] = "gustavo";
       char nome2[30] = "gustavo";
       int populacao2;
       float area2;
       float pib2;
       int numero2;
       float densidade2;
       float pibpercapita2;

       printf("Digite o nome do Estado: \n");
       scanf("%s", &estado2);

       printf("Digite o código: \n");
       scanf("%s", &codigo2);

       printf("Digite o nome da cidade: \n");
       scanf("%s", &nome2);

       printf("Digite a população: \n");
       scanf("%d", &populacao2);

       printf("Digite a Área da Cidade: \n");
       scanf("%f", &area2);

       printf("Digite o PIB: \n");
       scanf(" %f", &pib2);

       printf("Digite o número de pontos Turisticos: \n");
       scanf(" %d", &numero2);

       densidade2 = (float)(populacao2 / area2);
       printf("A densidade é: %.2f\n", densidade2);

       pibpercapita2 = (float)(pib2 / populacao2);
       printf("O PIB per capita é: %.2f\n", pibpercapita2);


   }