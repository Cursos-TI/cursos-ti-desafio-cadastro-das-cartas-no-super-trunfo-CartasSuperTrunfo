#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   // Declaração das variáveis ​​para a primeira carta
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Declaração das variáveis ​​para a segunda carta
    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // Cadastro da primeira carta
    printf("=== SUPER TRUNFO - PAÍSES ===\n");
    printf("--- CADASTRO DA PRIMEIRA CARTA ---\n");
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite uma área (km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da segunda carta
    printf("--- CADASTRO DA SEGUNDA CARTA ---\n");
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite uma área (km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    //Exibição dos dados cadastrados
    printf("=== CARTAS CADASTRADAS ===\n");
    
    printf("--- CARTÃO 1 ---\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    
    printf("n--- CARTÃO 2 ---\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    
    printf("=== CADASTRO CONCLUÍDO ===\n");
    
 
    return 0;
}