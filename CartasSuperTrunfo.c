#include <stdio.h>


int main() {
    
    // Primeira carta
  char estado;
  char codigo_carta[10];
  char nome_cidade[30];
  int populacao;
  float area;
  float pib;
  int num_pontos_turisticos;

  // Segunda carta
  char estado2;
  char codigo_carta2[10];
  char nome_cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int num_pontos_turisticos2;

  printf("*******Super Trunfo*******\n");
  
  //Dados da carta 1
  printf("*******Carta 1*******\n");
  printf("Forneça uma letra de 'A' a 'H' para o estado:\n");
  scanf(" %c", &estado);
  printf("Forneça o código da carta (01 ate 04):\n");
  scanf("%s", &codigo_carta);
  printf("Forneça o nome da cidade:\n");
  scanf(" %s", &nome_cidade);
  printf("Forneça a população da cidade:\n");
  scanf("%d", &populacao);
  printf("Forneça a área da cidade (em km²):\n");
  scanf("%f", &area);
  printf("Forneça o PIB da cidade (em R$):\n");
  scanf("%f", &pib);
  printf("Forneça o número de pontos turísticos da cidade:\n");
  scanf("%d", &num_pontos_turisticos);

 
//Dados da carta 2
printf("*******Carta 2*******\n");

  printf("Forneça uma letra de 'A' a 'H' para o estado:\n");
  scanf(" %c", &estado2);
  printf("Forneça o código da carta (01 ate 04):\n");
  scanf("%s", &codigo_carta2);
  printf("Forneça o nome da cidade:\n");
  scanf(" %s", &nome_cidade2);
  printf("Forneça a população da cidade:\n");
  scanf("%d", &populacao2);
  printf("Forneça a área da cidade (em km²):\n");
  scanf("%f", &area2);
  printf("Forneça o PIB da cidade (em R$):\n");
  scanf("%f", &pib2);
  printf("Forneça o número de pontos turísticos da cidade:\n");
  scanf("%d", &num_pontos_turisticos2);

 printf("Carta 1:\n");
  printf("Estado: %c\n", estado);
  printf("Código da carta: %c%s\n", estado,codigo_carta);
  printf("Nome da cidade: %s\n", nome_cidade);
  printf("População: %d\n", populacao); 
  printf("Área: %.2f km²\n", area);
  printf("PIB: R$ %.2f\n", pib);
  printf("Número de pontos turísticos: %d\n", num_pontos_turisticos);
  
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código da carta: %c%s\n", estado2,codigo_carta2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("População: %d\n", populacao2); 
  printf("Área: %.2f km²\n", area2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Número de pontos turísticos: %d\n", num_pontos_turisticos2);


    return 0;
}
