#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    char confirmacao[4];
    short int pnt_carta1 = 0, pnt_carta2 = 0; // Armazenaram os pontos de cada carta
    
    /*      Definição das variáveis para a carta 1      */
    char codigo_cidade1[3], nome1[17], estado1;          // Variáveis relacionadas ao codigo e ao nome da cidade, respectivamente, e a variável para o nome do estado.
    unsigned long int populacao1;                        // Definição da variável população
    short int num_pnt_turisticos1;                       // Variáveis para quant. populacional e total de pontos turísticos, respectivamente.
    float area1, pib1, dens_populacional1, pib_pcapita1; // Variáveis de área por km² e PIB.
    unsigned long int superpoder1;                                  // Definição da variável superpoder, seu valor é a inversão da densidade populacional somado com todos os atributos
    /*                      --x--                       */

    /*      Definição das variáveis para a carta 2      */
    char codigo_cidade2[3], nome2[17], estado2;
    unsigned long int populacao2;
    short int num_pnt_turisticos2;
    float area2, pib2, dens_populacional2, pib_pcapita2;
    unsigned long int superpoder2;
    /*                      --x--                       */

    /*          Apresentação          */
    printf("Inicializando o jogo:\nSuper Trunfo de Países\n\nSessão: Cadastro de cartas\n\n");
    printf("Bem-vindo. Nesta sessão do jogo se cadastram as cartas que serão utilizadas no jogo Super Trunfo Países.\n\n");
    printf("Conto com sua participação para responder as seguintes perguntas a fim de cadastrar 2 novas cartas.\nEstá preparado? Digite SIM para darmos início: "); // Trecho de carater simulatório, para gerar tanto entendimento quanto a atenção do usuário para os inputs subsequentes
    scanf("%3s", confirmacao);                                                                                                                                      // Para gerar uma quebra entre os textos e um certo senso de fluidez para o usuário

    /*          Cadastro da carta 1         */
    printf("\nVamos começar com a Carta 1:\n\n");
    printf("Primeiramente trataremos sobre o nome do Estado.\nNeste jogo existem 8 estados, listados de A a H.\n\nPara cadastrar uma nova carta escolha um estado de A a H: ");
    scanf(" %c", &estado1); // coleta de input do usuário para para o nome do estado. Adicionado espaço para não necessitar de getchar()
    printf("\nVejo que escolheu o estado %c, então agora quero que escolha a cidade.\n", estado1);
    printf("Saiba que os estados se dividem em 4 cidades, listados de 01 a 04, incluindo o zero a esquerda.\n\n"); // Explicação da mecânica do jogo no que tange às cidades, bem como do zero a esquerda.
    printf("Portanto escolha um número de 01 a 04: ");
    scanf("%s", codigo_cidade1); // coleta de input do usuário para para o código da cidade.
    printf("Muito bem, agora vamos nomear esta cidade.\n\n");
    printf("Antes de nomear a cidade quero que se atente a 2 observações:\n");
    printf("1- Não utilize espaços, utilize underline ( _ ) no lugar.\n2- O nome da cidade é livre, mas cuidado para não passar 16 caracteres.\n\n");
    printf("Qual o nome da cidade? ");
    scanf("%s", nome1); // coleta de input do usuário para para o nome da primeira cidade.

    /*          Coleta de dados sobre a cidade 1            */
    printf("\nMuito bem, já possuimos os dados que identificam a carta, desde o nome ao código dela.\n");
    printf("Agora iremos adicionar as informações que serão comparadas com as de outras cartas, pesquise na internet para possuir um cadastro assertivo.\n Os dados que precisaremos será:\n");
    printf("1- População\n2- Área(km²)\n3- PIB\n4- Número de Pontos Turísticos\n\n");
    printf("Vamos começar com a População, segundo o IBGE, qual a quantidade de pessoas na cidade %s? ", nome1);
    scanf("%lu", &populacao1);
    printf("\nUtilizando ponto no lugar da vírgula responda.\n Qual a área por quilômetro quadrado (km²)? ");
    scanf("%f", &area1);
    printf("\nPesquise na internet o PIB, em bilhões de reais.\nEscreva o valor sem o identificador monetário e use ponto no lugar da vírgula: ");
    scanf("%f", &pib1);
    printf("\nPor fim, qual a quantidade de pontos turísticos na cidade? ");
    scanf("%hd", &num_pnt_turisticos1);

    //      --> PIB per capita & Densidade Populacional Carta 1 <--
    //    Cálculo da densidade polucaional
    dens_populacional1 = (float)populacao1 / area1;

    //    Cálculo do PIB per Capita
    pib_pcapita1 = (float)pib1 * 10e8 / populacao1;

    /*      CÁLCULO DO SUPERPODER

    Conforme já citado anteriormente, o superpoder se calcula somando todas as variáveis com o inverso da densidade populacional.
    */
    superpoder1 = (float)populacao1 + area1 + pib1 + pib_pcapita1 + 1 / dens_populacional1;

    printf("\nPerfeito, já possuimos os dados da carta 1 em nosso banco de dados.");

    /*          Fim do cadastro da carta 1         */

    
    getchar(); // para retirar o \n que ficou e estava sendo abstraído pela variável estado

    
    /*          Cadastro da carta 2         */

    printf(" Agora vamos ao cadastro da carta 2.\nO processo é bem semelhante, só fique atento para não cadastrar a mesma carta 2 vezes.\n\n");
    printf("Primeiramente vamos ao nome do segundo Estado.\nPara cadastrar a nova carta escolha um estado de A a H: ");
    scanf("%c", &estado2); // coleta de input do usuário para o nome do estado.
    printf("\nVejo que escolheu o estado %c, qual cidade escolherá para a carta 2?.\n", estado2);
    printf("Sabendo que todos os estados se dividem em 4 cidades, escolha um número de 01 a 04 (lembre-se de incluir o zero à esquerda): ");
    scanf("%s", codigo_cidade2); // coleta de input do usuário para o código da cidade.
    printf("Muito bem, agora vamos nomear esta cidade.\n\n");
    printf("Antes de nomear a cidade da segunda carta, quero lhe lembrar das 2 observações já citadas anteriormente:\n");
    printf("1- Não utilize espaços, utilize underline ( _ ) no lugar.\n2- O nome da cidade é livre, mas cuidado para não passar 16 caracteres.\n\n");
    printf("Qual o nome da cidade da segunda carta? ");
    scanf("%s", nome2); // coleta de input do usuário para para o nome da segunda cidade.

    /*          Coleta de dados sobre a cidade 2            */
    printf("\nMuito bem, já possuimos os dados que identificam a segunda carta, desde o nome da cidade ao código dela.\n");
    printf("Agora iremos adicionar as informações que serão comparadas com as de outras cartas, pesquise na internet para possuir um cadastro assertivo.\nOs dados que precisaremos será:\n");
    printf("1- População\n2- Área(km²)\n3- PIB\n4- Número de Pontos Turísticos\n\n");
    printf("Vamos começar com a População, segundo o IBGE, qual a quantidade de pessoas na cidade %s? ", nome2);
    scanf("%lu", &populacao2);
    printf("\nAgora, utilizando ponto no lugar da vírgula responda.\n Qual a área por quilômetro quadrado (km²)? ");
    scanf("%f", &area2);
    printf("\nPesquise na internet o PIB, em bilhões de reais.\nEscreva o escreva valor sem o identificador monetário e use ponto no lugar da vírgula: ");
    scanf("%f", &pib2);
    printf("\nPor fim, qual a quantidade de pontos turísticos da cidade %s? ", nome2);
    scanf("%hd", &num_pnt_turisticos2);

    //      --> PIB per capita & Densidade Populacional Carta 1 <--
    //    Cálculo da densidade polucaional
    dens_populacional2 = (float)populacao2 / area2;

    //    Cálculo do PIB per Capita
    pib_pcapita2 = (float)pib2 * 10e8 / populacao2;
    /*      CÁLCULO DO SUPERPODER

    Conforme já citado anteriormente, o superpoder se calcula somando todas as variáveis com o inverso da densidade populacional.
    */
    superpoder2 = (float)populacao2 + area2 + pib2 + pib_pcapita2 + 1 / dens_populacional2;

    /*          Fim do cadastro da carta 2         */
    
    
    getchar(); // Aparentemete, após executar o código, verifiquei que sobrou um \n do código anterior e suprimiu scanf
    
    
    printf("\n\nPerfeito!\nAs 2 cartas já estão cadastradas em nosso banco de dados.\nVamos as verificar agora? (Digite SIM para verificar)\n");
    
    
    // Voltei a utilizar as 2 funções abaixo para gerar uma quebra entre o momento do cadastro das cartas e sua visualização. Na busca de gerar fluidez para o usuário.
    scanf("%3s", confirmacao);


    /*          Exibição da Carta 1         */
    printf("\nInicializando exibição da Carta 1\n\n");
    printf("----->      Carta 1: %c%s     <-----\n\n", estado1, codigo_cidade1);
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo_cidade1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu de pessoas\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", num_pnt_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_populacional1);
    printf("PIB per Capita: R$ %.2f\n\n", pib_pcapita1);
    printf("SuperPoder da Carta 1: %.lu\n\n", superpoder1);
    printf("----->      Carta 1: %c%s     <-----\n\n", estado1, codigo_cidade1);


    /*          Exibição da Carta 2         */
    printf("Inicializando exibição da Carta 2\n\n");
    printf("----->      Carta 2: %c%s     <-----\n\n", estado2, codigo_cidade2);
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo_cidade2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu de pessoas\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", num_pnt_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_populacional2);
    printf("PIB per Capita: R$ %.2f\n\n", pib_pcapita2);
    printf("SuperPoder da Carta 2: %lu\n\n", superpoder2);
    printf("----->      Carta 2: %c%s     <-----\n\n", estado2, codigo_cidade2);


    printf("Vamos dar início ao Sistema de Comparação de Cartas? ");
    scanf("%s", confirmacao);
    printf("\n----->      Sistema de Comparação de Cartas     <-----\n\n");
    printf("Seu funcionamento consiste em um comparativo atributo por atributo entre as cartas.\n\n");
    
    /*      CALCULO DOS ATRIBUTOS
    
    Será utilizado um sistema if-else, para estabelecer a carta vencedora e atributos de incremento
    para o acumulo dos pontos.
    No final se comparará os resultados finais
    */
   
    printf("    ATRIBUTO: População\n");
   printf("Carta 1 - %s (%c): %u\nCarta 2 - %s (%c): %u\n\n", nome1, estado1, populacao1, nome2, estado2, populacao2);
    if (populacao1 > populacao2)
   {
    pnt_carta1 ++;
    printf("Carta 1 - %s (%c) vence a rodada.\n", nome1, estado1);
   }
   else
   {
    pnt_carta2 ++;
    printf("Carta 2 - %s (%c) vence a rodada.\n", nome2, estado2);
   }

   
   printf("\n    ATRIBUTO: Área por Km²\n");
   printf("Carta 1 - %s (%c): %.2f km²\nCarta 2 - %s (%c): %.2f km²\n\n", nome1, estado1, area1, nome2, estado2, area2);
    if (area1 > area2)
   {
    pnt_carta1 ++;
    printf("Carta 1 - %s (%c) vence a rodada.\n", nome1, estado1);
   }
   else
   {
    pnt_carta2 ++;
    printf("Carta 2 - %s (%c) vence a rodada.\n", nome2, estado2);
   }


   printf("\n    ATRIBUTO: PIB\n");
   printf("Carta 1 - %s (%c): R$ %.3f Bilhões\nCarta 2 - %s (%c): R$ %.3f Bilhões\n\n", nome1, estado1, pib1, nome2, estado2, pib2);
    if (pib1 > pib2)
   {
    pnt_carta1 ++;
    printf("Carta 1 - %s (%c) vence a rodada.\n", nome1, estado1);
   }
   else
   {
    pnt_carta2 ++;
    printf("Carta 2 - %s (%c) vence a rodada.\n", nome2, estado2);
   }
   

   printf("\n    ATRIBUTO: Pontos Turísticos\n");
   printf("Carta 1 - %s (%c): %d\nCarta 2 - %s (%c): %d\n\n", nome1, estado1, num_pnt_turisticos1, nome2, estado2, num_pnt_turisticos2);
    if (num_pnt_turisticos1 > num_pnt_turisticos2)
   {
    pnt_carta1 ++;
    printf("Carta 1 - %s (%c) vence a rodada.\n", nome1, estado1);
   }
   else
   {
    pnt_carta2 ++;
    printf("Carta 2 - %s (%c) vence a rodada.\n", nome2, estado2);
   }
   
   
   printf("\n    ATRIBUTO: Densidade Populacional\n");
   printf("Carta 1 - %s (%c): %.2f hab/km²\nCarta 2 - %s (%c): %.2f hab/km²\n\n", nome1, estado1, dens_populacional1, nome2, estado2, dens_populacional2);
    if (dens_populacional1 < dens_populacional2)
   {
    pnt_carta1 ++;
    printf("Carta 1 - %s (%c) vence a rodada.\n", nome1, estado1);
   }
   else
   {
    pnt_carta2 ++;
    printf("Carta 2 - %s (%c) vence a rodada.\n", nome2, estado2);
   }
   
   
   printf("\n    ATRIBUTO: PIB per Capita\n");
   printf("Carta 1 - %s (%c): R$ %.2f por pessoa\nCarta 2 - %s (%c): R$ %.2f por pessoa\n\n", nome1, estado1, pib_pcapita1, nome2, estado2, pib_pcapita2);
    if (pib_pcapita1 > pib_pcapita2)
   {
    pnt_carta1 ++;
    printf("Carta 1 - %s (%c) vence a rodada.\n", nome1, estado1);
   }
   else
   {
    pnt_carta2 ++;
    printf("Carta 2 - %s (%c) vence a rodada.\n", nome2, estado2);
   }
   

   printf("\n    ATRIBUTO: SuperPoder\n");
   printf("Carta 1 - %s (%c): %lu\nCarta 2 - %s (%c): %lu\n\n", nome1, estado1, superpoder1, nome2, estado2, superpoder2);
    if (superpoder1 > superpoder2)
   {
    pnt_carta1 ++;
    printf("Carta 1 - %s (%c) vence a rodada.\n", nome1, estado1);
   }
   else
   {
    pnt_carta2 ++;
    printf("Carta 2 - %s (%c) vence a rodada.\n", nome2, estado2);
   }
   
   // Apresentação da Carta Vitoriosa
   printf("\nTemos um vencedor!\n\nA ");
   if (pnt_carta1 > pnt_carta2)
   {
    printf("Carta 1: %s (%c) venceu somando %d vitorias na Batalha dos Atributos\n", nome1, estado1, pnt_carta1);
   }
   else
   {
    printf("Carta 2: %s (%c) venceu somando %d vitorias na Batalha dos Atributos\n", nome2, estado2, pnt_carta2);
   }
   
    return 0;
}
