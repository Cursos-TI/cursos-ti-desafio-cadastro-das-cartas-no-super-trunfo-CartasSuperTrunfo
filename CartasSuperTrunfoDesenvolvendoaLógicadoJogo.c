#include <stdio.h>



  // Mensagem de boas-vindas e Menu de Jogo-----------------------------------------------------------------------------------------------------------------------------------
       
  
  // Função para exibir as regras do jogo------------------------------------------------------------------------------

  void exibirRegras() {
  printf("===== Regras do Super Trunfo - Cidades: =====\n\n\n");
  printf("1. Cada jogador irá cadastrar uma cidade com suas características.\n\n");
  printf("2. Após o cadastro, os jogadores escolherão suas cartas.\n\n");
  printf("3. O jogo comparará os valores de todos os atributos e determinará qual carta vence em cada atributo.\n\n");
  printf("4. A carta que vencer mais atributos será a vencedora.\n\n");
  printf("5. Em caso de empate em um atributo, será considerado empate para aquele atributo.\n\n");
  printf("6. Para a Densidade Populacional, vence a carta com o menor valor.\n\n");
  printf("7. O Super Poder é calculado somando todos os atributos numéricos e o inverso da densidade populacional.\n\n");
  printf("8. Vence a carta com o maior Super Poder.\n\n\n");
  printf("=============================================\n\n\n");
  }
       
  //-------------------------------------------------------------------------------------------------------------------

   int main() {

    int opcao;
       
   // Menu inicial------------------------------
   do {
   printf("\n\n\n===== Menu Inicial: =====\n\n");
   printf("1. Começar jogo\n\n");
   printf("2. Regras\n\n");
   printf("3. Sair do jogo\n\n");
   printf("=========================\n\n\n");
   printf("Digite sua escolha: ");
   scanf("%d", &opcao);
       
   switch(opcao) {

   case 1:
   // Começar jogo
   break;

   case 2:
  // Exibir regras
   exibirRegras();
   break;

   case 3:
   // Sair do jogo
   printf("Saindo do jogo...\n");

   return 0;

   default:
   printf("Opção inválida! Tente novamente.\n");
   }

   } while (opcao != 1);

   //--------------------------------------------

    // Mensagem de boas-vindas---------------------------------------------------------------

    printf("Seja Bem-vindo ao Super Trunfo - Cidades!\n\n");
    printf("Nesta versão simplificada, você irá comparar duas cartas.\n\n");
    printf("Cada carta representa uma cidade com suas características.\n\n");
    printf("O jogo comparará os valores e determinará qual carta vence em cada atributo.\n\n");
    printf("Vamos começar!\n\n\n\n");

   //----------------------------------------------------------------------------------------


   //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------



   // Declaração de variáveis para a Carta 1------------------------------------------------------------------------------------------------------------------------------------
  
    char estado1 = 'A';                                                    // Estado 
    char codigo1[5] = "A01";                                               // Código da carta
    char nome1[100];                                                       // Nome da cidade
    int populacao1, pontosturisticos1;                                     // População e pontos turísticos
    float area1, pib1, pibpercapita1, densidadepopulacional1, superpoder1; // Área, PIB, PIB per capita, densidade populacional e super poder
  
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  

    // Declaração de variáveis para a Carta 2-----------------------------------------------------------------------------------------------------------------------------------
  
    char estado2 = 'A';                                                    // Estado
    char codigo2[5] = "A02";                                               // Código da carta
    char nome2[100];                                                       // Nome da cidade
    int populacao2, pontosturisticos2;                                     // População e pontos turísticos
    float area2, pib2, pibpercapita2, densidadepopulacional2, superpoder2; // Área, PIB, PIB per capita, densidade populacional e super poder
  
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  

  
    // Entrada de dados - Carta 1-----------------------------------------------------------------------------------------------------------------------------------------------
  
    printf("===== Cadastro da Carta 1 =====\n");
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1); // Armazena o nome da cidade
    printf("Digite a população: ");
    scanf("%d", &populacao1); // Armazena a população
    printf("Digite a área em km²: ");
    scanf("%f", &area1); // Armazena a área
    printf("Digite o PIB: ");
    scanf("%f", &pib1); // Armazena o PIB
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1); // Armazena o número de pontos turísticos
  
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  

    // Cálculos Carta 1---------------------------------------------------------------------------------------------------------------------------------------------------------
  
    densidadepopulacional1 = populacao1 / area1;  // Calcula a densidade populacional
    pibpercapita1 = pib1 / populacao1;  // Calcula o PIB per capita
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + (1 / densidadepopulacional1); // Calcula o super poder
  
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  

    // Exibição dos dados - Carta 1---------------------------------------------------------------------------------------------------------------------------------------------
  
    printf("\n===== Dados da Carta 1: =====\n\n\n");
    printf("Estado: %c\n", estado1);  // Exibe o estado
    printf("Código da Carta: %s\n\n", codigo1); // Exibe o código da carta
    printf("Nome da Cidade: %s\n\n", nome1);  // Exibe o nome da cidade
    printf("População: %d\n\n", populacao1); // Exibe a população
    printf("Área: %.2f km²\n\n", area1); // Exibe a área
    printf("PIB: R$ %.2f\n\n", pib1); // Exibe o PIB
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1); // Exibe a densidade populacional
    printf("PIB per Capita: R$ %.2f\n\n", pibpercapita1); // Exibe o PIB per capita
    printf("Pontos Turísticos: %d\n\n\n", pontosturisticos1); // Exibe o número de pontos turísticos
    printf("=============================\n\n\n\n");
  
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   

  
    // Entrada de dados - Carta 2-----------------------------------------------------------------------------------------------------------------------------------------------
  
    printf("===== Cadastro da Carta 2 =====\n\n\n");
    printf("Digite o nome da cidade: "); 
    scanf(" %[^\n]", nome2); // Armazena o nome da cidade
    printf("Digite a população: ");
    scanf("%d", &populacao2); // Armazena a população
    printf("Digite a área em km²: "); 
    scanf("%f", &area2); // Armazena a área
    printf("Digite o PIB: ");
    scanf("%f", &pib2); // Armazena o PIB
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2); // Armazena o número de pontos turísticos

  
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  
  
    // Cálculos Carta 2---------------------------------------------------------------------------------------------------------------------------------------------------------
  
    densidadepopulacional2 = populacao2 / area2; // Calcula a densidade populacional
    pibpercapita2 = pib2 / populacao2; // Calcula o PIB per capita
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + (1 / densidadepopulacional2); // Calcula o super poder
  
    //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  

  
    // Exibição dos dados - Carta 2---------------------------------------------------------------------------------------------------------------------------------------------
  
    printf("\n===== Dados da Carta 2: =====\n\n\n");
    printf("Estado: %c\n\n", estado2); // Exibe o estado
    printf("Código da Carta: %s\n\n", codigo2); // Exibe o código da carta
    printf("Nome da Cidade: %s\n\n", nome2); // Exibe o nome da cidade
    printf("População: %d\n\n", populacao2); // Exibe a população
    printf("Área: %.2f km²\n\n", area2); // Exibe a área
    printf("PIB: R$ %.2f\n\n", pib2); // Exibe o PIB 
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2); // Exibe a densidade populacional
    printf("PIB per Capita: R$ %.2f\n\n", pibpercapita2); // Exibe o PIB per capita
    printf("Pontos Turísticos: %d\n\n\n", pontosturisticos2); // Exibe o número de pontos turísticos
    printf("=============================\n\n\n\n");
    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  

    // Menu para escolha das cartas pelos jogadores-----------------------------------------------------------------------

    int escolha1, escolha2;
    printf("Jogador 1, escolha sua carta (1 ou 2): ");
    scanf("%d", &escolha1);
    printf("Jogador 2, escolha sua carta (1 ou 2): ");
    scanf("%d", &escolha2);


    printf("\n\n\n==========================\n\n");
    printf("jogador 1 escolheu a carta %d\n\n", escolha1);
    printf("jogador 2 escolheu a carta %d\n\n", escolha2);
    printf("==========================\n\n\n\n");
    //--------------------------------------------------------------------------------------------------------------------


    // Verificação das escolhas-------------------------------------------------------------------------------------------

    if (escolha1 == escolha2) {
         printf("\n\n\nAmbos os jogadores escolheram a mesma carta. Por favor, reinicie o jogo e escolha cartas diferentes.\n\n");
        return 0;
    }

    //--------------------------------------------------------------------------------------------------------------------

    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------



    // Comparação entre as cartas------------------------------------------------------------------------------------------------------------------------------------------------
    printf("===== Comparação de Cartas =====\n\n\n");

    // Comparação de População--------------------------------------------------

    printf("\n===== Comparação de cartas (Atributo: População): =====\n\n\n"); 
    printf("Carta 1 - %s (%c): %d\n\n", nome1, estado1, populacao1); // Exibe a população da carta 1
    printf("Carta 2 - %s (%c): %d\n\n", nome2, estado2, populacao2); // Exibe a população da carta 2
     if (populacao1 > populacao2) {
      printf("Resultado: Carta 1 (%s) venceu!\n\n\n", nome1); // Exibe a mensagem de vitória da carta 1
    } else if (populacao2 > populacao1) {
      printf("Resultado: Carta 2 (%s) venceu!\n\n\n", nome2); // Exibe a mensagem de vitória da carta 2
     } else {
      printf("Resultado: Empate!\n\n\n"); // Exibe a mensagem de empate
    }
    printf("=========================================================\n\n\n"); 
    //-------------------------------------------------------------------------



    // Comparação de Área-----------------------------------------------------

    printf("\n===== Comparação de cartas (Atributo: Área): =====\n\n\n");
    printf("Carta 1 - %s (%c): %.2f\n\n", nome1, estado1, area1);
    printf("Carta 2 - %s (%c): %.2f\n\n", nome2, estado2, area2);
    if (area1 > area2) {
      printf("Resultado: Carta 1 (%s) venceu!\n\n\n", nome1);
     } else if (area2 > area1) {
      printf("Resultado: Carta 2 (%s) venceu!\n\n\n", nome2);
    } else {
      printf("Resultado: Empate!\n\n\n");
    }
    printf("====================================================\n\n\n");

    //--------------------------------------------------------------------------



    // Comparação de PIB--------------------------------------------------------

    printf("\n===== Comparação de cartas (Atributo: PIB): =====\n\n\n");
    printf("Carta 1 - %s (%c): R$ %.2f\n\n", nome1, estado1, pib1);
    printf("Carta 2 - %s (%c): R$ %.2f\n\n", nome2, estado2, pib2);
    if (pib1 > pib2) {
      printf("Resultado: Carta 1 (%s) venceu!\n\n\n", nome1);
     } else if (pib2 > pib1) {
      printf("Resultado: Carta 2 (%s) venceu!\n\n\n", nome2);
    } else {
      printf("Resultado: Empate!\n\n\n");
     }
     printf("===================================================\n\n\n");

    //--------------------------------------------------------------------------



    // Comparação de Densidade Populacional-------------------------------------

    printf("\n===== Comparação de cartas (Atributo: Densidade Populacional): =====\n\n\n");
    printf("Carta 1 - %s (%c): %.2f\n\n", nome1, estado1, densidadepopulacional1);
    printf("Carta 2 - %s (%c): %.2f\n\n", nome2, estado2, densidadepopulacional2);
    if (densidadepopulacional1 < densidadepopulacional2) {
      printf("Resultado: Carta 1 (%s) venceu!\n\n\n", nome1);
    } else if (densidadepopulacional2 < densidadepopulacional1) {
      printf("Resultado: Carta 2 (%s) venceu!\n\n\n", nome2);
    } else {
      printf("Resultado: Empate!\n\n\n");
    }
    printf("======================================================================\n\n\n");

    //---------------------------------------------------------------------------



    // Comparação de PIB per capita----------------------------------------------
    
    printf("\n===== Comparação de cartas (Atributo: PIB per capita): =====\n\n\n");
    printf("Carta 1 - %s (%c): R$ %.2f\n\n", nome1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%c): R$ %.2f\n\n", nome2, estado2, pibpercapita2);
    if (pibpercapita1 > pibpercapita2) {
      printf("Resultado: Carta 1 (%s) venceu!\n\n\n", nome1);
    } else if (pibpercapita2 > pibpercapita1) {
      printf("Resultado: Carta 2 (%s) venceu!\n\n\n", nome2);
    } else {
      printf("Resultado: Empate!\n\n\n");
     }
     printf("==============================================================\n\n\n");

    //---------------------------------------------------------------------------



    // Comparação de Pontos Turísticos-------------------------------------------
    printf("\n===== Comparação de cartas (Atributo: Pontos Turísticos): =====\n\n\n");
    printf("Carta 1 - %s (%c): %d\n\n", nome1, estado1, pontosturisticos1);
    printf("Carta 2 - %s (%c): %d\n\n", nome2, estado2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2) {
      printf("Resultado: Carta 1 (%s) venceu!\n\n\n", nome1);
    } else if (pontosturisticos2 > pontosturisticos1) {
      printf("Resultado: Carta 2 (%s) venceu!\n\n\n", nome2);
    } else {
      printf("Resultado: Empate!\n\n\n");
    }
    printf("===================================================================\n\n\n");

    //---------------------------------------------------------------------------



    //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  
  
    return 0;


}