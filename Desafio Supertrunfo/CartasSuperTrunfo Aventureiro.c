#include <stdio.h>
// finalização do código commit 26/02/2025 10:30
// Nível Aventureiro: Calculando Densidade Populacional e PIB per Capita
// Feito por André Massaud

// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        // Atributos
        char Estado[3];  char Estado2[3];
        char codigo_carta[4];  char codigo_carta2[4];
        char Nome_da_Cidade[25]; char Nome_da_Cidade2[25]; 
        int Populacao; int Populacao2;
        float Area; float Area2;
        float PIB; float PIB2;
        int Numero_de_pontos_turisticos; int Numero_de_pontos_turisticos2;
    
        //Variaveis de Calculo de propriedades
        float PIBperCapita1, densidade1;
        float PIBperCapita2, densidade2;

        //Dialogo de apresentação do jogo ao usuario

        printf("Olá, jogador! Neste jogo você precisará inserir dados de duas cartas \n");
        printf("Depois de inserir os dados, vamos apresentar ambas inserções\n");
        printf("E mostraremos o pib per capita e densidade populacional\n");
        printf("Temos algumas regras básicas:\n");
        printf("O código da carta deve ser a inicial da cidade e mais dois numeros crescentes\n");
        printf("Como por exemplo, São Paulo deve ser S01\n");
        printf("E a segunda carta, será Rio de Janeiro, R02\n");
        printf("A próxima deve ser a inicial e 03, e assim por diante!\n");
        printf("A segunda regra é: Esteja atualizado com os dados da cidade de acordo com o IBGE\n");
        printf("Não minta nos dados!\n");


        // Introdução de dados das cartas
        
        //carta 1

        printf("Introduza os dados da carta 1 a seguir:\n");
    
            printf("Sigla do Estado da cidade (Duas letras): \n");
            scanf ("%2s", Estado);

            printf("Código da carta (primeira letra seguida de dois numeros): \n");
            scanf("%3s", codigo_carta);

            printf("Introduza o nome da cidade: \n");
            scanf(" %[^\n]", Nome_da_Cidade);
    
            printf("Introduza o número de população: \n");
            scanf("%d", &Populacao);
    
            printf("Introduza o raio de distância total da cidade em km²: \n");
            scanf("%f", &Area);
    
            printf("Introduza o PIB da cidade em bilhões: \n");
            scanf("%f", &PIB);
    
            printf("Introduza o número de pontos turísticos: \n");
            scanf("%d", &Numero_de_pontos_turisticos);
            
            
         //carta 2

        printf("Introduza os dados da carta 2 a seguir:\n");
    
            printf("Sigla do Estado da cidade (Duas letras): \n");
            scanf ("%2s", Estado2);

            printf("Código da carta (primeira letra seguida de dois numeros): \n");
            scanf("%3s", codigo_carta2);

            printf("Introduza o nome da cidade: \n");
            scanf(" %[^\n]", Nome_da_Cidade2);
    
            printf("Introduza o número de população: \n");
            scanf("%d", &Populacao2);
    
            printf("Introduza o raio de distância total da cidade em km²: \n");
            scanf("%f", &Area2);
    
            printf("Introduza o PIB da cidade em bilhões: \n");
            scanf("%f", &PIB2);
    
            printf("Introduza o número de pontos turísticos: \n");
            scanf("%d", &Numero_de_pontos_turisticos2);



         //calculo pib*10^6 (bilhão para decimal)
         //calculo pibpercapta2 e densidade populacional
         //deveria ser 10 elevado a 6
         //porém tem duas casas decimais no float, então será elevado à 8
         PIBperCapita2 = (PIB2*100000000) / (float)Populacao2; 
         //calculo pibpercapta1 e densidade populacional            
         PIBperCapita1 = (PIB*100000000) / (float)Populacao;

         //calculo da densidade populacional
         densidade1 = (float)Populacao / Area;
         densidade2 = (float)Populacao2 / Area2;


        // Exibição dos dados coletados


        printf("      ***Estes são os dados inseridos das cartas:***");
        //carta 1
        printf("\n      ***Dados da Carta 1:***\n");
        printf("Código: %s\n", Estado);
        printf("Código: %s\n", codigo_carta);
        printf("Cidade: %s\n", Nome_da_Cidade);
        printf("População: %d\n", Populacao);
        printf("Área: %.2f km²\n", Area);
        printf("PIB: %.2f bilhões\n", PIB);
        printf("Pontos turísticos: %d\n", Numero_de_pontos_turisticos);
        printf("PIB per capita da cidade: %.2f \n", PIBperCapita1);
        printf("A densidade populacional da Carta 1 é: %2f\n", densidade1);

        //carta 2
        printf("\n      ***Dados da Carta 2:***\n");
        printf("Código: %s\n", Estado2);
        printf("Código: %s\n", codigo_carta2);
        printf("Cidade: %s\n", Nome_da_Cidade2);
        printf("População: %d\n", Populacao2);
        printf("Área: %.2f km²\n", Area2);
        printf("PIB: %.2f bilhões\n", PIB2);
        printf("Pontos turísticos: %d\n", Numero_de_pontos_turisticos2);
        printf("PIB per capita da cidade: %.2f\n", PIBperCapita2);
        printf("A densidade populacional da Carta 2 é: %2f\n", densidade2);
        
    return 0;
}