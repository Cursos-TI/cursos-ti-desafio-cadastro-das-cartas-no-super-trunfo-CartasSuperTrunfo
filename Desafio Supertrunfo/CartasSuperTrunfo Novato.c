#include <stdio.h>
// finalização do código commit 25/02/2025 10:03
// Nível Novato: Cadastro Básico
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
    
        // Introdução de dados das cartas
        
        //carta 1

        printf("Introduza os dados da carta 1 a seguir:\n");
    
            printf("Sigla do Estado da cidade (Duas letras): \n");
            scanf ("%2s", Estado);

            printf("Código da carta (primeira letra seguida de dois numeros): \n");
            scanf("%3s", codigo_carta);

            printf("Introduza o nome da cidade: \n");
            scanf(" %[^\n]", Nome_da_Cidade);
    
            printf("Introduza o número de população em milhões: \n");
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
    
            printf("Introduza o número de população em milhões: \n");
            scanf("%d", &Populacao2);
    
            printf("Introduza o raio de distância total da cidade em km²: \n");
            scanf("%f", &Area2);
    
            printf("Introduza o PIB da cidade em bilhões: \n");
            scanf("%f", &PIB2);
    
            printf("Introduza o número de pontos turísticos: \n");
            scanf("%d", &Numero_de_pontos_turisticos2);

        // Exibição dos dados coletados

        //carta 1
        printf("\nDados da Carta 1:\n");
        printf("Código: %s\n", Estado);
        printf("Código: %s\n", codigo_carta);
        printf("Cidade: %s\n", Nome_da_Cidade);
        printf("População: %d\n", Populacao);
        printf("Área: %.2f km²\n", Area);
        printf("PIB: %.2f bilhões\n", PIB);
        printf("Pontos turísticos: %d\n", Numero_de_pontos_turisticos);

        //carta 2
        printf("\nDados da Carta 2:\n");
        printf("Código: %s\n", Estado2);
        printf("Código: %s\n", codigo_carta2);
        printf("Cidade: %s\n", Nome_da_Cidade2);
        printf("População: %d\n", Populacao2);
        printf("Área: %.2f km²\n", Area2);
        printf("PIB: %.2f bilhões\n", PIB2);
        printf("Pontos turísticos: %d\n", Numero_de_pontos_turisticos2);


    return 0;
}