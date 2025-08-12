int main() {
  // Declaração de variáveis para a Carta 1-----------------------------------------------------------------------------------------------------------------------------------

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


  // Mensagem de boas-vindas e explicação do jogo-----------------------------------------------------------------------------------------------------------------------------

  printf("Seja Bem-vindo ao Super Trunfo - Cidades!\n");
  printf("Nesta versão simplificada, você irá comparar duas cartas.\n");
  printf("Cada carta representa uma cidade com suas características.\n");
  printf("O jogo comparará os valores e determinará qual carta vence em cada atributo.\n");
  printf("Vamos começar!\n\n");

  //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------


  // Entrada de dados - Carta 1-----------------------------------------------------------------------------------------------------------------------------------------------

  printf("=== Cadastro da Carta 1 ===\n");
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

  printf("\nDados da Carta 1:\n");
  printf("Estado: %c\n", estado1);  // Exibe o estado
  printf("Código da Carta: %s\n", codigo1); // Exibe o código da carta
  printf("Nome da Cidade: %s\n", nome1);  // Exibe o nome da cidade
  printf("População: %d\n", populacao1); // Exibe a população
  printf("Área: %.2f km²\n", area1); // Exibe a área
  printf("PIB: R$ %.2f\n", pib1); // Exibe o PIB
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1); // Exibe a densidade populacional
  printf("PIB per Capita: R$ %.2f\n", pibpercapita1); // Exibe o PIB per capita
  printf("Pontos Turísticos: %d\n\n", pontosturisticos1); // Exibe o número de pontos turísticos

  //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 

  // Entrada de dados - Carta 2-----------------------------------------------------------------------------------------------------------------------------------------------

  printf("=== Cadastro da Carta 2 ===\n");
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

  printf("\nDados da Carta 2:\n");
  printf("Estado: %c\n", estado2); // Exibe o estado
  printf("Código da Carta: %s\n", codigo2); // Exibe o código da carta
  printf("Nome da Cidade: %s\n", nome2); // Exibe o nome da cidade
  printf("População: %d\n", populacao2); // Exibe a população
  printf("Área: %.2f km²\n", area2); // Exibe a área
  printf("PIB: R$ %.2f\n", pib2); // Exibe o PIB 
  printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2); // Exibe a densidade populacional
  printf("PIB per Capita: R$ %.2f\n", pibpercapita2); // Exibe o PIB per capita
  printf("Pontos Turísticos: %d\n\n", pontosturisticos2); // Exibe o número de pontos turísticos

  //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------


  // Comparação entre as cartas------------------------------------------------------------------------------------------------------------------------------------------------
  
  printf("=== Comparação de Cartas ===\n");
  printf("População: Carta %d venceu (1)\n", (populacao1 > populacao2) ? 1 : 2); // verifica qual carta tem a maior população
  printf("Área: Carta %d venceu (1)\n", (area1 > area2) ? 1 : 2);  // verifica qual carta tem a maior área
  printf("PIB: Carta %d venceu (1)\n", (pib1 > pib2) ? 1 : 2); // verifica qual carta tem o maior PIB
  printf("Pontos Turísticos: Carta %d venceu (1)\n", (pontosturisticos1 > pontosturisticos2) ? 1 : 2); // verifica qual carta tem mais pontos turísticos
  printf("Densidade Populacional: Carta %d venceu (1)\n", (densidadepopulacional1 < densidadepopulacional2) ? 1 : 2); // verifica qual carta tem a maior densidade populacional
  printf("PIB per Capita: Carta %d venceu (1)\n", (pibpercapita1 > pibpercapita2) ? 1 : 2); // verifica qual carta tem o maior PIB per capita
  printf("Super Poder: Carta %d venceu (1)\n", (superpoder1 > superpoder2) ? 1 : 2); // verifica qual carta tem o maior super poder

  //---------------------------------------------------------------------------------------------------------------------------------------------------------------------------


  return 0;
}