#include <stdio.h>
#include <stdlib.h> // Para abs()

int main() {
    // Declaração do tabuleiro 10x10, iniciando todas as posições com 0 (água)
    int tabuleiro[10][10];
    int i, j;

    // Inicializa todas as posições com 0
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona navio horizontal
    int linhaH = 2, colunaH = 4;
    if (colunaH + 3 <= 10) {
        for (j = 0; j < 3; j++) {
            tabuleiro[linhaH][colunaH + j] = 3;
        }
    }

    // Posiciona navio vertical
    int linhaV = 5, colunaV = 6, sobreposicao = 0;
    if (linhaV + 3 <= 10) {
        for (i = 0; i < 3; i++) {
            if (tabuleiro[linhaV + i][colunaV] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        if (!sobreposicao) {
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaV + i][colunaV] = 3;
            }
        }
    }

    // Posiciona navio diagonal principal (↘)
    int linhaD1 = 0, colunaD1 = 0;
    sobreposicao = 0;
    if (linhaD1 + 3 <= 10 && colunaD1 + 3 <= 10) {
        for (i = 0; i < 3; i++) {
            if (tabuleiro[linhaD1 + i][colunaD1 + i] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        if (!sobreposicao) {
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaD1 + i][colunaD1 + i] = 3;
            }
        }
    }

    // Posiciona navio diagonal secundária (↙)
    int linhaD2 = 0, colunaD2 = 9;
    sobreposicao = 0;
    if (linhaD2 + 3 <= 10 && colunaD2 - 3 >= -1) {
        for (i = 0; i < 3; i++) {
            if (tabuleiro[linhaD2 + i][colunaD2 - i] != 0) {
                sobreposicao = 1;
                break;
            }
        }
        if (!sobreposicao) {
            for (i = 0; i < 3; i++) {
                tabuleiro[linhaD2 + i][colunaD2 - i] = 3;
            }
        }
    }

    // Criação das matrizes de habilidade 5x5 (inicializa tudo com 0)
    int cone[5][5], cruz[5][5], octaedro[5][5];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cone[i][j] = cruz[i][j] = octaedro[i][j] = 0;
        }
    }

    // Define área de efeito: Cone (triângulo invertido)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i)
                cone[i][j] = 1;
        }
    }

    // Define área de efeito: Cruz (linha e coluna centrais)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (i == 2 || j == 2)
                cruz[i][j] = 1;
        }
    }

    // Define área de efeito: Octaedro (losango)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (abs(i - 2) + abs(j - 2) <= 2)
                octaedro[i][j] = 1;
        }
    }

    // Pontos de origem no tabuleiro
    int origemConeLinha = 0, origemConeColuna = 2;
    int origemCruzLinha = 7, origemCruzColuna = 5;
    int origemOctaedroLinha = 4, origemOctaedroColuna = 0;

    // Sobrepor Cone no tabuleiro
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int linha = origemConeLinha + i;
            int coluna = origemConeColuna + j;
            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                if (cone[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }

    // Sobrepor Cruz no tabuleiro
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int linha = origemCruzLinha + i;
            int coluna = origemCruzColuna + j;
            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                if (cruz[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }

    // Sobrepor Octaedro no tabuleiro
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            int linha = origemOctaedroLinha + i;
            int coluna = origemOctaedroColuna + j;
            if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                if (octaedro[i][j] == 1 && tabuleiro[linha][coluna] == 0)
                    tabuleiro[linha][coluna] = 5;
            }
        }
    }

    // Exibir tabuleiro com cabeçalho
    printf("\nTabuleiro Batalha Naval (0=água, 3=navio, 5=habilidade):\n\n");

    printf("   ");
    for (j = 0; j < 10; j++)
        printf("%d ", j);
    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%2d ", i);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
