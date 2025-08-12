#include <stdio.h>

int main() {
    // Variáveis para a carta 1
    char estado1[3];
    char cidade1[50];
    int populacao1, pontoturisticos1;
    float area1, pib1;
    // Variáveis para a carta 2
    char estado2[3];
    char cidade2[50];
    int populacao2, pontoturisticos2;
    float area2, pib2;

    // Início da captura de dados
    printf("\n  A primeira carta: \n");
    printf("Qual é o nome da sua cidade?: \n");
    scanf("%s", cidade1);

    printf("Qual é a sigla do seu estado? (ex: SP): \n");
    scanf("%s", estado1);

    printf("Quantos habitantes vivem na sua cidade?: \n");
    scanf("%d", &populacao1);

    printf("Qual é a área em KM² da sua cidade?: \n");
    scanf("%f", &area1);

    printf("Qual é o PIB da sua cidade? (Produto Interno Bruto): \n");
    scanf("%f", &pib1);

    printf("Qual o número de pontos turísticos da sua cidade?: \n");
    scanf("%d", &pontoturisticos1);

//Agora a Segunda Carta

       // Início da captura de dados da carta 2
       printf("\n  A segunda carta: \n");
       printf("Qual é o nome da sua cidade?: \n");
       scanf("%s", cidade2);
   
       printf("Qual é a sigla do seu estado? (ex: SP): \n");
       scanf("%s", estado2);
   
       printf("Quantos habitantes vivem na sua cidade?: \n");
       scanf("%d", &populacao2);
   
       printf("Qual é a área em KM² da sua cidade?: \n");
       scanf("%f", &area2);
   
       printf("Qual é o PIB da sua cidade? (Produto Interno Bruto): \n");
       scanf("%f", &pib2);
   
       printf("Qual o número de pontos turísticos da sua cidade?: \n");
       scanf("%d", &pontoturisticos2);

    // Apresentando os dados ao usuário
    printf("\n--- Carta 1 da Cidade ---\n");
    printf("Carta: %c1\n", estado1[0]); //Construção da numeração da carta unindo a primeira letra da cigla do estao ao  n. da carta
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoturisticos1);

    printf("\n--- Carta 2 da Cidade ---\n");
    printf("Carta: %c2\n", estado2[0]); //Construção da numeração da carta unindo a primeira letra da cigla do estao ao  n. da carta
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturisticos2);
    return 0;
}
