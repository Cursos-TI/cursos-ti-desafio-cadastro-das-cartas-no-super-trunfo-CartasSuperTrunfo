#include <stdio.h>
#include <string.h>

#define LIMITE_MAXIMO_CIDADES_CADASTRAR 2
#define CODIGO_TAMANHO 5
#define NOME_CIDADE_TAMANHO 50

typedef struct {
    char estado;
    char codigo[CODIGO_TAMANHO];
    char nomeCidade[NOME_CIDADE_TAMANHO];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Protótipos das funções
void lerDados(Carta *carta);
void exibirDados(const Carta *carta);
void compararCartas(Carta *carta1, Carta *carta2, int atributo);

void lerDados(Carta *carta) {
    printf("Informe o nome do Estado: ");
    scanf(" %c", &carta->estado);
    
    printf("Informe o Código da Carta (ex: AAAAA): ");
    scanf(" %s", carta->codigo);
    
    printf("Informe o Nome da Cidade: ");
    getchar(); // Limpa o buffer
    fgets(carta->nomeCidade, NOME_CIDADE_TAMANHO, stdin);
    carta->nomeCidade[strcspn(carta->nomeCidade, "\n")] = 0; // Remove nova linha
    
    printf("Informe a População: ");
    scanf("%d", &carta->populacao);
    
    printf("Informe a Área (em km²): ");
    scanf("%f", &carta->area);
    
    printf("Informe o PIB: ");
    scanf("%f", &carta->pib);
    
    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

void exibirDados(const Carta *carta) {
    printf("\nInformações da Carta:\n");
    printf("Estado: %c\n", carta->estado);
    printf("Código da Carta: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nomeCidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f\n", carta->pib);
    printf("Pontos Turísticos: %d\n", carta->pontosTuristicos);
}

void compararCartas(Carta *carta1, Carta *carta2, int atributo) {
    switch (atributo) {
        case 1: // Comparar pela população
            if (carta1->populacao > carta2->populacao) {
                printf("%s tem mais população que %s.\n", carta1->nomeCidade, carta2->nomeCidade);
            } else if (carta1->populacao < carta2->populacao) {
                printf("%s tem mais população que %s.\n", carta2->nomeCidade, carta1->nomeCidade);
            } else {
                printf("%s e %s têm a mesma população.\n", carta1->nomeCidade, carta2->nomeCidade);
            }
            break;
        case 2: // Comparar pelo PIB
            if (carta1->pib > carta2->pib) {
                printf("%s tem um PIB maior que %s.\n", carta1->nomeCidade, carta2->nomeCidade);
            } else if (carta1->pib < carta2->pib) {
                printf("%s tem um PIB maior que %s.\n", carta2->nomeCidade, carta1->nomeCidade);
            } else {
                printf("%s e %s têm o mesmo PIB.\n", carta1->nomeCidade, carta2->nomeCidade);
            }
            break;
        default:
            printf("Atributo inválido.\n");
            break;
    }
}

int main() {
    Carta cartas[LIMITE_MAXIMO_CIDADES_CADASTRAR];

    for (int i = 0; i < LIMITE_MAXIMO_CIDADES_CADASTRAR; i++) {
        printf("\n--- Dados da Carta %d ---\n", i + 1);
        lerDados(&cartas[i]);
    }

    int escolha;
    printf("Escolha o atributo para comparar:\n1. População\n2. PIB\n");
    scanf("%d", &escolha);

    // Comparar as duas primeiras cartas como exemplo
    compararCartas(&cartas[0], &cartas[1], escolha);

 return 0;
}