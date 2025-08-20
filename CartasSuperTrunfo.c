#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Ademir

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    char estado, estado_2; // Estado
    char codigo_da_carta[10];
    char codigo_da_carta_2[10]; //Código da Carta
    char nome_da_cidade[30];
    char nome_da_cidade_2[30]; // Nome da Cidade
    int populacao, populacao_2, NumeroPontoTuristico, NumeroPontoTuristico_2; //Número de Pontos Turísticos, População 
    float area, area_2, PIB, PIB_2 ; // Área Por metro quadrado e PIB
    float SuperPoder1, SuperPoder2;
    float densidade1, densidade2, PIB_per_Capita1, PIB_per_Capita2; //Variavel para calcular densidade e PIB per Capita
    int c_populacao, c_area, c_PIB, c_pontoturistico,
    c_densidadePopulacional, c_PIBperCapita, c_SuperPoder;

        printf("Carta 1:\n");

        printf("Estado: ");
        scanf(" %c", &estado);
        
        printf("Código: ");
        scanf("%s", codigo_da_carta);
        
        printf("Nome da Cidade: ");
        scanf(" %s", nome_da_cidade);
       
        printf("População: ");
        scanf("%d", &populacao);

        printf("Área: ");
        scanf("%f", &area);

        printf("PIB: ");
        scanf("%f", &PIB);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &NumeroPontoTuristico); 

        printf("\n");

        printf("Carta 2:\n");

        printf("Estado: ");
        scanf(" %c", &estado_2);
        
        printf("Código: ");
        scanf("%s", codigo_da_carta_2);

        printf("Nome da Cidade: ");
        scanf(" %s", nome_da_cidade_2);
        
        printf("População: ");
        scanf("%d", &populacao_2);

        printf("Área: ");
        scanf("%f", &area_2);

        printf("PIB: ");
        scanf("%f", &PIB_2);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &NumeroPontoTuristico_2);

        /*Operação matemática para dividir população
         da cidade pela sua área e indicar a riqueza média por pessoa*/
        densidade1 = populacao / area;
        PIB_per_Capita1 = (PIB * 1000000000.0) / populacao;

        densidade2 = populacao_2 / area_2;
        PIB_per_Capita2 = (PIB_2 * 1000000000.0) / populacao_2;
        // Calculo de todos atributos 
        SuperPoder1 = populacao + area + (PIB * 1000000000.0) 
        + NumeroPontoTuristico + PIB_per_Capita1 + (1 / densidade1);

        SuperPoder2 = populacao_2 + area_2 + (PIB_2 * 1000000000.0) 
        + NumeroPontoTuristico_2 + PIB_per_Capita2 + (1 / densidade2);        
        
        // Comparações de atributos de cada carta.
        c_populacao = populacao > populacao_2;
        c_area = area > area_2;
        c_PIB = PIB > PIB_2;
        c_pontoturistico = NumeroPontoTuristico > NumeroPontoTuristico_2;
        c_densidadePopulacional = densidade1 > densidade2;
        c_PIBperCapita = PIB_per_Capita1 > PIB_per_Capita2;
        c_SuperPoder = SuperPoder1 > SuperPoder2;
        
        printf("\n");

        printf("Carta 1:\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo_da_carta);
        printf("Nome da Cidade: %s\n", nome_da_cidade);
        printf("População: %d\n", populacao);
        printf("Área: %fKm²\n", area); 
        printf("PIB: %f\n", PIB);
        printf("Número de Pontos Turístico: %d\n", NumeroPontoTuristico);
        printf("Densidade Populacional: %.2f hab/km²\n", (float) densidade1);
        printf("PIB per Capita: %.2f reais\n", (float) PIB_per_Capita1);
        printf("Super Poder %.2f\n", SuperPoder1);

        printf("\n");

        printf("Carta 2:\n");
        printf("Estado: %c\n", estado_2);
        printf("Código: %s\n", codigo_da_carta_2);
        printf("Nome da Cidade: %s\n", nome_da_cidade_2);
        printf("População: %d\n", populacao_2);
        printf("Área: %fKm²\n", area_2); 
        printf("PIB: %f\n", PIB_2);
        printf("Número de Pontos Turístico: %d\n", NumeroPontoTuristico_2);
        printf("Densidade Populacional: %.2f hab/km²\n", (float) densidade2);
        printf("PIB per Capita: %.2f reais\n", (float) PIB_per_Capita2);
        printf("Super Poder %.2f\n", SuperPoder2);

        printf("\n");

        printf("Comparação de Cartas:\n");
        printf("População: %d\n", c_populacao);
        printf("Área: %d\n", c_area);
        printf("PIB: %d\n", c_PIB);
        printf("Pontos Turísticos: %d\n", c_pontoturistico);
        printf("Densidade populacional: %d\n", c_densidadePopulacional);
        printf("PIB per Capita: %d\n", c_PIBperCapita);
        printf("Super Poder: %d\n", c_SuperPoder);

    return 0;
}
