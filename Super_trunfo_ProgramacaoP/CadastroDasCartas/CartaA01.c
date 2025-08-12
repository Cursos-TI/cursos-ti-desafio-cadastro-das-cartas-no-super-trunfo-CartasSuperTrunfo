#include <stdio.h>

int main() {
    printf("Cadastro da Cartas A01\n");
    // Acima printf para definir qual carta está sendo cadastrada
    // Abaixo definição de variáveis para cada atributo da carta
    char Estado[1] = "A";
    char CodigodaCarta[03] = "A01";
    char Cidade[20] = "Salvador";
    int Populacao = 2418000;
    float Area = 693.8;
    float PIB = 21.8;
    int PontosTuristicos = 20;

    // Abaixo solicitação de entrada de dados para cada atributo da carta
    printf("Digite o Estado: ");
    scanf("%s", Estado);
    printf("Digite o Codigo da Carta: ");
    scanf("%s", CodigodaCarta);
    printf("Digite o Nome da cidade: ");
    scanf("%s", Cidade);
    printf("Digite a Populacao: ");
    scanf("%d", &Populacao);
    printf("Digite a Area: ");
    scanf("%f", &Area);
    printf("Digite o PIB: ");
    scanf("%f", &PIB);
    printf("Digite o Numero de Pontos Turisticos:  \n");
    scanf("%d", &PontosTuristicos);

    // Abaixo exibição dos dados da carta
    printf("Estado: %s\n", Estado);
    printf("Codigo da Carta: %s\n", CodigodaCarta);
    printf("Nome da Cidade: %s\n", Cidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos);  

    return 0;

}