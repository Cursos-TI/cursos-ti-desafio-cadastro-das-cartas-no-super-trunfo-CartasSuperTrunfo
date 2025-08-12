#include <stdio.h>

   int main(){
        printf("*** SEJA BEM VINDO AO JOGO SUPER TRUNFO***\n");
        printf("***PARA COMEÇARMOS DIGITE OS DADOS DA PRIMEIRA CARTA***\n");

       char estado[50] = "gustavo pires";
       char codigo[50] = "gustavo pires";
       char nome[50] = "gustavo pires";
       int populacao;
       float area;
       float pib;
       int numero;
       float densidade;
       float pibpercapita;
       float superpoder;

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
       
       superpoder = populacao + area + pib + pibpercapita + (1 / densidade) + numero;
       printf("O Super poder é: %.4f\n", superpoder);


       printf("***DIGITE OS DADOS DA SEGUNDA CARTA***\n");

       char estado2[50] = "gustavo pires";
       char codigo2[50] = "gustavo pires";
       char nome2[50] = "gustavo pires";
       int populacao2;
       float area2;
       float pib2;
       int numero2;
       float densidade2;
       float pibpercapita2;
       float superpoder2;

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

       superpoder2 = populacao2 + area2 + pib2 + pibpercapita2 + (1 / densidade2) + numero2;
       printf("O Super poder é: %.4f\n", superpoder2);

       printf("*** RESULTADO ***\n");
       printf("***SE O RESULTADO FOR 1 = CARTA 1 VENCE ***\n");
       printf("***SE O RESULTADO FOR 0 = CARTA 2 VENCE ***\n");

       int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

       resultado1 = populacao > populacao2;
       printf("Carta com maior População é: %d\n", resultado1);

       resultado2 = area > area2;
       printf("Carta com maior Área é: %d\n", resultado2);

       resultado3 = pib > pib2;
       printf("Carta com maior População é: %d\n", resultado3);

       resultado4 = numero > numero2;
       printf("Carta com maior numero de pontos Turísticos é: %d\n", resultado4);

       resultado5 = densidade < densidade2;
       printf("Carta com menor Densidade é: %d\n", resultado5);

       resultado6 = pibpercapita > pibpercapita2;
       printf("Carta com maior Pib per Capita é: %d\n", resultado6);

       resultado7 = superpoder > superpoder2;
       printf("Carta com maior Suoer Poder é: %d\n", resultado7);




       return 0;
   }