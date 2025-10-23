#include <stdio.h>

// Número máximo de casas para movimentação
const int numCasas = 4;

// -------------------------------------------
// FUNÇÕES RECURSIVAS
// -------------------------------------------

// Movimento recursivo da Torre (somente para cima e para direita, por simplicidade)
void moverTorreCima(int passos) {
    if (passos == 0) return;
    printf("Cima\n");
    moverTorreCima(passos - 1);
}

void moverTorreDireita(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorreDireita(passos - 1);
}

// Movimento recursivo do Bispo (diagonal: cima + direita)
void moverBispoDiagonal(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    printf("Diagonal (Cima + Direita)\n");
    moverBispoDiagonal(vertical - 1, horizontal - 1);
}

// Movimento recursivo da Rainha (combinação de Torre e Bispo)
void moverRainha(int vertical, int horizontal) {
    if (vertical > 0) {
        printf("Cima\n");
        moverRainha(vertical - 1, horizontal);
    } else if (horizontal > 0) {
        printf("Direita\n");
        moverRainha(vertical, horizontal - 1);
    } else if (vertical == 0 && horizontal == 0) {
        return;
    }
}

// -------------------------------------------
// FUNÇÃO DO CAVALO COM LOOPS COMPLEXOS
// -------------------------------------------

void moverCavalo() {
    printf("Movimento do Cavalo (duas casas para cima e uma para a direita):\n");
    for (int i = 0; i < numCasas; i++) {
        for (int j = 0; j < numCasas; j++) {
            // Condição do movimento em "L": 2 cima, 1 direita
            if (i == 2 && j == 1) {
                printf("Cavalo: 2 Cima, 1 Direita\n");
                break; // apenas um movimento por chamada
            } else {
                continue; // ignora combinações inválidas
            }
        }
    }
}

// -------------------------------------------
// BISPO COM LOOPS ANINHADOS
// -------------------------------------------

void moverBispoComLoops() {
    printf("Movimento do Bispo (Loops aninhados):\n");
    for (int i = 0; i < numCasas; i++) {         // movimento vertical
        for (int j = 0; j < numCasas; j++) {     // movimento horizontal
            if (i == j) { // Diagonal (cima + direita)
                printf("Diagonal (Cima + Direita) - Passo %d\n", i + 1);
            }
        }
    }
}

// -------------------------------------------
// FUNÇÃO PRINCIPAL
// -------------------------------------------

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorreCima(numCasas);
    moverTorreDireita(numCasas);
    printf("\n");

    // Movimento do Bispo (recursivo)
    printf("Movimento do Bispo (recursivo):\n");
    moverBispoDiagonal(numCasas, numCasas);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(numCasas, numCasas);
    printf("\n");

    // Movimento do Cavalo
    moverCavalo();
    printf("\n");

    // Movimento do Bispo com loops aninhados
    moverBispoComLoops();
    printf("\n");

    return 0;
}
