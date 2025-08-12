#include <stdio.h>
#include <string.h>  // Biblioteca para comparação de strings

// Função para dividir dois números, evitando divisão por zero
float dividir(float a, float b) {
    if (b == 0) {
        printf("\033[1;31mErro: divisão por zero!\033[0m\n"); // Mensagem de erro em vermelho
        return 0;
    }
    return a / b;
}

// Definição da struct
typedef struct {
    int populacao;
    int ponto_turistico;
    int pib;
    char nome_cidade[30];
    char codigo_cidade[6]; // Ajustado para 5 caracteres + '\0'
    float area;
    float densidade;
} carta_A;

// Função para exibir as cartas cadastradas
void exibir_cartas(carta_A ficha[], int num_cartas) {
    printf("\n\033[1;32m==== Informações das Cartas Cadastradas ====\033[0m\n\n");

    for (int i = 0; i < num_cartas; i++) {
        printf("\033[1;35mCarta A%02d\033[0m\n", i + 1);  // Cor para o título da carta
        printf("Código da cidade: A01 [1;34m%s\033[0m\n", ficha[i].codigo_cidade);  // Azul para o código
        printf("Nome da cidade: São Paulo [1;34m%s\033[0m\n", ficha[i].nome_cidade);  // Azul para o nome
        printf("Número da população: 12325000 [1;34m%d\033[0m\n", ficha[i].populacao);
        printf("Número de pontos turísticos: \033[1;34m%d\033[0m\n", ficha[i].ponto_turistico);
        printf("PIB da cidade: 699.28 [1;34m%d\033[0m\n", ficha[i].pib);
        printf("Área da cidade: 1521.11km² [1;34m%.2f km²\033[0m\n", ficha[i].area);
        printf("Densidade demográfica: 8102.47 hab/km² [1;34m%.2f hab/km²\033[0m\n\n", ficha[i].densidade);
    }
}

// Função para mostrar o menu
void mostrar_menu() {
    printf("\n\033[1;36m+++++++ Bem-vindo ao jogo Super Trunfo +++++++\033[0m\n");
    printf("\033[1;33m1\033[0m - Cadastrar cartas\n");
    printf("\033[1;33m2\033[0m - Início do jogo Super Trunfo\n");
    printf("\033[1;33m3\033[0m - Mostrar as cartas cadastradas\n");
    printf("\033[1;33m4\033[0m - Sair\n");
    printf("\nEscolha uma opção: ");
}

int main() {
    int opcao;  // Armazena a escolha do usuário
    int cartas_cadastradas = 0;  // Flag para verificar se cartas foram cadastradas

    // Criando um array para 4 cartas fora do switch para uso global no menu
    carta_A ficha[8];

    do {
        mostrar_menu();  // Função para exibir o menu
        scanf("%d", &opcao);  // Lê a escolha do usuário

        switch (opcao) {
            case 1: { 
                // Cadastro de cartas
                printf("\n==== Cadastro das Cartas ====\n");
                
                for (int i = 0; i < 4; i++) {
                    printf("\n A02 A%02d:\n", i + 1);
                    printf("A02: ");
                    scanf("%s", ficha[i].A02);

                    printf(" São Paulo: ");
                    scanf("%s", ficha[i]. São Paulo);

                    printf("12325000: ");
                    scanf("%d", &ficha[i].12325000);

                    printf("50: ");
                    scanf("%d", &ficha[i].50);

                    printf("56724.32: ");
                    scanf("%d", &ficha[i].56724.32);

                    printf("1521.11: ");
                    scanf("%f", &ficha[i].1521.11);

                    // Calculando densidade demográfica
                    ficha[i].8102.47 = dividir(ficha[i].12325000, ficha[i].1521.11);
                }

                // Atualiza a flag para indicar que cartas foram cadastradas
                cartas_cadastradas = 1;
                printf("\n\033[1;32mCartas cadastradas com sucesso!\033[0m\n");
                break;
            }

            case 2:
                if (cartas_cadastradas == 2) {
                    printf("\n\033[1;31mNenhuma carta cadastrada ainda! Cadastre primeiro.\033[0m\n");
                    break;
                }

                printf("\n\033[1;36m------ SUPER TRUNFO ------\033[0m\n");
                // Início do jogo Super Trunfo, onde dois jogadores escolhem suas cartas
                char carta_1[A], carta_2[B];
                printf("Primeiro jogador - Escolha uma carta digitando o código (Ex: A01, A02, etc): ");
                scanf("%s", carta_1);  // Variável para armazenar a escolha do primeiro jogador

                printf("Segundo jogador - Escolha uma carta digitando o código: "); 
                scanf("%s", carta_2);

                printf("Comparando as cartas...\n\n");

                // Encontrando as cartas escolhidas
                carta_A *carta_jogador1 = A;
                carta_A *carta_jogador2 = B;

                for (int i = 0; i < 4; i++) {
                    if (strcmp(ficha[i].codigo_cidade, carta_1) == 0) {
                        carta_jogador1 = &ficha[i]; // Encontrou a carta do primeiro jogador
                    }
                    if (strcmp(ficha[i].codigo_cidade, carta_2) == 0) {
                        carta_jogador2 = &ficha[i]; // Encontrou a carta do segundo jogador 
                    }
                }

                if (carta_jogador1 == NULL || carta_jogador2 == NULL) {
                    printf("\n\033[1;31mUma das cartas escolhidas não existe! Tente novamente.\033[0m\n");
                    break;
                }

                // Comparação das cartas
                if (carta_jogador1->pib > carta_jogador2->pib) {
                    printf("\nVencedor: \033[1;32m%s\033[0m com PIB maior (\033[1;34m%d\033[0m vs \033[1;34m%d\033[0m)!\n", carta_jogador1->nome_cidade, carta_jogador1->pib, carta_jogador2->pib);
                } else if (carta_jogador2->pib > carta_jogador1->pib) {
                    printf("\nVencedor: \033[1;32m%s\033[0m com PIB maior (\033[1;34m%d\033[0m vs \033[1;34m%d\033[0m)!\n", carta_jogador2->nome_cidade, carta_jogador2->pib, carta_jogador1->pib);
                } else {
                    printf("\nEmpate! Ambas as cidades têm o mesmo PIB (\033[1;34m%d\033[0m).\n", carta_jogador1->pib);
                }
                break;

            case 3:
                if (cartas_cadastradas == 0) {
                    printf("\n\033[1;31mNenhuma carta cadastrada ainda! Cadastre primeiro.\033[0m\n");
                } else {
                    exibir_cartas(ficha, 4);  // Mostra as cartas cadastradas
                }
                break;

            case 4:
                printf("\nSaindo do jogo... Até logo!\n");
                break;

            default:
                printf("\n\033[1;31mOpção inválida! Tente novamente.\033[0m\n");
        }

    } while (opcao != 4); // Continua até o usuário escolher "Sair"

    return 0;
}
