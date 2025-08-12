#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
   
    char estado1;
    char codigo1;
    char cidade1;
    int populacao1 = 1;
    float area1;
    float pib1;
    int turistico1 = 0;
    float densidade1;
    float pibcapita1;
    float superpoder1;


    printf("digite o nome do estado1: \n");
    scanf("%c", &estado1);

    printf("digite o codigo1: \n");
    scanf("%c", &codigo1);

    printf("digite o nome da cidade1: \n");
    scanf("%s", &cidade1);

    printf("digite populacao1: \n");
    scanf("%d",&populacao1);

    printf("digite a area1: \n");
    scanf("%f", &area1);

    printf("digite o pib1: \n");
    scanf("%f", &pib1);

    printf("digite ponto turistico1: \n");
    scanf("%d", &turistico1);

    printf("estado1: %c\n", estado1);
    printf("codigo1: %c\n", codigo1);
    printf("cidade1: %c\n", cidade1);
    printf("populacao1: %d\n", populacao1);
    printf("area1: %f\n", area1);
    printf("pib1: %f\n", pib1);
    printf("turistico1: %d\n", turistico1);

    densidade1 = (float) populacao1 / area1;
    pibcapita1 = (float) populacao1 / pib1;

    printf("A densidade populacional1 é: %.2f\n", densidade1);
    printf("O pib per capita1 é: %.2f\n", pibcapita1);

    superpoder1 = (float) populacao1 + area1 + pib1 + turistico1 + pibcapita1 + densidade1;

    printf("superpoder1: %.2f\n", superpoder1);



    char estado2;
    char codigo2;
    char cidade2;
    int populacao2 = 0;
    float area2;
    float pib2;
    int turistico2 = 1;
    float densidade2;
    float pibcapita2;
    float superpoder2;

    printf("digite o nome do estado2: \n");
    scanf("%c", &estado2);

    printf("digite o codigo2: \n");
    scanf("%c", &codigo2);

    printf("digite o nome da cidade: \n");
    scanf("%c", &cidade2);

    printf("digite populacao2: \n");
    scanf("%d",&populacao2);

    printf("digite a area2: \n");
    scanf("%f", &area2);

    printf("digite o pib2: \n");
    scanf("%f", &pib2);

    printf("digite ponto turistico2: \n");
    scanf("%d", &turistico2);

    printf("estado2: %c\n", estado2);
    printf("codigo2: %c\n", codigo2);
    printf("cidade2: %c\n", cidade2);
    printf("populacao2: %d\n", populacao2);
    printf("area2: %f\n", area2);
    printf("pib2: %f\n", pib2);
    printf("turistico2: %d\n", turistico2);

    densidade2 = (float) populacao2 / area2;
    pibcapita2 = (float) populacao2 / pib2;

    printf("A densidade populacional2 é: %.2f\n", densidade2);
    printf("O pib per capita2 é: %.2f\n", pibcapita2);

    superpoder2 = (float) populacao2 + area2 + pib2 + turistico2 + pibcapita2 + densidade2;

    printf("superpoder2: %.2f\n", superpoder2);

// Exibição do menu

    int resultado1, resultado2;
    char atributo1, atributo2;
    int carta1, carta2;

    srand(time(0));
    carta1 = 1;
    carta2 = 0;
    

     printf("**super trunfo**\n");
     printf("Escolha uma primeira opção: \n");
     printf("C.carta\n");
     printf("P. populacao\n");
     printf("t. turistico\n");

     printf("escolha a comparacao.\n");
     scanf("%c", &atributo1);

     switch (atributo1)
     {
     case 'C':
     case 'c':
     printf("voce escolheu a opcao carta!\n");
        resultado1 = carta1 > carta2 ? 1 : 0;
         break;
         
     case 'P':
     case 'p':
     printf("voce escolheu a opcao populacao!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
         break;
         
     case 'T':
     case 't':
     printf("voce escolheu a opcao turistico!\n");
        resultado1 = turistico1 > turistico2 ? 1 : 0;
         break;
     
     default:
     printf("opcao invalida");
         break;
     }


     printf("escolha a segunda opcao\n");
     printf(" atencao: nao pode ser a mesma opcao da primeira\n");
     printf("C.carta\n");
     printf("P. populacao\n");
     printf("t. turistico\n"); 

     printf("escolha a comparacao.\n");
     scanf("%c", &atributo2);


     if(atributo1 == atributo2)
     {
        printf("voce escolheu o mesmo atributo.\n");
     } else{
        switch (atributo2)
     {
     case 'C':
     case 'c':
     printf("voce escolheu a opcao carta!\n");
        resultado1 = carta1 > carta2 ? 1 : 0;
         break;
         
     case 'P':
     case 'p':
     printf("voce escolheu a opcao populacao!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
         break;
         
     case 'T':
     case 't':
     printf("voce escolheu a opcao turistico!\n");
        resultado1 = turistico1 > turistico2 ? 1 : 0;
         break;
     
     default:
     printf("opcao invalida");
         break;    
}


if (resultado1 && resultado2)
{
   printf("parabens, voce ganhou!\n");
} else if(resultado1 != resultado2)
{
    printf("empate!\n");
} else{
    printf("voce perdeu.\n");
}




}          

} 

    

