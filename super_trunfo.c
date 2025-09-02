#include <stdio.h>
int main(){
  //Tipos de caracteres//
  char estado1[50];
  char estado2[50];
  char codigo1[50];
  char codigo2[50];
  char nome1[50];
  char nome2[50];
  int populacao1,populacao2; 
  int pontos1,pontos2;
  float area1,area2;
  float pib1, pib2;

  //Visualização na tela e leitura de informações//
  printf("Preencha o Estado (apenas uma palavra): ");
  scanf("%s", estado1);

  printf("Preencha o código da carta com uma letra(A-H) seguido de número um (01-04): ");
  scanf("%s", codigo1);

  printf("Preencha o nome da cidade (apenas uma palavra): ");
  scanf("%s", nome1);

  printf("Preencha a população da cidade: ");
  scanf("%d", &populacao1);

  printf("Preencha a área total da cidade em Km² (apenas números): ");
  scanf("%f", &area1);

  printf("Preencha o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Prencha o número de pontos turísticos da cidade: ");
  scanf("%d", &pontos1);

  printf("Preencha o Estado (apenas uma palavra): ");
  scanf("%s", estado2);

  printf("Preencha o código da carta com uma letra(A-H) seguido de número um (01-04): ");
  scanf("%s", codigo2);

  printf("Preencha o nome da cidade (apenas uma palavra): ");
  scanf("%s", nome2);

  printf("Preencha a população da cidade: ");
  scanf("%d", &populacao2);

  printf("Preencha a área total da cidade em Km² (apenas números): ");
  scanf("%f", &area2);

  printf("Preencha o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Prencha o número de pontos turísticos da cidade: ");
  scanf("%d", &pontos2);

  //Mostragem da carta//

  printf("Carta 1\n");
  printf(" Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n", estado1, codigo1, nome1);
  printf(" População da cidade: %d\n Área da cidade: %f KM²\n PIB da cidade: %f\n Número de pontos turísticos: %d\n", populacao1, area1, pib1, pontos1);

  printf("Carta 2\n");
  printf(" Estado: %s\n Código da carta: %s\n Nome da cidade: %s\n", estado2, codigo2, nome2);
  printf(" População da cidade: %d\n Área da cidade: %f KM²\n PIB da cidade: %f\n Número de pontos turísticos: %d\n", populacao2, area2, pib2, pontos2);

  return 0;
  
}