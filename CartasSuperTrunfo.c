#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

//--- secao escrita pelo aluno---

void esvazia_buffer_teclado() { 

    // funcao necessaria para esvaziar o buffer do teclado
    // para evitar que o \n digitado pelo usuario seja lido
    // na proxima entrada de dados, fazendo com que o programa
    // pule uma entrada de dados sem esperar o usuario digitar

    int c; // numero ASCII do caractere armazenado no buffer do teclado

    while ((c = getchar()) != '\n' && c != EOF) { } // ignora os caracteres especiais

    return;
}    

//---fim da secao escrita pelo aluno---

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //---inicio da secao escrita pelo aluno---

    // declaracao de variaveis

    char estado1, estado2; // uma letra de 'A' a 'H', representando um dos oito estados

    char carta1[4], carta2[4]; // a letra do estado, seguida de um numero de 01 a 04

    char cidade1[51], cidade2[51]; // reserva um caractere a mais para armazenar o \n

    int populacao1, populacao2, pontos1, pontos2; // numeros inteiros

    float area1, area2, pib1, pib2; // numeros com digitos decimais

    //---fim da secao escrita pelo aluno---
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //---inicio da secao escrita pelo aluno---

    // entrada de dados para a Carta 1

    printf("\nDigite uma letra de 'A' ate 'H' para o Estado 1: ");
    scanf("%c", &estado1); // aguarda a digitacao de um caractere no teclado

    esvazia_buffer_teclado(); // para evitar pular a proxima digitacao

    printf("Digite o codigo de 01 a 04 para a Carta 1: ");
    fgets(carta1, 4, stdin); // le a quantidade de caracteres da carta1

    esvazia_buffer_teclado(); // para evitar pular a proxima digitacao

    printf("Qual eh o nome da Cidade 1? "); // exibe na tela pergunta para o usuario
    fgets(cidade1, 50, stdin); // le a quantidade de caracteres da cidade1

    printf("Quantos habitantes tem a Cidade 1? "); // exibe nova pergunta na tela
    scanf("%d", &populacao1); // aguarda digitar o numero inteiro

    printf("Quantos quilometros quadrados tem a area da Cidade 1? "); // nova pergunta
    scanf("%f", &area1); // aguarda digitar o numero com duas casas decimais

    printf("Qual eh o valor do Produto Interno Bruto da Cidade 1? "); // nova pergunta
    scanf("%f", &pib1); // aguarda digitar o valor do PIB, com duas casas decimais

    printf("Quantos pontos turisticos tem a Cidade 1? "); // nova pergunta
    scanf("%d", &pontos1); // aguarda digitar o numero inteiro

    // entrada de dados para a Carta 2

    esvazia_buffer_teclado(); // para evitar pular a proxima digitacao

    printf("\nDigite uma letra de 'A' ate 'H' para o Estado 2: ");
    scanf("%c", &estado2); // aguarda digitacao de um caractere no teclado

    esvazia_buffer_teclado(); // para evitar pular a proxima digitacao

    printf("Digite o codigo de 01 a 04 para a Carta 2: ");
    fgets(carta2, 4, stdin); // le a quantidade de caracteres da carta2

    esvazia_buffer_teclado(); // para evitar pular a proxima digitacao

    printf("Qual eh o nome da Cidade 2? "); // exibe na tela pergunta para o usuario
    fgets(cidade2, 51, stdin); // le a quantidade de caracteres da cidade2

    printf("Quantos habitantes tem a Cidade 2? "); // exibe nova pergunta na tela
    scanf("%d", &populacao2); // aguarda digitar o numero inteiro

    printf("Quantos quilometros quadrados tem a area da Cidade 2? "); // nova pergunta
    scanf("%f", &area2); // aguarda digitar o numero com duas casas decimais

    printf("Qual eh o valor do Produto Interno Bruto da Cidade 2? "); // nova pergunta
    scanf("%f", &pib2); // aguarda digitar o valor do PIB, com duas casas decimais

    printf("Quantos pontos turisticos tem a Cidade 2? "); // nova pergunta
    scanf("%d", &pontos2); // aguarda digitar o numero inteiro
    
    //---fim da secao escrita pelo aluno---
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //---inicio da secao escrita pelo aluno---

    // exibicao dos dados da Carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", carta1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d", pontos1);

    // exibicao dos dados da Carta 2

    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", carta2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n\n", pontos2);

    //---fim da secao escrita pelo aluno---

    return 0;
}
