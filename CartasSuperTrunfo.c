#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta de país
typedef struct {
    char nome[50];
    float area;               // em km²
    int populacao;           // em milhões
    float densidade;         // pessoas por km²
    float pib;               // em trilhões de USD
} Carta;

// Função para exibir o menu de atributos e retornar a escolha do usuário
int exibirMenuAtributos(int atributoExcluido) {
    int escolha;
    printf("\nEscolha um atributo para comparacao:\n");
    printf("1. Area (km²)\n");
    printf("2. Populacao (milhoes)\n");
    printf("3. Densidade Demografica (pessoas/km²)\n");
    printf("4. PIB (trilhoes de USD)\n");
    printf("Digite sua escolha (1-4): ");
    scanf("%d", &escolha);
    
    // Verifica se a escolha é válida e diferente do atributo excluído
    while (escolha < 1 || escolha > 4 || escolha == atributoExcluido) {
        if (escolha == atributoExcluido) {
            printf("Erro: Este atributo ja foi escolhido! Tente novamente: ");
        } else {
            printf("Erro: Escolha invalida! Digite um numero entre 1 e 4: ");
        }
        scanf("%d", &escolha);
    }
    return escolha;
}

// Função para obter o valor de um atributo da carta com base na escolha
float obterValorAtributo(Carta carta, int escolha) {
    switch (escolha) {
        case 1: return carta.area;
        case 2: return (float)carta.populacao;
        case 3: return carta.densidade;
        case 4: return carta.pib;
        default: return 0.0;
    }
}

// Função para obter o nome do atributo com base na escolha
void obterNomeAtributo(int escolha, char* nome) {
    switch (escolha) {
        case 1: strcpy(nome, "Area (km²)"); break;
        case 2: strcpy(nome, "Populacao (milhoes)"); break;
        case 3: strcpy(nome, "Densidade Demografica (pessoas/km²)"); break;
        case 4: strcpy(nome, "PIB (trilhoes de USD)"); break;
        default: strcpy(nome, "Desconhecido"); break;
    }
}

// Função para determinar o vencedor de um atributo individual
// Retorna 1 se carta1 vence, -1 se carta2 vence, 0 se empate
int compararAtributo(Carta carta1, Carta carta2, int escolha) {
    float valor1 = obterValorAtributo(carta1, escolha);
    float valor2 = obterValorAtributo(carta2, escolha);
    
    // Densidade demográfica: menor valor vence
    if (escolha == 3) {
        return (valor1 < valor2) ? 1 : (valor1 > valor2) ? -1 : 0;
    }
    // Outros atributos: maior valor vence
    return (valor1 > valor2) ? 1 : (valor1 < valor2) ? -1 : 0;
}

// Função principal
int main() {
    // Cartas pré-cadastradas
    Carta carta1 = {"Brasil", 8515.8, 213, 25.0, 1.8};
    Carta carta2 = {"Canada", 9984.7, 38, 3.8, 1.6};
    
    // Exibir cartas disponíveis
    printf("Cartas disponiveis:\n");
    printf("1. %s (Area: %.1f, Populacao: %d, Densidade: %.1f, PIB: %.1f)\n", 
           carta1.nome, carta1.area, carta1.populacao, carta1.densidade, carta1.pib);
    printf("2. %s (Area: %.1f, Populacao: %d, Densidade: %.1f, PIB: %.1f)\n", 
           carta2.nome, carta2.area, carta2.populacao, carta2.densidade, carta2.pib);
    
    // Escolha dos atributos
    int atributo1 = exibirMenuAtributos(0); // Primeiro atributo, sem exclusão
    int atributo2 = exibirMenuAtributos(atributo1); // Segundo atributo, exclui o primeiro
    
    // Obter nomes dos atributos
    char nomeAtributo1[50], nomeAtributo2[50];
    obterNomeAtributo(atributo1, nomeAtributo1);
    obterNomeAtributo(atributo2, nomeAtributo2);
    
    // Obter valores dos atributos
    float valor1_carta1 = obterValorAtributo(carta1, atributo1);
    float valor2_carta1 = obterValorAtributo(carta1, atributo2);
    float valor1_carta2 = obterValorAtributo(carta2, atributo1);
    float valor2_carta2 = obterValorAtributo(carta2, atributo2);
    
    // Calcular somas
    float somaCarta1 = valor1_carta1 + valor2_carta1;
    float somaCarta2 = valor1_carta2 + valor2_carta2;
    
    // Exibir resultados da comparação
    printf("\n=== Resultado da Comparacao ===\n");
    printf("Carta 1: %s\n", carta1.nome);
    printf("%s: %.1f\n", nomeAtributo1, valor1_carta1);
    printf("%s: %.1f\n", nomeAtributo2, valor2_carta1);
    printf("Soma dos atributos: %.1f\n", somaCarta1);
    printf("\nCarta 2: %s\n", carta2.nome);
    printf("%s: %.1f\n", nomeAtributo1, valor1_carta2);
    printf("%s: %.1f\n", nomeAtributo2, valor2_carta2);
    printf("Soma dos atributos: %.1f\n", somaCarta2);
    
    // Determinar o vencedor usando operador ternário
    printf("\nResultado: ");
    somaCarta1 > somaCarta2 ? printf("%s vence!\n", carta1.nome) :
    somaCarta1 < somaCarta2 ? printf("%s vence!\n", carta2.nome) :
    printf("Empate!\n");
    
    return 0;
}
