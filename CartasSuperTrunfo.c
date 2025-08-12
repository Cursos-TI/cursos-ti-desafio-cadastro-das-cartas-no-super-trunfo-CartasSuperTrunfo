#include <stdio.h>

int main(){

  //variavel de escolha do switch (comparação das cartas)

  int opcao;

  //dados da primeira carta
  char estado1[50], codigo1[50], cidade1[50];
  int populacao1, pt1;
  float area1, pib1,superpower1;


  //dados da segunda carta
  char estado2[50], codigo2[50], cidade2[50];
  int populacao2, pt2;
  float area2, pib2,superpower2;

  //variaveis pib e densidade
  float d_populacional1, pp_capita1, d_populacional2, pp_capita2, dp_inverso1, dp_inverso2;


  printf("\n//-carta 1-//\n");

  printf("Nome do Estado: ");
  scanf(" %s", estado1);

  printf("Codigo da Carta: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf("%s", cidade1);

  printf("Digite a População: ");
  scanf("%d", &populacao1);

  printf("Digite a Area (km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB: ");
  scanf("%f", &pib1);
  
  printf("Quantos Pontos Turisticos: ");
  scanf("%d", &pt1);
  printf("//-carta 1-//\n");


  printf("\n//-carta 2-//\n");

  printf("Nome do Estado: ");
  scanf("%s", estado2);
  
  printf("Codigo da Carta: ");
  scanf("%s", codigo2);
  
  printf("Nome da Cidade: ");
  scanf("%s", cidade2);
  
  printf("Digite a População: ");
  scanf("%d", &populacao2);
  
  printf("Digite a Area (km²): ");
  scanf("%f", &area2);
  
  printf("Digite o PIB: ");
  scanf("%f", &pib2);
  
  printf("Quantos Pontos Turisticos: ");
  scanf("%d", &pt2);
  printf("//-carta 2-//\n");


  d_populacional1 = populacao1 / area1; // calculando a densidade populacional
  pp_capita1 = pib1 / populacao1; // calculando o pib per capita
  dp_inverso1 = 1 / d_populacional1; // inverso da densidade populacional

  // mais repetidos
  
  d_populacional2 = populacao2 / area2;
  pp_capita2 = pib2 / populacao2; 
  dp_inverso2 = 1 / d_populacional2; 

  printf("%d", d_populacional1 < d_populacional2);

  // somando as variaveis ao super poder
  
  superpower1 = (float)(populacao1 + area1 + pib1 + pt1 +d_populacional1 + pp_capita1);
  superpower2 = (float)(populacao2 + area2 + pib2 + pt2 +d_populacional2 + pp_capita2);
  
  
  
  // resultados da primeira carta
  
  printf("\nResultado da Primeira Carta\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Area: %.3f\n", area1);
  printf("PIB: %.3f\n", pib1);
  printf("Pontos Turisticos: %d\n \n", pt1);
  printf("Densidade Populacional: %.2f\n", d_populacional1);
  printf("PIB Per Capita: %.2f\n \n", pp_capita1);
  printf("Super Poder: %.2f\n", superpower1);
  
  
  // resultados da segunda carta

  printf("Resultado da Segunda Carta\n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Area: %.3f\n", area2);
  printf("PIB: %.3f\n", pib2);
  printf("Pontos Turisticos: %d\n \n", pt2);
  printf("Densidade Populacional: %.2f\n", d_populacional2);
  printf("PIB Per Capita: %.2f\n \n", pp_capita2);
  printf("Super Poder: %.2f\n", superpower2);
  
  
  printf("\nCOMPARAÇÃO DAS CARTAS\n");

  printf("[1] População\n");
  printf("[2] Area\n");
  printf("[3] Pib\n");
  printf("[4] Pontos Turistícos\n");
  printf("[5] Densidade Populacional\n");
  printf("[6] Pib Per Capita\n");
  printf("[7] Super Poderes\n");

  scanf("%d", &opcao);
  
  //comparação das cartas usando estrutura de decisão simples

  switch (opcao)
  {
  case 1:
  if (populacao1 > populacao2) {
    printf("População: Carta 1 venceu: %d\n", populacao1 );  
  } else if (populacao1 < populacao2) {
    printf("População: Carta 2 venceu: %d\n", populacao2);
  } else {
    printf("Empate!");
  }
    break;
  case 2:
  if (area1 > area2) {
    printf("Área: Carta 1 venceu: %.2f\n", area1);
  } else if (area1 < area2) {
    printf("Área: Carta 2 venceu: %.2f\n", area2);
  } else {
    printf("Empate!");
  }
    break;
    case 3:
    if (pib1 > pib2) {
      printf("PIB: Carta 1 venceu: %.2f\n", pib1);
    } else if (pib1 < pib2) {
      printf("PIB: Carta 2 venceu: %.2f\n", pib2);
    } else {
      printf("Empate!");
    }
    break;
  case 4:
    if (pt1 > pt2) {
      printf("Pontos Turísticos: Carta 1 venceu: %d\n", pt1);
    } else if (pt1 < pt2) {
      printf("Pontos Turísticos: Carta 2 venceu: %d\n", pt2);
    } else {
      printf("Empate!");
    }
    break;
  case 5:
    if (dp_inverso1 < dp_inverso2) {
      printf("Densidade Populacional: Carta 1 venceu: %.2f\n", dp_inverso1);
    } else if (dp_inverso1 < dp_inverso2) {
  printf("Densidade Populacional: Carta 2 venceu: %.2f\n", dp_inverso2);
    } else {
  printf("Empate!");
    }
    break;
  case 6:
  if (pp_capita1 > pp_capita2) {
    printf("PIB Per Capita: Carta 1 venceu: %.2f\n", pp_capita1);
  } else if (pp_capita1 < pp_capita2) {
    printf("PIB Per Capita: Carta 2 venceu: %.2f\n", pp_capita2);
  } else {
    printf("Empate!");
  }
    break;
  case 7:
    if ((int) superpower1 > superpower2) {
      printf("Super Poderes: Carta 1 venceu: %dS\n", (int) superpower1);
    } else if ((int) superpower1 < superpower2) {
      printf("Super Poderes: Carta 2 venceu: %d\n", (int) superpower2);
    } else {
      printf("Empate!");
    }
    break;
  
  default:
  printf("Opção inválida!");
    break;
  }
  return 0;
} 