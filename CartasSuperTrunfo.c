#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados de uma cidade
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
} Cidade;

int main() {
    Cidade cidade1, cidade2;
    int escolha;
    
    // Cadastro das cidades
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1.nome);
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área da primeira cidade (em km²): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB da primeira cidade (em bilhões): ");
    scanf("%f", &cidade1.pib);
    
    printf("\nDigite o nome da segunda cidade: ");
    scanf("%s", cidade2.nome);
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf("%f", &cidade2.pib);
    
    // Escolha do critério de comparação
    printf("\nEscolha um critério para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);
    
    // Comparação das cidades
    if (escolha == 1) {
        if (cidade1.populacao > cidade2.populacao) {
            printf("%s venceu com maior população!\n", cidade1.nome);
        } else {
            printf("%s venceu com maior população!\n", cidade2.nome);
        }
    } else if (escolha == 2) {
        if (cidade1.area > cidade2.area) {
            printf("%s venceu com maior área!\n", cidade1.nome);
        } else {
            printf("%s venceu com maior área!\n", cidade2.nome);
        }
    } else if (escolha == 3) {
        if (cidade1.pib > cidade2.pib) {
            printf("%s venceu com maior PIB!\n", cidade1.nome);
        } else {
            printf("%s venceu com maior PIB!\n", cidade2.nome);
        }
    } else {
        printf("Opção inválida.\n");
    }
    
    return 0;
}
