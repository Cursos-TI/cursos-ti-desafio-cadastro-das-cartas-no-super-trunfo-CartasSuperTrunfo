#include <stdio.h>

// Função Generica para entrada de dados
void entrada() {
    // Código para a função de entrada de dados
    printf("Função de entrada de dados chamada\n");
}

// Função Generica para calculo da Média
float calcularMedia() {
    // Código para a função de cálculo da média
    printf("Função de cálculo da média chamada\n");
    return 0.0;
}

// Função Generica para exibir dados
void exibirMedia() {
    // Código para a função exibirMedia
    printf("Função exibirMedia chamada\n");
}

int main() {
    printf("Programa de teste iniciado\n");
    
    entrada();
    float media = calcularMedia();
    exibirMedia();
    
    return 0;
}