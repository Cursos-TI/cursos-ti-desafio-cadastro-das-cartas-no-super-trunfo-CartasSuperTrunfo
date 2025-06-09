#include <stdio.h>

int main (){

    //Codigo simples que informara o que deve ser inserido, guardara as informações nas variaveis:

    char estado1[50];
    char cod1[4];
    char cidade1[50];
    int pop1; //população
    float area1;
    float pib1;
    int tur1; //pontos turisticos

    char estado2[50];
    char cod2[4];
    char cidade2[50];
    int pop2; //população
    float area2;
    float pib2;
    int tur2; //pontos turisticos

    printf("Vamos criar sua primeira carta:\n Informe o estado da cidade:\n"); //criação da primeira carta, pedindo as informações do usuario com printf e recebendo informações com scanf
    scanf("%s", estado1 );
    printf("Informe o codigo da carta: \n");
    scanf("%s", cod1);
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Informe a população da cidade: \n");
    scanf("%d", &pop1);
    printf("Informe a area da cidade: \n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Informe quantos pontos turisticos a cidade possui: \n");
    scanf("%d", &tur1);
    printf("A primeira carta foi criada com sucesso! \n\n");

    printf("Vamos criar a segunda carta:\n Informe o estado da cidade: \n");//criação da segunda carta, pedindo as informações do usuario com printf e recebendo informações com scanf
    scanf("%s", estado2 );
    printf("Informe o codigo da carta: \n");
    scanf("%s", cod2);
    printf("Informe o nome da cidade: \n");
    scanf("%s", cidade2);   
    printf("Informe a população da cidade: \n");
    scanf("%d", &pop2);
    printf("Informe a area da cidade: \n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Informe quantos pontos turisticos a cidade possui: \n");
    scanf("%d", &tur2);
    printf("A segunda carta foi criada com sucesso! \n Vamos conferir as informações das duas cartas \n\n");

    printf("Codigo da carta: %s \n", cod1);//mostra as informações da primeira carta com printf
    printf("Estado: %s \n", estado1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", pop1);
    printf("Area: %.2f km² \n", area1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("Quant de Pontos Turisticos: %d \n\n", tur1);

     printf("Codigo da carta: %s \n", cod2);//mostra as informações da segunda carta com printf
    printf("Estado: %s \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", pop2);
    printf("Area: %.2f km² \n", area2);
    printf("PIB: R$ %.2f \n", pib2);
    printf("Quant de Pontos Turisticos: %d \n", tur2);



    return 0;
}