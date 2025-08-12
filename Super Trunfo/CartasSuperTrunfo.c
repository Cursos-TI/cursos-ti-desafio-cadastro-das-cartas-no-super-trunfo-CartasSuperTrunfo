#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char letra; //variaveis listadas para cada tipo de informação da carta
    int numero;
    char nome[10];
    int populacao;
    int area;
    int pturisticos;
    
    
    // Cadastro das Cartas:
    
    printf("Digite a letra da carta: \n");
    scanf("%c", &letra);

    printf("Digite o número da carta: \n");
    scanf("%d", &numero);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a quantidade populacional: \n");
    scanf("%d", &populacao);
    
    printf("Digite a Área da cidade: \n");
    scanf("%d", &area);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pturisticos);

    // Exibição dos Dados das Cartas:
    printf("Código: %c%d\n", letra, numero);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área da cidade: %d m²\n", area);
    printf("Quantidade de pontos turisticos: %d\n", pturisticos);

    return 0;
}
