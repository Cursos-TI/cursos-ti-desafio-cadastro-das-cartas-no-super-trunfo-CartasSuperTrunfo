#include <stdio.h>
int main(){
  
  //Tipos de caracteres

  char estado1[50];
  char estado2[50];
  char codigo1[50];
  char codigo2[50];
  char nome1[50];
  char nome2[50];
  unsigned long int populacao1, populacao2; 
  int pontos1, pontos2;
  float area1, area2;
  float pib1, pib2;

  //Visualização na tela e leitura de informações

  printf("\nPreencha o Estado (apenas uma palavra): ");
  scanf("%s", estado1);

  printf("Preencha o código da carta com uma letra(A-H) seguido de número um (01-04): ");
  scanf("%s", codigo1);

  printf("Preencha o nome da cidade (apenas uma palavra): ");
  scanf("%s", nome1);

  printf("Preencha a população da cidade: ");
  scanf("%lu", &populacao1);

  printf("Preencha a área total da cidade em Km² (apenas números): ");
  scanf("%f", &area1);

  printf("Preencha o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Prencha o número de pontos turísticos da cidade: ");
  scanf("%d", &pontos1);

  printf("\nPreencha o Estado (apenas uma palavra): ");
  scanf("%s", estado2);

  printf("Preencha o código da carta com uma letra(A-H) seguido de número um (01-04): ");
  scanf("%s", codigo2);

  printf("Preencha o nome da cidade (apenas uma palavra): ");
  scanf("%s", nome2);

  printf("Preencha a população da cidade: ");
  scanf("%lu", &populacao2);

  printf("Preencha a área total da cidade em Km² (apenas números): ");
  scanf("%f", &area2);

  printf("Preencha o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Prencha o número de pontos turísticos da cidade: ");
  scanf("%d", &pontos2);

  //Cálculo densidade populacional
  
  double densidade1 = populacao1 / area1;
  double densidade2 = populacao2 / area2;

  //Cálculo PIB per capita

  float pib_per_capita1 = pib1 / populacao1;
  float pib_per_capita2 = pib2 / populacao2;

  //Cálculo Super Poder

  float super_poder1 = ( populacao1 + pontos1 + area1 + pib1 + (densidade1 / 1) + pib_per_capita1 );
  float super_poder2 = ( populacao2 + pontos2 + area2 + pib2 + (densidade2 / 1) + pib_per_capita2 );

  //Mostragem das cartas

  printf("\nCarta 1\n");
  printf(" Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n", estado1, codigo1, nome1);
  printf(" População da cidade: %lu\n Área da cidade: %.2f KM²\n PIB da cidade: %.2f\n Número de pontos turísticos: %d\n", populacao1, area1, pib1, pontos1);
  printf(" Densidade populacional: %.2f habitantes por Km²\n", densidade1);
  printf(" PIB per capita: %.2f\n", pib_per_capita1);
  printf(" Super Poder: %.2f\n\n", super_poder1);

  printf("Carta 2\n");
  printf(" Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n", estado2, codigo2, nome2);
  printf(" População da cidade: %lu\n Área da cidade: %.2f KM²\n PIB da cidade: %.2f\n Número de pontos turísticos: %d\n", populacao2, area2, pib2, pontos2);
  printf(" Densidade populacional: %.2f habitantes por Km²\n", densidade2);
  printf(" PIB per capita: %.2f\n", pib_per_capita2);
  printf(" Super Poder: %.2f\n\n", super_poder2);

  //Cálculo de resultados

  float resultadopopulacao1 = populacao1 > populacao2;
  float resultadopopulacao2 = populacao2 > populacao1;

  float resultadoarea1 = area1 > area2;
  float resultadoarea2 = area2 > area1;

  float resultadopib1 = pib1 > pib2;
  float resultadopib2 = pib2 > pib1;

  float resultadopontos1 = pontos1 > pontos2;
  float resultadopontos2 = pontos2 > pontos1;

  float resultadodensidade1 = ( densidade1 / 1 ) > ( densidade2 / 1 );
  float resultadodensidade2 = ( densidade2 / 1 ) > ( densidade1 / 1 );  

  float resultadopibpercapita1 = pib_per_capita1 > pib_per_capita2;
  float resultadopibpercapita2 = pib_per_capita2 > pib_per_capita1;

  float resultadosuperpoder1 = super_poder1 > super_poder2;
  float resultadosuperpoder2 = super_poder2 > super_poder1;

  float resultadototal1 = resultadopopulacao1 + resultadoarea1 + resultadopib1 + resultadopontos1 + resultadodensidade1 + resultadopibpercapita1 + resultadosuperpoder1;
  float resultadototal2 = resultadopopulacao2 + resultadoarea2 + resultadopib2 + resultadopontos2 + resultadodensidade2 + resultadopibpercapita2 + resultadosuperpoder2;

  float resultadofinal1 = resultadototal1 > resultadototal2;
  float resultadofinal2 = resultadototal2 > resultadototal1;


  //Mostragem dos resultados

  printf("Resultados da comparação entre as cartas:\n\n");

  printf("População: %s venceu? %.0f | %s venceu? %.0f\n", nome1, resultadopopulacao1, nome2, resultadopopulacao2);
  printf("Área: %s venceu? %.0f | %s venceu? %.0f\n", nome1, resultadoarea1, nome2, resultadoarea2);
  printf("PIB: %s venceu? %.0f | %s venceu? %.0f\n", nome1, resultadopib1, nome2, resultadopib2);
  printf("Pontos turísticos: %s venceu? %.0f | %s venceu? %.0f\n", nome1, resultadopontos1, nome2, resultadopontos2);
  printf("Densidade populacional: %s venceu? %.0f | %s venceu? %.0f\n", nome1, resultadodensidade1, nome2, resultadodensidade2);
  printf("PIB per capita: %s venceu? %.0f | %s venceu? %.0f\n", nome1, resultadopibpercapita1, nome2, resultadopibpercapita2);
  printf("Super Poder: %s venceu? %.0f | %s venceu? %.0f\n\n", nome1, resultadosuperpoder1, nome2, resultadosuperpoder2);

  printf("Resultado final: %s venceu? %.0f | %s venceu? %.0f\n\n", nome1, resultadofinal1, nome2, resultadofinal2);

  return 0;
  
}
