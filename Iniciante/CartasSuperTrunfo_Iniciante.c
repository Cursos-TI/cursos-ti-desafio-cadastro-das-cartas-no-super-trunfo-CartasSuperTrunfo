#include <stdio.h>

int main() {
      char Estado[20], Estado2[20];
      char Codigo[30], Codigo2[30];
      char Cidade[30], Cidade2[30];
      double Area1, Area2;
      double PIB1, PIB2;
      float PIBperCapita1, PIBperCapita2;
      unsigned long int Populacao1, Populacao2;
      int Pontos1, Pontos2;
      double Densidade1, Densidade2;

    printf("==========================================================\n");
    printf(" Bem-vindo ao Guia de cidades Turísticas do Brasil        \n");
    printf("==========================================================\n\n");

    // Primeira cidade
    printf("                       Olá Aventureiro :)                 \n");
    printf("==========================================================\n\n");

    printf("\n Digite seu Estado:\n");
    scanf("%19s", Estado);

    printf("\n Digite sua Cidade: \n");
    scanf("%19s", Cidade);

    printf("\n Digite seu Código: \n");
    scanf("%29s", Codigo);

    printf("\n Digite a Aréa Total da Cidade (em km²): \n");
    scanf("%lf", &Area1);

    printf("\n Digite a População da Cidade (em habitantes): \n");
    scanf("%lu", &Populacao1);

    printf("\n Digite o PIB da Cidade Escolhida (em bilhões de reais): \n");
    scanf("%lf", &PIB1);

    printf("\n Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &Pontos1);

    // Cálculos
    Densidade1 = (float) Populacao1 / Area1; 
   Densidade1 = (double)Populacao1 / Area1;
   PIBperCapita1= (float) PIB2 / Populacao2; 

    // Resultados
    printf("A densidade populacional de %s é: %.4f hab/km².\n", Cidade, Densidade1);
    printf("PIB per Cacpta: %.2f mil reais\n", PIBperCapita1);

    printf("\n==================================================\n");
    printf("Resumo dos dados informados:\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Codigo: %s\n", Codigo);
    printf("Área total: %.2f km²\n", Area1);
    printf("PIB: %.2lf Milhões de reais\n", PIB1);
    printf("População: %lu habitantes\n", Populacao1);
    printf("Pontos Turísticos: %d\n", Pontos1);
    printf("Densidade populacional: %.4f hab/km²\n", Densidade1);
    printf("PIB per Capita: R$ %.2lf por habitante\n", PIBperCapita1);
    printf("===================================================\n\n");

    // Segunda cidade
    printf("                       Olá Novamente ;)                  \n");
    printf("\n Digite seu Estado: \n");
    scanf("%19s", Estado2);

    printf("\n Digite a sua Cidade: \n");
    scanf("%19s", Cidade2);

    printf("\n Digite seu Codigo: \n");
    scanf("%29s", Codigo2);

    printf("\n Digite a Aréa Total da Cidade (em km²): \n");
    scanf("%lf", &Area2);

    printf("\n Digite a População da Cidade (em habitantes): \n");
    scanf("%lu", &Populacao2);

    printf("\n Digite o PIB da Cidade Escolhida (em bilhões de reais): \n");
    scanf("%lf", &PIB2);

    printf("\n Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &Pontos2);

    // Cálculos
    Densidade2 = (double)Populacao2 / Area2;
    PIBperCapita2 = (PIB1 * 1000000000) / Populacao2;

    // Resultados
    printf("A densidade populacional de %s é: %.4f hab/km².\n", Cidade2, Densidade2);
    printf("O PIB per Capita de %s é: R$ %.2lf por habitante.\n", Cidade2, PIBperCapita2);

    printf("\n=======================================================\n");
    printf("Resumo dos dados informados:\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Código: %s\n", Codigo2);
    printf("Área total: %.2f km²\n", Area2);
    printf("PIB: %.2lf bilhões de reais\n", PIB2);
    printf("População: %lu habitantes\n", Populacao2);
    printf("Pontos Turísticos: %d\n", Pontos2);
    printf("Densidade populacional: %.4f hab/km²\n", Densidade2);
    printf("PIB per Capita: R$ %.2lf por habitante\n", PIBperCapita2);
    printf("===========================================================\n\n");

    printf("         Fim do Guia de cidades Turísticas               \n");
    printf("                             \n");
    printf("============================================================\n");

    printf("Pressione Enter para sair...\n");
    getchar(); // Limpa o buffer
    getchar(); // Aguarda Enter

    return 0;
}
