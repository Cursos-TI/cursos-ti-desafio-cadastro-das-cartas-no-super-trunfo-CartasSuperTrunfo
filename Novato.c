#include <stdio.h>
#include <locale.h>

int main()
{
    // Forma do terminal reconhecer os caracteres
    setlocale(LC_ALL, "Portuguese_Brazil");

    // criação das variáveis
    char estado;
    char codigo[10];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Cadastro das Cartas
    printf("### Super Trunfo ###\n");
    printf("### Cadastro de Cartas ###\n\n");

    printf("Carta 1:\n");
    printf("Estado: ");
    scanf("%c", &estado);
    printf("Código: ");
    scanf("%s", &codigo);
    printf("Cidade: ");
    scanf(" %[^\n]", nomeCidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (Km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: ");
    scanf("%c", &estado);
    printf("Código: ");
    scanf("%s", &codigo);
    printf("Cidade: ");
    scanf("%s", &nomeCidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área (Km²): ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    return 0; // Indica que o programa terminou com sucesso
}