
#include <stdio.h>

int main() {

    char estado, codigo[20], cidade[20];
    int populacao, turismo;
    float area, pib;

    char estado2, codigo2[20], cidade2[20];
    int populacao2, turismo2;
    float area2, pib2;

    //Esse programa tem como finalidade receber dados dos usuários e armazena-los para posteriormente imprimi-los na tela. Para isso usei printf para especificar para o usuario as informações que o programa precisa e scanf para receber os dados do usuário.

    printf("Digite o nome do Estado usando uma letra de 'A' a 'H':\n ");
    scanf(" %c", &estado);

    printf("Digite o código da carta: a letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Insira o tamanho da população: \n");
    scanf("%d", &populacao);

    printf("Insira o tamanho da área em km²: \n");
    scanf("%f", &area);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turismo);

    printf("Digite o nome do Estado usando uma letra de 'A' a 'H':\n ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta: a letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Insira o tamanho da população: \n");
    scanf("%d", &populacao2);

    printf("Insira o tamanho da área em km²: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turismo2);

    printf("Carta 01 \n");
    printf("Nome do Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da Cidade: %s \n", cidade);
    printf("Tamanho da população: %d \n", populacao);
    printf("Área:%.2f \n", area);
    printf("PIB: %.2f \n", pib);
    printf("Número de Pontos Turísticos: %d \n", turismo);

    printf("Carta 02 \n");
    printf("Nome do Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("Tamanho da população: %d \n", populacao2);
    printf("Área:%.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", turismo2);


    return 0;



    


}
