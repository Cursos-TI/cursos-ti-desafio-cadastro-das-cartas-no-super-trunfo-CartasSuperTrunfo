#include <stdio.h>

// ----------------------------------------------
// Função recursiva para movimentar a Torre
// Move apenas na horizontal (Direita)
// ----------------------------------------------
void moverTorre(int totalPassos, int passoAtual) {
    if (passoAtual >= totalPassos) {
        printf("Final da movimentação da Torre!\n\n");
        return;
    }

    printf("Passo %d: Direita\n", passoAtual + 1);
    moverTorre(totalPassos, passoAtual + 1);  // chama a si mesma (recursão)
}

// ----------------------------------------------
// Função recursiva para movimentar a Rainha
// Move apenas na horizontal (Esquerda)
// ----------------------------------------------
void moverRainha(int totalPassos, int passoAtual) {
    if (passoAtual >= totalPassos) {
        printf("Final da movimentação da Rainha!\n\n");
        return;
    }

    printf("Passo %d: Esquerda\n", passoAtual + 1);
    moverRainha(totalPassos, passoAtual + 1);
}

// ----------------------------------------------
// Função recursiva para movimentar o Bispo
// Move em diagonal: Cima + Direita
// ----------------------------------------------
void moverBispoRecursivo(int totalPassos, int passoAtual) {
    if (passoAtual >= totalPassos) {
        printf("Final da movimentação do Bispo (recursivo)!\n\n");
        return;
    }

    printf("Passo %d: Cima Direita\n", passoAtual + 1);
    moverBispoRecursivo(totalPassos, passoAtual + 1);
}

// ----------------------------------------------
// Movimento do Bispo com loops aninhados
// Simula diagonal com vertical externo e horizontal interno
// ----------------------------------------------
void moverBispoComLoops(int passosVerticais, int passosHorizontais) {
    printf("Movimento do Bispo com loops aninhados:\n");

    for (int linha = 0; linha < passosVerticais; linha++) {
        for (int coluna = 0; coluna < passosHorizontais; coluna++) {
            printf("Movimento Diagonal: Cima Direita (Vertical %d, Horizontal %d)\n",
                   linha + 1, coluna + 1);
        }
    }

    printf("Final da movimentação do Bispo (loops)!\n\n");
}

// ----------------------------------------------
// Movimento do Cavalo com loops complexos
// Move em L: duas casas para cima e uma para a direita
// ----------------------------------------------
void moverCavaloEmL() {
    printf("Movimento do Cavalo:\n");

    int maxLinhas = 3;
    int maxColunas = 3;

    for (int linha = 0; linha < maxLinhas; linha++) {
        for (int coluna = 0; coluna < maxColunas; coluna++) {

            // Se chegou na posição que representa o movimento "L"
            if (linha == 2 && coluna == 1) {
                printf("Movimento em 'L': Cima\n");
                printf("Movimento em 'L': Cima\n");
                printf("Movimento em 'L': Direita\n");
                break;  // sai do loop ao realizar o movimento correto
            }

            continue;  // ignora qualquer outra combinação
        }
    }

    printf("Final da movimentação do Cavalo!\n\n");
}

// ----------------------------------------------
// Função principal que organiza a simulação
// ----------------------------------------------
int main() {
    // Quantidade de passos para cada peça
    int passosTorre = 5;
    int passosBispo = 5;
    int passosRainha = 8;

    // Movimento da Torre (recursivo)
    printf("\nMovimento da Torre:\n");
    moverTorre(passosTorre, 0);

    // Movimento do Bispo (recursivo)
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoRecursivo(passosBispo, 0);

    // Movimento do Bispo (loops aninhados)
    moverBispoComLoops(3, 3);

    // Movimento da Rainha (recursivo)
    printf("Movimento da Rainha:\n");
    moverRainha(passosRainha, 0);

    // Movimento do Cavalo com lógica mais complexa
    moverCavaloEmL();

    // Finalização da simulação
    printf("Simulação concluída com sucesso!\n");

    return 0;
}
