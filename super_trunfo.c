#include <stdio.h>

int main(){
    int População, Ponto turístico, opcao;
    char Código da carta, País, Cidade[50];
    float Area em km2, PIB;   

    printf("Menu Principal \n");
    printf("1. Iniciar jogo \n");
    printf("2. Regras \n");
    printf("Sair \n");
    printf("Escolha uma opção \n");
    scanf("%d", opcao);

    switch(opcao){
      case 1:
      printf("Iniciando jogo...\n");
      break;
      case 2:
      printf("Regras \n");
      printf("Regra1. %s", Escolha uma carta e compare com a do adversário);
      break
      case 3: 
      printf("Saindo...\n");
      default:
      printf("Opção inválida");
    }



    printf("País1: \n");
    scanf("%s", &País1);

    printf("Código da carta1: \n");
    scanf("%s", &Código da carta1);

    printf("Cidade1: \n");
    scanf("%s", &Cidade1);

    printf("População1: \n");
    scanf("%d", &População1);

    printf("Área em km21: \n");
    scanf("%f", &Área em km21);

    printf("PIB1: \n");
    scanf("%f", &PIB1);

    printf("Pontos turístcos1: \n");
    scanf("%d", &Pontos turísticos1);

    printf("Densidade demográfica1: \n");
    scanf("%f" &Densidade demográfica1);


    printf("País2: \n");
    Scanf("%s", &País2);

    printf("Código da carta2: \n");
    Scanf("%s", &Código da carta2);

    printf("Cidade2: \n");
    Scanf("%s", &Cidade2);

    printf("População2: \n");
    Scanf("%d", &População2);

    printf("Área em km22: \n");
    Scanf("%f", &Área em km22);

    printf("PIB2: \n");
    Scanf("%f", &PIB2);

    printf("Pontos turístcos2: \n");
    Scanf("%d", &Pontos turísticos2);

    printf("Densidade demográfica2: \n");
    scanf("%f" &Densidade demográfica2);

   
    printf("País1: %s", Brasil);
    printf("Código da carta1: %s", A01);
    printf("Cidade1: %s", Angra dos Reis);
    printf("População1: %d", 1000000);
    printf("Área em km21: %f", 654.328,97);
    printf("PIB1: %f", 978.609,37);
    printf("Pontos turísticos1: %d", 27);
    printf("Densidade demográfica1: %f", 547.219,65)


    printf("País2: %s", Argentina);
    printf("Código da carta2: %s", A02);
    printf("Cidade2: %s", Buenos Aires);
    printf("População2: %d", 978.654,78);
    printf("Área em km22: %f", 176.953,67);
    printf("PIB2: %f", 623.176,31);
    printf("Pontos turísticos2: %d", 17);
    printf("Densidade demográfica2: %f", 659.354,00)

    if("População1 > População2");
    if("Área em km21 > Área em km22");
    if("PIB1 > PIB2");
    if("Pontos turísticos1 > Pontos turísticos2");
    if("Densidade demográfica1 < Densidade demográfica2");
  {
    printf("### Carta A01 venceu! ### \n");
  }
    else {
      printf("### Carta A02 venceu! ### \n");

    }
    return 0;
}
