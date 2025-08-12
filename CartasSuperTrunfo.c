#include <stdio.h>
#include <string.h>

int main(){

    // Declaração das variaveis
    char estado = 'A';
    char estado2 = 'B';
    char codigoDaCarta[5] = "A01"; // Código da carta deve ter 3 caracteres + 1 para o terminador nulo
    char codigoDaCarta2[5] = "B02";

    // Inicializando as variaveis:
    char nomeDaCidade[30] = "SÃO PAULO";
    char nomeDaCidade2[30] = "RIO DE JANEIRO";

    unsigned long int populacao = 11450000; // 11.45 milhões
    unsigned long int populacao2 = 6211000; // 6.21 milhões
    int NumeroDePontosTuristicos = 10;
    int NumeroDePontosTuristicos2 = 5;
    float AreaPorKm2 = 1521.5; // 1.521,5 km²
    float AreaPorKm22 = 1200.00; // 1.200,00 km²
    float PIB = 5000000000.0;
    float PIB2 = 3000000000.0;

    // ENTRADA DE DADOS CARTA 1

    printf("CARTA 1\n\n");
    printf("Estado: ");
    scanf(" %c", &estado);
    printf("Código da carta: %c0", estado);
    scanf("%s", codigoDaCarta);
    getchar(); // Limpa o buffer do teclado antes de ler a string da cidade
    printf("Nome da cidade: ");

    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin); 
        // strcspn retorna o índice do primeiro caractere de nova linha '\n'
    nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacao);
    printf("Número de pontos turísticos: ");
    scanf("%d", &NumeroDePontosTuristicos);
    printf("Área (km²): ");
    scanf("%f", &AreaPorKm2);
    printf("PIB: ");
    scanf("%f", &PIB);

    // Cálculo do PIB per capita e densidade demográfica
    float pibPerCapita = PIB / populacao;
    float densidadeDemografica = populacao / AreaPorKm2;

    printf("Densidade Demografica: %.2f\n", densidadeDemografica);
    printf("PIB per Capita: %.2f\n", pibPerCapita);

    printf("-----------------------------------------\n\n");

    // ENTRADA DE DADOS CARTA 2
    printf("CARTA 2\n\n");

    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da carta: %c0", estado2);
    scanf("%s", codigoDaCarta2);
    getchar(); // Limpa o buffer do teclado antes de ler a string da cidade
    printf("Nome da cidade: ");

    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin); 
        // strcspn retorna o índice do primeiro caractere de nova linha '\n'
    nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';

    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &NumeroDePontosTuristicos2);
    printf("Área (km²): ");
    scanf("%f", &AreaPorKm22);
    printf("PIB: ");
    scanf("%f", &PIB2);
        // Cálculo do PIB per capita e densidade demográfica
    float pibPerCapita2 = PIB2 / populacao2;
    float densidadeDemografica2 = populacao2 / AreaPorKm22;

    printf("Densidade Demografica: %.2f\n", densidadeDemografica);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("-----------------------------------------\n\n");
    //
    return 0;
}