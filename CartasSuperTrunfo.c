#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

// Calculando a densidade populacional
float Calc_densidade(unsigned long int populacao, float area);

// Calculando PIB per capita
float Calc_pib_perCapita(float pib, unsigned long int populacao);

// Função de calculo de Super Poder
float Calc_superPoder(int pontos_turisticos, unsigned long int populacao, float area, float pib, float pib_percapita, float densidade);

//Função de impressão de dados das cartas 
void imprimirDados (char estado, char codigo[5], char cidade[50], int populacao, float area, float pib, int pontos_turisticos, float superPoder);

int main(){
    // Declarando as variáveis com as características das cartas

    // Foi usado C1 para refência a carta 1 e C2 para carta 2
    // -------- variáveis carta 1 -----------
    int pontos_turisticos_C1;
    unsigned long int populacao_C1;
    float area_C1, pib_C1, superPoder_C1;
    char estado_C1, codigo_C1[5], cidade_C1[50];

    // Cadastro das Cartas: Capturando características e atribuinda às variáveis
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado_C1);

    printf("Digite o código da carta: \n");
    scanf(" %4s", codigo_C1);

    printf("Digite o nome da cidade: \n");
    getchar(); // consome o '\n' pendente
    fgets(cidade_C1, 50, stdin);

    // Remove o \n final, se existir
    cidade_C1[strcspn(cidade_C1, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao_C1);

    printf("Digite a área da cidade em Km²: \n");
    scanf(" %f", &area_C1);

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_C1);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontos_turisticos_C1);

    // Calculos de densidade e PIB per capita
    float densidade_C1 = Calc_densidade(populacao_C1, area_C1);
    float pib_percapita_C1 = Calc_pib_perCapita(pib_C1, populacao_C1);

    // Função Super Poder carta 1
    superPoder_C1 = Calc_superPoder(pontos_turisticos_C1, populacao_C1, area_C1, pib_C1, pib_percapita_C1, densidade_C1);

    // função de Exibição dos Dados carta 1
    imprimirDados(estado_C1, codigo_C1, cidade_C1, populacao_C1, area_C1, pib_C1, pontos_turisticos_C1, superPoder_C1);

    // -------- variáveis carta 2 -----------

    //  Foi usado C1 para refência a carta 1 e C2 para carta 2
    int pontos_turisticos_C2;
    unsigned long int populacao_C2;
    float area_C2, pib_C2, superPoder_C2;
    char estado_C2, codigo_C2[5], cidade_C2[50];

    // cadastrando carta 2
    printf("Digite a letra do estado: \n");
    scanf(" %c", &estado_C2);

    printf("Digite o código da carta: \n");
    scanf(" %4s", codigo_C2);

    printf("Digite o nome da cidade: \n");
    getchar(); // consome o '\n' pendente
    fgets(cidade_C2, 50, stdin);

    // Remove o \n final, se existir
    cidade_C2[strcspn(cidade_C2, "\n")] = 0;

    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao_C2);

    printf("Digite a área da cidade em Km²: \n");
    scanf(" %f", &area_C2);
  

    printf("Digite o PIB da cidade: \n");
    scanf(" %f", &pib_C2);

    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf(" %d", &pontos_turisticos_C2);

    // Guardando calculos de densidade e PIB per capita em variáveis.
    float densidade_C2 = Calc_densidade(populacao_C2, area_C2);
    float pib_percapita_C2 = Calc_pib_perCapita(pib_C2, populacao_C2);

    // Função Super Poder carta 2
    superPoder_C2 = Calc_superPoder(pontos_turisticos_C2, populacao_C2, area_C2, pib_C2, pib_percapita_C2, densidade_C2);

    // Função de Exibição dos Dados carta 2
    imprimirDados(estado_C2, codigo_C2, cidade_C2, populacao_C2, area_C2, pib_C2, pontos_turisticos_C2, superPoder_C2);
   
    // ------------ Comparações ----------------------
    // Guardando Comparações individuais em variáveis
    int Comp_pontos_turisticos = pontos_turisticos_C1 > pontos_turisticos_C2;
    int Comp_populacao = populacao_C1 > populacao_C2;
    int Comp_area = area_C1 > area_C2;
    int Comp_pib = pib_C1 > pib_C2;
    int Comp_superPoder = superPoder_C1 > superPoder_C2;
    int Comp_densidade = (1 / densidade_C1) > (1 / densidade_C2);
    int Comp_percapita = pib_percapita_C1 > pib_percapita_C2;

    //comparações com if/else
    if (pontos_turisticos_C1 > pontos_turisticos_C2){
        printf("Carta %c%s - %s : %d\n", estado_C1, codigo_C1, cidade_C1, pontos_turisticos_C1);
        printf("Carta %c%s - %s : %d\n", estado_C2, codigo_C2, cidade_C2, pontos_turisticos_C2);
        printf("Resultado: Carta %c%s %s - %d venceu!\n", estado_C1,codigo_C1, cidade_C1, pontos_turisticos_C1);
    } else {
        printf("Carta %c%s - %s : %d\n", estado_C1, codigo_C1, cidade_C1, pontos_turisticos_C1);
        printf("Carta %c%s - %s : %d\n", estado_C2, codigo_C2, cidade_C2, pontos_turisticos_C2);
        printf("Resultado: Carta %c%s %s - %d venceu!\n", estado_C2, codigo_C2, cidade_C2, pontos_turisticos_C2);
    }


    return 0;

}

// Calculando a densidade populacional
float Calc_densidade(unsigned long int populacao, float area){
    return (populacao / area);
}

// Calculando PIB per capita
float Calc_pib_perCapita(float pib, unsigned long int populacao){
    return (pib / populacao);
}

// Função de calculo de Super Poder
float Calc_superPoder(int pontos_turisticos, unsigned long int populacao, float area, float pib, float pib_percapita, float densidade){
    if (densidade == 0) densidade = 1;
    return ((float)pontos_turisticos + populacao + area + pib + pib_percapita + (1 / densidade));
}

//Função de impressão de dados das cartas 
void imprimirDados (char estado, char codigo[5], char cidade[50], int populacao, float area, float pib, int pontos_turisticos, float superPoder){
    printf("======================================\n");
    printf("Estado : %c\n", estado);
    printf("Código: %c%s\n", estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Calc_densidade(populacao, area));
    printf("PIB per Capita: %.2f Reais\n", Calc_pib_perCapita(pib, populacao));
    printf("Super Poder: %.2f\n", superPoder);
    printf("======================================\n");
    printf("\n");
}