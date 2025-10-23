#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define AGUA 0

// Função para imprimir o tabuleiro 10x10
void exibirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("\n=== TABULEIRO ===\n\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se o navio cabe no tabuleiro e não sobrepõe outros
int podePosicionar(int tabuleiro[TAM][TAM], int linha, int coluna, int direcao, int tamanho, int diagonal) {
    for (int k = 0; k < tamanho; k++) {
        int i = linha, j = coluna;

        if (diagonal) {
            if (direcao == 1) { // diagonal ↘ (linha++, coluna++)
                i = linha + k;
                j = coluna + k;
            } else { // diagonal ↙ (linha++, coluna--)
                i = linha + k;
                j = coluna - k;
            }
        } else {
            if (direcao == 1) // horizontal →
                j = coluna + k;
            else               // vertical ↓
                i = linha + k;
        }

        // Verifica limites
        if (i < 0 || i >= TAM || j < 0 || j >= TAM)
            return 0;
        // Verifica sobreposição
        if (tabuleiro[i][j] != AGUA)
            return 0;
    }
    return 1;
}

// Função para posicionar um navio no tabuleiro
void posicionarNavio(int tabuleiro[TAM][TAM], int linha, int coluna, int direcao, int tamanho, int diagonal) {
    for (int k = 0; k < tamanho; k++) {
        int i = linha, j = coluna;

        if (diagonal) {
            if (direcao == 1) { // diagonal ↘
                i = linha + k;
                j = coluna + k;
            } else { // diagonal ↙
                i = linha + k;
                j = coluna - k;
            }
        } else {
            if (direcao == 1) // horizontal →
                j = coluna + k;
            else               // vertical ↓
                i = linha + k;
        }

        tabuleiro[i][j] = NAVIO;
    }
}

int main() {
    int tabuleiro[TAM][TAM];

    // Inicializa o tabuleiro com 0 (água)
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            tabuleiro[i][j] = AGUA;

    // Tamanho fixo dos navios
    int tamanho = 3;

    // --- Posicionamento manual dos 4 navios ---
    // Dois navios normais (horizontal e vertical)
    if (podePosicionar(tabuleiro, 0, 0, 1, tamanho, 0))
        posicionarNavio(tabuleiro, 0, 0, 1, tamanho, 0); // horizontal no topo

    if (podePosicionar(tabuleiro, 2, 4, 0, tamanho, 0))
        posicionarNavio(tabuleiro, 2, 4, 0, tamanho, 0); // vertical

    // Dois navios diagonais (↘ e ↙)
    if (podePosicionar(tabuleiro, 5, 5, 1, tamanho, 1))
        posicionarNavio(tabuleiro, 5, 5, 1, tamanho, 1); // diagonal ↘

    if (podePosicionar(tabuleiro, 4, 8, 0, tamanho, 1))
        posicionarNavio(tabuleiro, 4, 8, 0, tamanho, 1); // diagonal ↙

    // Exibir o tabuleiro completo
    exibirTabuleiro(tabuleiro);

    return 0;
}

