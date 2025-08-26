#include <stdio.h>
   int main() {
   char Estado[20], Estado2[20];
   char Codigo[30], Codigo2[30];
   char Cidade[30], Cidade2[30];
   double Area1, Area2;
   unsigned long int Populacao1, Populacao2;
   float PIB1, PIB2;
   int Pontos1, Pontos2;
   double Densidade1, Densidade2;

          /* Variáveis para armazenar os dados da primeira e segunda cidade */
      printf("==========================================================\n");
      printf(" Bem-vindo ao Guia de cidades Turísticas do Brasil     \n");
      printf("========================================================\n\n");
         /*printf(''texto com formatação'', variavel1, variavel2, variavel13);*/
         /* Primeira Carta, Cidade de Aracatinga no Estado do Ceara*/
   printf("                       Olá Aventureiro :)                  \n");      
          /* Vamos incluir o codigo para a leitura da primeira Carta */
          /* Vamos incluir o codigo para a leitura da primeira Carta */
      printf("\n Digite seu Estado:\n");
      scanf("%19s", Estado);              
         /* O nome do Estado*/
         /*.2 depois do % limita a 2 casas decimais */
         /* O nome do Estado*/
      printf("\n Digite a sua Cidade: \n");
      scanf("%19s", Cidade); 
         //* O Codigo "A1 Corresponde a Cidade de Aracatinga (Ou deveria ser)*/
         /* O nome da Cidade*///
      printf("\n Digite seu Codigo: \n");
      scanf("%29s", Codigo);
         /* O Codigo "A1 Corresponde a Cidade de Aracatinga (Ou deveria ser)*/
         /* O nome da Cidade*/
      printf("\n Digite a Aréa Total da Cidade (em m²): \n");
      scanf("%lf", &Area1);
         /* A Área é um número real, então usamos %lf para ler um double */
      printf("\n Digite a População da Cidade (em milhares): \n");
      scanf("%lu", &Populacao1);
      
         /* A População é um número inteiro, então usamos %lu para ler um unsigned long int */
      printf("\n Digite o PIB da Cidade Escolhida: \n");
      scanf("%f", &PIB1);
         /* O PIB é um número real, então usamos %f para ler um float */
      printf("\n Digite a quantidade de Pontos Turisticos: \n");
      scanf("%d", &Pontos1);
      Densidade1 = (double)Populacao1 / Area1;
      printf("A densidade populacional de %s é: %.4f hab/km².\n", Cidade, Densidade1);
         // Calcule a densidade populacional da primeira cidade
         /* A densidade populacional é calculada como População / Área */
         /* Seguidos do: PIB, População, Numero de Pontos Turisticos*/
         /* Cada \n representa uma quebra de linha. 
         Use dois para deixar uma linha em branco entre as mensagens.*/
         //*printf("==================================================\n");*/
         
      printf("\n==================================================\n");
      printf("Resumo dos dados informados:\n");
      printf("Estado é: %s\n", Estado);
      printf("Cidade é: %s\n", Cidade);
      printf("Codigo:    %s\n", Codigo);
      printf("===================================================\n\n");
         
         /*%d: Imprime um inteiro no formato decimal.
         %i: Equivalente a %d.
         %f: Imprime um número de ponto flutuante no formato padrão. ( %f para ler valores do tipo float )
         %e: Imprime um número de ponto flutuante na notação científica.
         %c: Imprime um único caractere.
         %s: Imprime uma cadeia (string) de caracteres.
         %lf: é usado para ler valores do tipo double.
         */
      printf("A Àrea total de %s é: %.2f km².\n", Cidade, Area1);
      printf("O PIB de %s é: %.2f bilhões de reais.\n", Cidade, PIB1);
      printf("A População total de %s é: %lu Habitantes.\n", Cidade, Populacao1);
      printf("%s Tem aproximadamente %d Pontos Turísticos.\n", Cidade, Pontos1);
      printf("A densidade populacional de %s é: %.4f hab/km².\n", Cidade, Densidade1);

         /* A densidade populacional é calculada como População / Área */
         /* Seguidos do: PIB, População, Numero de Pontos Turisticos*/
         /*Cada \n representa uma quebra de linha. 
         Use dois para deixar uma linha em branco entre as mensagens.*/
      printf("===================================================\n\n");
      printf("=======================================================\n");
         /* */
         /* Vamos incluir o codigo para a leitura da segunda Carta */
      printf("                       Olá Novamente ;)                  \n");

      printf("\n Digite seu Estado: \n");
      scanf("%19s", Estado2);
         /* O nome do Estado*/
         /*.2 depois do % limita a 2 casas decimais */

      printf("\n Digite a sua Cidade: \n");
      scanf("%19s", Cidade2);
         /* O Codigo "A1 Corresponde a Cidade de Aracatinga (Ou deveria ser)*/

      printf("\n Digite seu Codigo: \n");
      scanf("%29s", Codigo2);

      printf("\n Digite a Aréa Total da Cidade (em km²): \n");
      scanf("%lf", &Area2);
         /* A Área é um número real, então usamos %lf para ler um double */
         /*Area2 = Area2 * 1000000; // Convertendo km² para m*/
      printf("\n Digite a População da Cidade (em habitantes): \n");
      scanf("%lu", &Populacao2);

      printf("\n Digite o PIB da Cidade Escolhida: \n");
      scanf("%f", &PIB2);

      printf("\n Digite a quantidade de Pontos Turisticos: \n");
      scanf("%d", &Pontos2);

      Densidade2 = (double)Populacao2 / Area2;
      printf("A densidade populacional de %s é: %.4f hab/km².\n", Cidade2, Densidade2);

      printf("\n=======================================================\n");
      printf("Resumo dos dados informados:\n");
      printf("Estado do: %s\n", Estado2);
      printf("Cidade de: %s\n", Cidade2);
      printf("Código: %s\n", Codigo2);
      printf("=======================================================\n\n"); 
      printf("\n\n");

      printf("A Área total de %s é: %.2f km².\n", Cidade2, Area2);
      printf("O PIB de %s é: %.2f bilhões de reais.\n", Cidade2, PIB2);
      printf("A População total de %s é: %lu Habitantes.\n", Cidade2, Populacao2);
      printf("A densidade populacional de %s é: %.4f hab/km².\n", Cidade2, Densidade2);
      printf("%s Tem aproximadamente %d Pontos Turísticos.\n", Cidade2, Pontos2);
      

      printf("===========================================================\n");
      printf("===========================================================\n\n");
      printf("         Fim do Guia de cidades Turísticas               \n\n"); 
      printf("                                                           \n");
      printf("============================================================\n");
      printf("============================================================ \n");
      printf("         Desenvolvido por: Samuel :)                       \n");
      printf("============================================================ \n");

         /*"printf" é usado para imprimir mensagens na tela*/
         /*"scanf" é usado para ler a entrada do usuário*/
         /*"scanf" lê a entrada do usuário e armazena nas variáveis correspondentes*/
         /*"Estado", "Cidade", "Codigo", "Area", "Populacao", "PIB" e "Pontos" são variáveis que armazenam os dados informados pelo usuário*/
         /*"Area", "Populacao", "PIB" e "Pontos" são variáveis que armazenam os dados informados pelo usuário*/
         /*"Cidade", "Estado", "Codigo" são strings que armazenam os dados informados pelo usuário*/
         /*"Densidade" é uma variável que armazena a densidade populacional calculada*/
         /*"Densidade" é calculada como População / Área*/     


         /*"return 0 "Usei para garantir que ocorreu tudo OK */
      printf("Pressione Enter para sair...\n");
      getchar(); // Limpa o buffer do teclado
      getchar(); // Aguarda o usuário pressionar Enter

   return 0;
}
