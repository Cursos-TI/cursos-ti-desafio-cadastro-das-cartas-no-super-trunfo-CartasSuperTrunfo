#include <stdio.h>

   int main(){
       printf("*** SEJA BEM VINDO AO JOGO SUPER TRUNFO***\n");
       printf("***PARA COMEÇARMOS DIGITE OS DADOS DA PRIMEIRA CARTA***\n");

       char estado[50] = "gustavo";
       char codigo[50] = "gustavo";
       char nome[50] = "gustavo";
       long long int populacao;
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
       scanf("%lld", &populacao);

       printf("Digite a Área da Cidade: \n");
       scanf("%f", &area);

       printf("Digite o PIB: \n");
       scanf(" %f", &pib);

       printf("Digite o número de pontos Turisticos: \n");
       scanf(" %d", &numero);

       densidade = (float) populacao / area;
       printf("A densidade é: %.2f\n", densidade);

       pibpercapita = (float) pib / populacao;
       printf("O PIB per capita é: %.2f\n", pibpercapita);
       
       superpoder = populacao + area + pib + pibpercapita + densidade + numero;
       printf("O Super poder é: %.2f\n", superpoder);


       printf("***DIGITE OS DADOS DA SEGUNDA CARTA***\n");

       char estado2[50] = "gustavo";
       char codigo2[50] = "gustavo";
       char nome2[50] = "gustavo";
       long long int populacao2;
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
       scanf("%lld", &populacao2);

       printf("Digite a Área da Cidade: \n");
       scanf("%f", &area2);

       printf("Digite o PIB: \n");
       scanf("%f", &pib2);

       printf("Digite o número de pontos Turisticos: \n");
       scanf("%d", &numero2);

      
       densidade2 = (float) populacao2 / area2;
       printf("A densidade é: %.2f\n", densidade2);

       pibpercapita2 = (float) pib2 / populacao2;
       printf("O PIB per capita é: %.2f\n", pibpercapita);
       
       superpoder2 = populacao2 + area2 + pib2 + pibpercapita2 + densidade2 + numero2;
       printf("O Super poder é: %.2f\n", superpoder2);

      int resultado1, resultado2;
      int opcao, opcao2;
       printf("*** RESULTADO ***\n");
       printf("Escolha qual vai ser a comparação\n");
       printf("1. População \n");
       printf("2. Aréa \n");
       printf("3. PIB \n");
       printf("4. Número de pontos Turisticos \n");
       printf("5. Densidade \n");
       printf("6. Pib per capita \n");
       printf("7. Super poder \n");
       printf("Escolha: ");
       scanf("%d", &opcao);

       switch (opcao)
       {
       case 1:
         printf("Você escolheu a opção População!\n");
         resultado1 = populacao > populacao2 ? 1 : 0;
       break;
       case 2:
         printf("Você escolheu a opção Área!\n");
         resultado1 = area > area2 ? 1 : 0;
       break;
       case 3:
         printf("Você escolheu a opção PIB!\n");
         resultado1 = pib > pib2 ? 1 : 0;
       break;
       case 4:
         printf("Você escolheu a opção Número de pontos turísticos!\n");
         resultado1 = numero > numero2 ? 1 : 0;
       break;
       case 5:
         printf("Você escolheu a opção Densidade Populacional!\n");
         resultado1 = densidade < densidade2 ? 1 : 0;
       break;
       case 6:
         printf("Você escolheu a opção PIB per Capita!\n");
         resultado1 = pibpercapita > pibpercapita2 ? 1 : 0;
       break;
       case 7:
         printf("Você escolheu a opção Super Poder!\n");
         resultado1 = superpoder > superpoder2 ? 1 : 0;
       break;
       
       default:
         printf("Opção Invalida!\n");
       break;
       }

       if (opcao == opcao2)
       {
         printf("Você escolheu a mesma Opção!\n");
       }else {
         printf("Escolha qual vai ser a segunda comparação\n");
         printf("1. População \n");
         printf("2. Aréa \n");
         printf("3. PIB \n");
         printf("4. Número de pontos Turisticos \n");
         printf("5. Densidade \n");
         printf("6. Pib per capita \n");
         printf("7. Super poder \n");
         printf("Escolha: ");
         scanf("%d", &opcao2);
  
         switch (opcao2)
         {
         case 1:
           printf("Você escolheu a opção População!\n");
           resultado2 = populacao > populacao2 ? 1 : 0;
         break;
         case 2:
           printf("Você escolheu a opção Área!\n");
           resultado2 = area > area2 ? 1 : 0;
         break;
         case 3:
           printf("Você escolheu a opção PIB!\n");
           resultado2 = pib > pib2 ? 1 : 0;
         break;
         case 4:
           printf("Você escolheu a opção Número de pontos turísticos!\n");
           resultado2 = numero > numero2 ? 1 : 0;
         break;
         case 5:
           printf("Você escolheu a opção Densidade Populacional!\n");
           resultado2 = densidade < densidade2 ? 1 : 0;
         break;
         case 6:
           printf("Você escolheu a opção PIB per Capita!\n");
           resultado2 = pibpercapita > pibpercapita2 ? 1 : 0;
         break;
         case 7:
           printf("Você escolheu a opção Super Poder!\n");
           resultado2 = superpoder > superpoder2 ? 1 : 0;
         break;
         
         default:
           printf("Opção Invalida!\n");
         break;
         }
         }
         
         if (resultado1 && resultado2){
            printf("Empate!!\n");
         } else if (resultado1 != resultado2){
            printf("Carta 1 vence!\n");
         } else {
            printf("Carta 2 vence!\n");
         }
         

