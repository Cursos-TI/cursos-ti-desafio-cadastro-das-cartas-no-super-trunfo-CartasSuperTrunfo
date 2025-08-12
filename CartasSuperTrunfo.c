/*
    Desafio Super Trunfo da matéria de C no curso de Engenharia de Software da Estácio de Sá.
    Jogo de Super Trunfo com o tema Países.
*/

#include <stdio.h>  // Bibloteca padrão de entrada e saída
#include <string.h> // Biblioteca para manipulação de strings

/*
    Definição das estruturas de dados para armazenar as informações dos países, estados e cidades.
    A estrutura de dados é composta por um país que possui 8 estados e cada estado possui 4 cidades.
    Cada cidade possui informações como população, área, PIB e quantidade de pontos turísticos.

*/

// Declaração de estruturas de dados
typedef struct
{
    char nome[3];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta; // Estrutura de dados para armazenar as informações das cartas do jogo

Carta baralho[32]; // Baralho de cartas
char cartaEscolhida1[4], cartaEscolhida2[4];
Carta *cartaJogador1;
Carta *cartaJogador2;

// Array com os nomes das cartas de A01 até H04
char nomeCartas[32][4] = {
    "A01", "A02", "A03", "A04",
    "B01", "B02", "B03", "B04",
    "C01", "C02", "C03", "C04",
    "D01", "D02", "D03", "D04",
    "E01", "E02", "E03", "E04",
    "F01", "F02", "F03", "F04",
    "G01", "G02", "G03", "G04",
    "H01", "H02", "H03", "H04"};

void separador()
{
    printf("---------------------------------------------------------------\n");
}

// Função para cadastrar o baralho de cartas
void cadastrarCartas()
{
    // Inicialização das cartas do baralho
    for (int i = 0; i < 32; i++)
    {
        strcpy(baralho[i].nome, nomeCartas[i]); // Copia o nome da carta para a estrutura de dados usando a função strcpy que copia uma string para outra
        printf("Cidade %s\n", baralho[i].nome);
        printf("Digite a população da cidade %s: ", baralho[i].nome);
        scanf("%d", &baralho[i].populacao);
        printf("Digite a área da cidade %s: ", baralho[i].nome);
        scanf("%f", &baralho[i].area);
        printf("Digite o PIB da cidade %s: ", baralho[i].nome);
        scanf("%f", &baralho[i].pib);
        printf("Digite a quantidade de pontos turísticos da cidade %s: ", baralho[i].nome);
        scanf("%d", &baralho[i].pontos_turisticos);
        separador();
    }
}
// Função para exibir as cartas do baralho
void exibeCartas()
{
    for (int i = 0; i < 32; i++)
    {
        printf("Cidade %s\n", baralho[i].nome);
        printf("População: %d\n", baralho[i].populacao);
        printf("Área: %.2f\n", baralho[i].area);
        printf("PIB: %.2f\n", baralho[i].pib);
        printf("Pontos turísticos: %d\n", baralho[i].pontos_turisticos);
        separador();
    }
}
// Função para buscar uma carta no baralho
Carta *buscarCarta(Carta baralho[], char *cartaBuscada)
{
    for (int i = 0; i < 32; i++)
    {
        if (strcmp(baralho[i].nome, cartaBuscada) == 0)
        {
            return &baralho[i];
        }
    }
    return NULL;
}
// Função para escolher as cartas do jogo
void escolherCartas()
{
    do
    {
        printf("Escolha uma carta para o jogador 1:");
        scanf("%s", cartaEscolhida1);
        cartaJogador1 = buscarCarta(baralho, cartaEscolhida1);

        (cartaJogador1 != NULL) ? (printf("Carta encontrada\n"),
                                   printf("Nome: %s\n", cartaJogador1->nome),
                                   separador())
                                : (printf("Carta não encontrada\n"),
                                   separador());
    } while (cartaJogador1 == NULL);

    do
    {
        printf("Escolha uma carta para o jogador 2:");
        scanf("%s", cartaEscolhida2);
        cartaJogador2 = buscarCarta(baralho, cartaEscolhida2);

        (cartaJogador2 != NULL) ? (printf("Carta encontrada\n"),
                                   printf("Nome: %s\n", cartaJogador2->nome),
                                   separador())
                                : (printf("Carta não encontrada\n"),
                                   separador());
    } while (cartaJogador2 == NULL);
}
// Função para verificar se as cartas escolhidas são iguais
void cartasIguais()
{
    if (strcmp(cartaEscolhida1, cartaEscolhida2) == 0)
    {
        printf("As cartas escolhidas são iguais\n");
        separador();
        escolherCartas();
    }
}
// Função para comparar os atributos das cartas
void compararAtributos()
{
    int atributo;
    printf("Escolha um atributo para comparar\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    scanf("%d", &atributo);

    do
    {
        switch (atributo)
        {
        case 1:
            printf("Comparando população\n");
            (cartaJogador1->populacao > cartaJogador2->populacao)   ? (printf("Jogador 1 venceu\n"),
                                                                     printf("População da carta %s do jogador 1: %d\n", cartaJogador1->nome, cartaJogador1->populacao),
                                                                     printf("População da carta %s do jogador 2: %d\n", cartaJogador2->nome, cartaJogador2->populacao))
            : (cartaJogador1->populacao < cartaJogador2->populacao) ? (printf("Jogador 2 venceu\n"),
                                                                       printf("População da carta %s do jogador 1: %d\n", cartaJogador1->nome, cartaJogador1->populacao),
                                                                       printf("População da carta %s do jogador 2: %d\n", cartaJogador2->nome, cartaJogador2->populacao))
                                                                    : printf("Empate\n");
            break;

        case 2:
            printf("Comparando área\n");
            (cartaJogador1->area > cartaJogador2->area)   ? (printf("Jogador 1 venceu\n"),
                                                           printf("Área da carta %s do jogador 1: %.2f\n", cartaJogador1->nome, cartaJogador1->area),
                                                           printf("Área da carta %s do jogador 2: %.2f\n", cartaJogador2->nome, cartaJogador2->area))
            : (cartaJogador1->area < cartaJogador2->area) ? (printf("Jogador 2 venceu\n"),
                                                             printf("Área da carta %s do jogador 1: %.2f\n", cartaJogador1->nome, cartaJogador1->area),
                                                             printf("Área da carta %s do jogador 2: %.2f\n", cartaJogador2->nome, cartaJogador2->area))
                                                          : printf("Empate\n");
            break;

        case 3:
            printf("Comparando PIB\n");
            (cartaJogador1->pib > cartaJogador2->pib)   ? (printf("Jogador 1 venceu\n"),
                                                         printf("PIB da carta %s do jogador 1: %.2f\n", cartaJogador1->nome, cartaJogador1->pib),
                                                         printf("PIB da carta %s do jogador 2: %.2f\n", cartaJogador2->nome, cartaJogador2->pib))
            : (cartaJogador1->pib < cartaJogador2->pib) ? (printf("Jogador 2 venceu\n"),
                                                           printf("PIB da carta %s do jogador 1: %.2f\n", cartaJogador1->nome, cartaJogador1->pib),
                                                           printf("PIB da carta %s do jogador 2: %.2f\n", cartaJogador2->nome, cartaJogador2->pib))
                                                        : printf("Empate\n");
            break;

        case 4:
            printf("Comparando pontos turísticos\n");
            (cartaJogador1->pontos_turisticos > cartaJogador2->pontos_turisticos)   ? (printf("Jogador 1 venceu\n"),
                                                                                     printf("Pontos turísticos da carta %s do jogador 1: %d\n", cartaJogador1->nome, cartaJogador1->pontos_turisticos),
                                                                                     printf("Pontos turísticos da carta %s do jogador 2: %d\n", cartaJogador2->nome, cartaJogador2->pontos_turisticos))
            : (cartaJogador1->pontos_turisticos < cartaJogador2->pontos_turisticos) ? (printf("Jogador 2 venceu\n"),
                                                                                       printf("Pontos turísticos da carta %s do jogador 1: %d\n", cartaJogador1->nome, cartaJogador1->pontos_turisticos),
                                                                                       printf("Pontos turísticos da carta %s do jogador 2: %d\n", cartaJogador2->nome, cartaJogador2->pontos_turisticos))
                                                                                    : printf("Empate\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
    } while (atributo < 1 || atributo > 4);
    separador();
    printf("Fim do jogo\n");
    printf("Obrigado por jogar\n");
    separador();
}
// Função para exibir o menu do jogo
void menuPrincipal()
{
    int opcao;

    do
    {
        printf("Bem-vindo ao jogo de Super Trunfo com tema países\n");
        printf("1 - Jogar\n");
        printf("2 - Regras\n");
        printf("3 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastrarCartas();
            exibeCartas();
            escolherCartas();
            cartasIguais();
            compararAtributos();
            break;
        case 2:
            printf("O jogo consiste em um baralho de 32 cartas com informações sobre cidades 01 a 04 de 8 e de estados A a H\n");
            printf("Cada carta possui informações como população, área, PIB e quantidade de pontos turísticos\n");
            printf("O jogador escolhe uma carta e um atributo para comparar com a carta do adversário\n");
            printf("O jogador que tiver o maior valor no atributo escolhido vence o jogo\n");
            break;
        case 3:
            printf("Saindo do jogo\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
        }
    } while (opcao != 3);
}

int main()
{
    menuPrincipal();
    return 0;
}
