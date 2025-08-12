#include <stdio.h>

int main(){
    int pontostur1, populacao1;
    char codigo1[30], cidade1[30];
    char estado1;
    float pib1, area1;

    int  pontostur2, populacao2;
    char codigo2[30], cidade2[30];
    char estado2;
    float pib2, area2;
    
        /* Dados Referente a primeira e segunda carta: Estado, 
        Código, Nome da Cidade, População, Área: em km², PIB 
        em bilhões de reais, Número de Pontos Turísticos.*/

    printf("Preencha os dados do Super Trunfo: \nCarta: 1\n");

    printf("Digite o Estado: ");
    scanf("%s", &estado1);

    printf("Digite o Código: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontostur1);


    printf("Preencha os dados do Super Trunfo: \nCarta: 2\n");

    printf("Digite o Estado: ");
    scanf("%s", &estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontostur2);
    
        /*Associando ad informações que será solicitada ao usuário 
        e as respectivas referências dentro do programa, (dados de
        entrada e saída)*/


        /* Exibindo os dados coletados */
    printf("\n--- Resultado ---\n");
    printf("\nCarta: 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontostur1);

    printf("\nCarta: 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontostur2);


    return 0;

}