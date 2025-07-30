#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() 
{

   int pontos1, pontos2, populacao1, populacao2;
   float  area1, area2, pib1, pib2;
   char nome1[30], nome2[30], estado1[50], estado2[50],codigo1[50], codigo2[50];

   printf("Digite o nome da cidade da Carta1: \n"); 
   scanf("%s", nome1);

   printf("Digite a inicial do estado da Carta1: \n");
   scanf("%s", estado1);

   printf("Digite o código da Carta1: \n");
   scanf("%s", codigo1);

   printf("Digite a Area(km²) da cidade da Carta1: \n");
   scanf("%f", &area1);

   printf("Digite o numero da população da cidade da Carta1: \n");
   scanf("%d", &populacao1);

   printf("Digite o PIB da cidade da Carta1: \n");
   scanf("%f", &pib1);
   
   printf("Digite o numero de pontos turisticos da cidade da Carta1: \n");
   scanf("%d", &pontos1);

   printf("Digite o nome da cidade da Carta2: \n"); 
   scanf("%s", nome2);

   printf("Digite a inicial do estado da Carta2: \n");
   scanf("%s", estado2);

   printf("Digite o código da Carta2: \n");
   scanf("%s", codigo2);

   printf("Digite a Area(km²) da cidade da Carta2: \n");
   scanf("%f", &area2);

   printf("Digite o numero da população da cidade da Carta2: \n");
   scanf("%d", &populacao2);

   printf("Digite o PIB da cidade da Carta2: \n");
   scanf("%f", &pib2);
   
   printf("Digite o numero de pontos turisticos da cidade da Carta2: \n");
   scanf("%d", &pontos2);

   //Exibindo o resultado carta 1
   
   printf("Carta1 : \n");
   printf("Nome: %s\n",nome1);

   printf("Estado: %s\n",estado1);

   printf("Codigo: %s\n",codigo1);

   printf("Area(km²): %f\n",area1);

   printf("Numero da população: %d\n",populacao1);

   printf("PIB: %f\n",pib1);

   printf("Numero de pontos turisticos: %d\n",pontos1);

   //Exibindo resultado carta 2

   printf("Carta2 : \n");
   printf("Nome: %s\n",nome2);

   printf("Estado: %s\n",estado2);

   printf("Codigo: %s\n",codigo2);

   printf("Area(km²): %f\n",area2);

   printf("Numero da população: %d\n",populacao2);

   printf("PIB: %f\n",pib2);

   printf("Numero de pontos turisticos: %d\n",pontos2);


    return 0;
}
