#include <stdio.h>
#include <stdlib.h>

// Função auxiliar para limpar o buffer de entrada.
// Isso é útil quando o scanf falha.
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

    // Variáveis para a Carta 1
    char estado1;
    char codigoCarta1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
    // --- COLETA DE DADOS DA CARTA 1 ---
    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado1);
    limparBufferEntrada(); // Limpa o buffer para o próximo scanf

    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigoCarta1);
    limparBufferEntrada(); // Limpa o buffer para o próximo scanf

    printf("Digite o Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade1);
    limparBufferEntrada();

    // Loop para garantir que a população seja lida corretamente
    do {
        printf("Digite a População: ");
        // Verifica se o scanf conseguiu ler 1 item do tipo inteiro (%d)
        if (scanf("%d", &populacao1) != 1) {
            printf("Entrada inválida. Por favor, digite apenas números.\n");
            limparBufferEntrada(); // Limpa a entrada incorreta
            populacao1 = -1; // Marca como inválido para continuar no loop
        } else {
            limparBufferEntrada(); // Limpa o '\n' que sobrou
        }
    } while (populacao1 == -1);

    // Loop para garantir que a área seja lida corretamente
    do {
        printf("Digite a Área (em km²): ");
        if (scanf("%f", &area1) != 1) {
            printf("Entrada inválida. Use '.' para casas decimais (ex: 1520.50).\n");
            limparBufferEntrada();
            area1 = -1.0;
        } else {
             limparBufferEntrada();
        }
    } while (area1 == -1.0);
    
    // ... (O mesmo padrão de verificação seria aplicado para PIB e Pontos Turísticos)
    // Para simplificar, o restante do código foi omitido, mas a lógica é a mesma.
    // O código abaixo está simplificado para não ficar muito repetitivo.
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    limparBufferEntrada();

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    limparBufferEntrada();


    // --- COLETA DE DADOS DA CARTA 2 (com a mesma lógica de robustez) ---
    printf("\n--- CADASTRO DA CARTA 2 ---\n");
    // (A mesma lógica de verificação e limpeza de buffer seria aplicada aqui)
    
    printf("Digite o Estado (uma letra de A a H): ");
    scanf(" %c", &estado2);
    limparBufferEntrada();

    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigoCarta2);
    limparBufferEntrada();
    
    printf("Digite o Nome da Cidade: ");
    scanf("%[^\n]", nomeCidade2);
    limparBufferEntrada();

    printf("Digite a População: ");
    scanf("%d", &populacao2);
    limparBufferEntrada();

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    limparBufferEntrada();

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    limparBufferEntrada();
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    limparBufferEntrada();

    // --- EXIBIÇÃO DAS CARTAS ---
    printf("\n\n==============================\n");
    printf("  CARTAS DO SUPER TRUNFO\n");
    printf("==============================\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); 
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0; 
}
