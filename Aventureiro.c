// Aplicação das bibliotecas

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
    float densiPopulacionalCarta1, densiPopulacionalCarta2;
    float pibPercapitoCarta1, pibPercapitoCarta2;

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
    densiPopulacionalCarta1 = populacao / area;
    printf("Densidade Populacional: %.2f\n", densiPopulacionalCarta1);
    pibPercapitoCarta1 = pib / populacao;
    printf("PIB per capita: %.2f\n", pibPercapitoCarta1);

    printf("\n");
    printf("Carta 2:\n");
    printf("Estado: ");
    scanf("%c", &estado);
    scanf(" %c", &estado);
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
    densiPopulacionalCarta2 = populacao / area;
    printf("Densidade Populacional: %.2f\n", densiPopulacionalCarta2);
    pibPercapitoCarta2 = pib / populacao;
    printf("PIB per capita: %.2f\n", pibPercapitoCarta2);

    return 0; // Indica que o programa terminou com sucesso
}