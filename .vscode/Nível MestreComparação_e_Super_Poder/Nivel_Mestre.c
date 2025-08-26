#include <stdio.h>
    int main() {
    char Estado[20], Codigo[30], Cidade[30], Estado2[20], Codigo2[30], Cidade2[30];
    double Area1, PIB1, Area2, PIB2;
    float PIBperCapita1, PIBperCapita2, Densidade1, Densidade2;
    unsigned long int Populacao1, Populacao2;
    int Pontos1, Pontos2;

       ///Como usar:
   //Digite os dados quando o programa solicitar
   //Pressione Enter após cada entrada
   //O programa calculará automaticamente:
   //Densidade populacional
   //PIB per capita
   //Exibirá o resumo de cada cidade
    printf("==========================================================\n");
    printf(" Bem-vindo ao Guia de cidades Turísticas do Brasil     \n");
    printf("========================================================\n\n");
    printf("                       Olá Aventureiro :)                  \n");      

    printf("\n");
    printf("Estado é: \n"); 
    scanf("%19s", Estado);
    printf("\n");

    printf("Cidade é: \n"); 
    scanf("%19s", Cidade);
    printf("\n");

    printf("Código da Carta é: \n"); 
    scanf("%29s", Codigo);
    printf("\n");

    printf("Área (km²): \n"); 
    scanf("%lf", &Area1);
    printf("\n");

    printf("População: \n"); 
    scanf("%d", &Populacao1);
    printf("\n");

    printf("\n Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &Pontos1);
    printf("\n");

    printf("PIB (bilhões): \n"); 
    scanf("%lf", &PIB1);
    printf("\n");
    printf("\n ================================================================= \n");
    // Cálculos Primeira cidade!
    Densidade1 = (float)Populacao1 / Area1;
    PIBperCapita1 = (float)PIB1 / Populacao1; 

    
    printf("\n==================================================\n");
    printf("Resumo dos dados informados:\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", Cidade);
    printf("Codigo: %s\n", Codigo);
    printf("Área total: %.2f km²\n", Area1);
    printf("PIB: %.2lf Milhões de reais\n", PIB1);
    printf("População: %d habitantes\n", Populacao1);
    printf("Densidade populacional: %.2f hab/km²\n", Densidade1);
    printf("PIB per Capita: R$ %.2lf por habitante\n", PIBperCapita1);
    printf("%s Tem aproximadamente %d Pontos Turísticos.\n", Cidade, Pontos1);

    printf("===================================================\n\n");
    
    // Limpa o buffer e pausa antes de continuar para a segunda cidade
    printf("Pressione ENTER para continuar para a segunda cidade...\n");
    getchar(); // Espera o usuário pressionar ENTER
    
    printf("=======================================================\n");
         /* */
         /* Vamos incluir o codigo para a leitura da segunda Carta */
    printf("                       Olá Novamente ;)                  \n");

    printf("\n Digite seu Estado: \n");
    scanf("%19s", Estado2);
    printf("\n");
    
    printf("Cidade é: \n"); 
    scanf("%19s", Cidade2);
    printf("\n");
    
    printf("Código da Carta é: \n"); 
    scanf("%29s", Codigo2);
    printf("\n");
    
    printf("Área (km²): \n"); 
    scanf("%lf", &Area2);
    printf("\n");
    
    printf("População: \n"); 
    scanf("%d", &Populacao2);
    printf("\n");

    printf("\n Digite a quantidade de Pontos Turisticos: \n");
    scanf("%d", &Pontos1);
    
    printf("PIB (bilhões): \n"); 
    scanf("%lf", &PIB2);
    printf("\n");
    printf("\n ================================================================= \n");
    // Cálculos Segunda cidade!
    Densidade2 = (double)Populacao2 / Area2;
    PIBperCapita2 = (double)PIB2 / Populacao2; 

    // Resultados Segunda cidade!
    printf("\n ================================================================= \n");
    printf("=====     Resumo dos dados informados   ============================:\n");
    printf("Estado: %s\n", Estado2);
    printf("Cidade: %s\n", Cidade2);
    printf("Codigo: %s\n", Codigo2);
    printf("Área total: %.2f km²\n", Area2);
    printf("PIB: %.2lf Milhões de reais\n", PIB2);
    printf("População: %lu habitantes\n", Populacao2);
    printf("Densidade populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: R$ %.2lf por habitante\n", PIBperCapita2);
    printf("%s Tem aproximadamente %d Pontos Turísticos.\n", Cidade2, Pontos2);
    printf("\n ================================================================= \n");

    return 0;
}