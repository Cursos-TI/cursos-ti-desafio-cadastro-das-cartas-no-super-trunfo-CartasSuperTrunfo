#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   
    char estado_1, estado_2 ;

    char codigo_1[10], codigo_2[10]; 
  
    char cidade_1[20], cidade_2[20]; 
  
    int populacao_1, populacao_2; 
  
    float area_1, area_2; 
  
    float pib_1, pib_2; 
  
    int turismo_1, turismo_2; 

    printf("Digite o estado:\n");

    scanf("%c", &estado_1);
        
    printf("Estado:%c\n", estado_1);
   
    printf("Digite o codigo da carta: \n");
  
    scanf("%s", codigo_1);
  
    printf("O codigo da carta é:%s\n", codigo_1);

    printf("Digite o nome da cidade é:\n");
  
    scanf("%s", cidade_1);
  
    printf("O nome da cidade é:%s\n", cidade_1);

    printf("Qual a população da cidade:\n");
  
    scanf("%d", &populacao_1);
  
    printf("A população da cidade é de :%d\n", populacao_1);

    printf("A area da cidade em km² é:\n");
  
    scanf("%f", &area_1);
  
    printf("Area em Km² é:%f\n", area_1);
  
    printf("Qual o PIB:\n");
  
    scanf("%f", &pib_1);
  
    printf("O PIB da cidade é:%f\n", pib_1);
  
    printf("Quantidade de pontos turisticos da cidade:\n");
  
    scanf("%d", &turismo_1);
  
    printf("Quantidade de pontos turisticos da cidade é:%d\n",turismo_1);
  
    printf("\n"); 
    printf("Estado:%c \n", estado_1);
    printf("Codigo:%s \n", codigo_1);
    printf("Nome da Cidade:%s \n", cidade_1);  
    printf("Populacao:%d \n", populacao_1);
    printf("Area:%f km² \n", area_1);
    printf("PIB:R$ %f \n", pib_1);  
    printf("Pontos Turisticos:%d \n", turismo_1);

    printf("\n"); 

    printf("Digite o estado:\n");

    scanf(" %c", &estado_2);
        
    printf("Estado:%c\n", estado_2);
   
    printf("Digite o codigo da carta: \n");
  
    scanf("%s", codigo_2);
  
    printf("O codigo da carta é:%s\n", codigo_2);

    printf("Digite o nome da cidade é:\n");
  
    scanf("%s", cidade_2);
  
    printf("O nome da cidade é:%s\n", cidade_2);

    printf("Qual a população da cidade:\n");
  
    scanf("%d", &populacao_2);
  
    printf("A população da cidade é de :%d\n", populacao_2);

    printf("A area da cidade em km² é:\n");
  
    scanf("%f", &area_2);
  
    printf("Area em Km² é:%f\n", area_2);
  
    printf("Qual o PIB:\n");
  
    scanf("%f", &pib_2);
  
    printf("O PIB da cidade é:%f\n", pib_2);
  
    printf("Quantidade de pontos turisticos da cidade:\n");
  
    scanf("%d", &turismo_2);
  
    printf("Quantidade de pontos turisticos da cidade é:%d\n",turismo_2);
  
    printf("\n"); 
    printf("Estado:%c \n", estado_2);
    printf("Codigo:%s \n", codigo_2);
    printf("Nome da Cidade:%s \n", cidade_2);  
    printf("Populacao:%d \n", populacao_2);
    printf("Area:%f km² \n", area_2);
    printf("PIB:R$ %f \n", pib_2);  
    printf("Pontos Turisticos:%d \n", turismo_2);


    return 0;
}
