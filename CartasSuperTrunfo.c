#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
  // Variáveis
  srand(time(0));

  char estado1='A', estado2='B';
  char codigo_carta1[4]="A01", codigo_carta2[4]="B02";
  char nome_cidade1[20]="SaoPaulo", nome_cidade2[20]="RioDeJaneiro";
  unsigned long int populacao1=500, populacao2=rand() % 1000 + 1;
  float area1=400, area2= rand() % 1000 + 1;
  float pib1=400, pib2= rand() % 1000 + 1;
  int pontos_turisticos1=5, pontos_turisticos2= rand() % 1000 + 20, atributo1, atributo2;

  float densidade1 = (float) populacao1 / area1;
  float densidade2 = (float) populacao2 / area2;
  float pib_per_capita1 = (float) pib1 / populacao1;
  float pib_per_capita2 = (float) pib2 / populacao2;

  float superpoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade1);
  float superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade2);

  // Nomes das cidades
  printf("  \n");
  printf("-- %s vs %s --\n", nome_cidade1, nome_cidade2);

  // Escolher Atributo 1.
  printf("  \n");
  printf("### Escolha o primeiro atributo a comparar ###\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. Pib\n");
  printf("4. Pontos Turísticos\n");
  printf("5. Densidade Populacional\n");
  printf("6. Pib Per Capita\n");
  printf("7. Super Poder\n");
  scanf(" %d", &atributo1);

  // Lógira de resultado Atributo 1
  printf("  \n");
  printf("### Resultado Atributo 1 ###\n");
  switch (atributo1)
  {
  case 1:
    printf("Populacão da carta 1: %lu\n", populacao1);
    printf("Populacão da carta 2: %lu\n", populacao2);
    if (populacao1 > populacao2) {
      printf("População: Carta 1 venceu\n");
    }
    else if (populacao1 == populacao2)
    {
       printf("Empate\n");
    }
    else {
        printf("População: Carta 2 venceu\n");
    }
    break;
  case 2:
    printf("Área da carta 1: %.2fkm²\n", area1);
    printf("Área da carta 2: %.2fkm²\n", area2);
    if (area1 > area2) {
      printf("Área: Carta 1 venceu\n");
    }
    else if (area1 == area2)
    {
       printf("Empate\n");
    }
    else {
        printf("Área: Carta 2 venceu\n");
    }
    break;
  case 3:
    printf("PIB da carta 1: %.2f\n", pib1);
    printf("PIB da carta 2: %.2f\n", pib2);
    if (pib1 > pib2) {
      printf("PIB: Carta 1 venceu\n");
    }
    else if (pib1 == pib2)
    {
       printf("Empate\n");
    }
    else {
        printf("PIB: Carta 2 venceu\n");
    }
    break;
  case 4:
    printf("Pontos Turísticos da carta 1: %d\n", pontos_turisticos1);
    printf("Pontos Turísticos da carta 2: %d\n", pontos_turisticos2);
    if (pontos_turisticos1 > pontos_turisticos2) {
      printf("Pontos Turísticos: Carta 1 venceu\n");
    }
    else if (pontos_turisticos1 == pontos_turisticos2)
    {
       printf("Empate\n");
    }
    else {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    }
    break;
  case 5:
    printf("Densidade Populacional da carta 1: %.2f hab/km²\n", densidade1);
    printf("Densidade Populacional da carta 2: %.2f hab/km²\n", densidade2);
    if ((1.0 / densidade1 ) > (1.0 / densidade2 )) {
      printf("Densidade Populacional: Carta 1 venceu\n");
    }
    else if (densidade1 == densidade2)
    {
       printf("Empate\n");
    }
    else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }
    break;
  case 6:
    printf("PIB per Capita da carta 1: %.2f reais\n", densidade1);
    printf("PIB per Capita da carta 2: %.2f reais\n", densidade2);
    if (pib_per_capita1 > pib_per_capita2) {
      printf("PIB per Capita: Carta 1 venceu\n");
    }
    else if (pib_per_capita1 == pib_per_capita2)
    {
       printf("Empate\n");
    }
    else {
        printf("PIB per Capita: Carta 2 venceu\n");
    }
    break;
  case 7:
    printf("Super Poder da carta 1: %.2f\n", superpoder1);
    printf("Super Poder da carta 2: %.2f\n", superpoder2);
    if (superpoder1 > superpoder2) {
        printf("SuperPoder: Carta 1 venceu\n");
    }
    else if (superpoder1 == superpoder2)
    {
       printf("Empate\n");
    }
    else {
        printf("SuperPoder: Carta 2 venceu\n");
    }
    break;
  
  default:
    printf("Opção inválida\n");
    break;
  }
  
  // verificação para não continuar se atributo 1 for inválido
  if(atributo1 >= 1 && atributo1 <= 7) {
    // Escolher Atributo 2
    printf("  \n");
    printf("### Escolha o segundo atributo a comparar ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Pib\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Pib Per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &atributo2);

    if(atributo1 == atributo2) {
      printf("Você escolheu o mesmo atributo");
    } else {
       //Lógica de resultado Atributo 2
        printf("  \n");
        printf("### Resultado Atributo 2 ###\n");
        switch (atributo2)
        {
        case 1:
          printf("Populacão da carta 1: %lu\n", populacao1);
          printf("Populacão da carta 2: %lu\n", populacao2);
          if (populacao1 > populacao2) {
            printf("População: Carta 1 venceu\n");
          }
          else if (populacao1 == populacao2)
          {
            printf("Empate\n");
          }
          else {
              printf("População: Carta 2 venceu\n");
          }
          break;
        case 2:
          printf("Área da carta 1: %.2fkm²\n", area1);
          printf("Área da carta 2: %.2fkm²\n", area2);
          if (area1 > area2) {
            printf("Área: Carta 1 venceu\n");
          }
          else if (area1 == area2)
          {
            printf("Empate\n");
          }
          else {
              printf("Área: Carta 2 venceu\n");
          }
          break;
        case 3:
          printf("PIB da carta 1: %.2f\n", pib1);
          printf("PIB da carta 2: %.2f\n", pib2);
          if (pib1 > pib2) {
            printf("PIB: Carta 1 venceu\n");
          }
          else if (pib1 == pib2)
          {
            printf("Empate\n");
          }
          else {
              printf("PIB: Carta 2 venceu\n");
          }
          break;
        case 4:
          printf("Pontos Turísticos da carta 1: %d\n", pontos_turisticos1);
          printf("Pontos Turísticos da carta 2: %d\n", pontos_turisticos2);
          if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Pontos Turísticos: Carta 1 venceu\n");
          }
          else if (pontos_turisticos1 == pontos_turisticos2)
          {
            printf("Empate\n");
          }
          else {
              printf("Pontos Turísticos: Carta 2 venceu\n");
          }
          break;
        case 5:
          printf("Densidade Populacional da carta 1: %.2f hab/km²\n", densidade1);
          printf("Densidade Populacional da carta 2: %.2f hab/km²\n", densidade2);
          if ((1.0 / densidade1 ) > (1.0 / densidade2 )) {
            printf("Densidade Populacional: Carta 1 venceu\n");
          }
          else if (densidade1 == densidade2)
          {
            printf("Empate\n");
          }
          else {
              printf("Densidade Populacional: Carta 2 venceu\n");
          }
          break;
        case 6:
          printf("PIB per Capita da carta 1: %.2f reais\n", densidade1);
          printf("PIB per Capita da carta 2: %.2f reais\n", densidade2);
          if (pib_per_capita1 > pib_per_capita2) {
            printf("PIB per Capita: Carta 1 venceu\n");
          }
          else if (pib_per_capita1 == pib_per_capita2)
          {
            printf("Empate\n");
          }
          else {
              printf("PIB per Capita: Carta 2 venceu\n");
          }
          break;
        case 7:
          printf("Super Poder da carta 1: %.2f\n", superpoder1);
          printf("Super Poder da carta 2: %.2f\n", superpoder2);
          if (superpoder1 > superpoder2) {
              printf("SuperPoder: Carta 1 venceu\n");
          }
          else if (superpoder1 == superpoder2)
          {
            printf("Empate\n");
          }
          else {
              printf("SuperPoder: Carta 2 venceu\n");
          }
          break;
        
        default:
          printf("Opção inválida\n");
          break;
        }
      };
    }  

  return 0;
}
