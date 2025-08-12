#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as informações de uma carta
typedef struct {
    char estado[3];        // Estado (ex: SP, RJ, MG)
    char codigo[10];       // Código da carta (ex: A01)
    char nome[50];         // Nome da cidade
    int populacao;         // População da cidade
    float area;            // Área da cidade em km²
    float pib;             // PIB da cidade em bilhões
    int pontosTuristicos;  // Número de pontos turísticos
} Carta;

// Função para calcular a densidade populacional
float calcularDensidade(int populacao, float area) {
    return (area > 0) ? (float)populacao / area : 0;
}

// Função para permitir que o jogador cadastre uma carta
void cadastrarCarta(Carta *carta) {
    printf("\nDigite o estado (ex: SP, RJ): ");
    scanf("%2s", carta->estado);
    printf("Digite o código da carta: ");
    scanf("%9s", carta->codigo);
    printf("Digite o nome da cidade: ");
    getchar(); // Limpar buffer do teclado
    fgets(carta->nome, 50, stdin);
    carta->nome[strcspn(carta->nome, "\n")] = 0; // Remover nova linha
    printf("Digite a população: ");
    scanf("%d", &carta->populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &carta->area);
    printf("Digite o PIB (bilhões): ");
    scanf("%f", &carta->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Função para comparar duas cartas com base no atributo escolhido pelo usuário
void compararCartas(Carta c1, Carta c2, int opcao) {
    float valorC1 = 0, valorC2 = 0;
    int criterio = 1; // 1 = maior valor vence, -1 = menor valor vence
    char atributoEscolhido[50];

    switch (opcao) {
        case 1:
            strcpy(atributoEscolhido, "População");
            valorC1 = c1.populacao;
            valorC2 = c2.populacao;
            break;
        case 2:
            strcpy(atributoEscolhido, "Área");
            valorC1 = c1.area;
            valorC2 = c2.area;
            break;
        case 3:
            strcpy(atributoEscolhido, "PIB");
            valorC1 = c1.pib;
            valorC2 = c2.pib;
            break;
        case 4:
            strcpy(atributoEscolhido, "Número de Pontos Turísticos");
            valorC1 = c1.pontosTuristicos;
            valorC2 = c2.pontosTuristicos;
            break;
        case 5:
            strcpy(atributoEscolhido, "Densidade Populacional");
            valorC1 = calcularDensidade(c1.populacao, c1.area);
            valorC2 = calcularDensidade(c2.populacao, c2.area);
            criterio = -1; // Para densidade, o menor valor vence
            break;
        default:
            printf("\nOpção inválida. Tente novamente.\n");
            return;
    }

    // Exibindo os valores comparados
    printf("\n===== Comparação: %s =====\n", atributoEscolhido);
    printf("%s (%s): %.2f\n", c1.nome, c1.estado, valorC1);
    printf("%s (%s): %.2f\n", c2.nome, c2.estado, valorC2);

    // Determinando o vencedor
    if ((criterio == 1 && valorC1 > valorC2) || (criterio == -1 && valorC1 < valorC2)) {
        printf("A carta vencedora é: %s\n", c1.nome);
    } else if (valorC1 == valorC2) {
        printf("Empate.\n");
    } else {
        printf("A carta vencedora é: %s\n", c2.nome);
    }
}

// Função principal
int main() {
    Carta carta1, carta2;
    int opcao;
    
    printf("\n===== Super Trunfo - Cadastro das Cartas =====\n");
    printf("\nCadastro da Carta 1:\n");
    cadastrarCarta(&carta1);
    printf("\nCadastro da Carta 2:\n");
    cadastrarCarta(&carta2);
    
    do {
        printf("\n===== Super Trunfo - Desafio dos Países =====\n");
        printf("Escolha um atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - Densidade Populacional\n");
        printf("0 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao);
        
        if (opcao >= 1 && opcao <= 5)
            compararCartas(carta1, carta2, opcao);
        else if (opcao != 0)
            printf("Opção inválida, tente novamente.\n");

    } while (opcao != 0);

    printf("\nObrigado por jogar. Até a próxima.\n");
    return 0;
}
