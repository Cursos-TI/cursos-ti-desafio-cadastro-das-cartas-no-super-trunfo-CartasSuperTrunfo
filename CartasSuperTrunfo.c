// bibliotecas
#include <stdio.h>

// função main
int main(){
    
    // declaração de variaveis
    char estado1,estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];;
    int populaçao1, populaçao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;

    // cadastro da carta_1
    printf("Digite o Estado da carta_1\n");
    scanf("%c",&estado1);
    printf("Digite o código para carta_1\n");
    scanf("%s",&codigo1);
    printf("Digite a cidade_1\n");
    scanf("%s",&cidade1);
    printf("Digite a população de %s\n",cidade1);
    scanf("%d",&populaçao1);
    printf("Digite a área de %s\n",cidade1);
    scanf("%f",&area1);
    printf("Digite o Pib de %s\n",cidade1);
    scanf("%f",&pib1);
    printf("Digite quantos pontos turisco tem %s:\n",cidade1);
    scanf("%d",&turistico1);

    // cadastro da carta_2
    printf("Digite o Estado da carta_2\n");
    scanf(" %c",&estado2);
    printf("Digite o código para carta_2\n");
    scanf("%s",&codigo2);
    printf("Digite a cidade_2\n");
    scanf(" %s",&cidade2);
    printf("Digite a população de %s\n",cidade2);
    scanf("%d",&populaçao2);
    printf("Digite a área de %s\n",cidade2);
    scanf(" %f",&area2);
    printf("Digite o Pib de %s\n",cidade2);
    scanf("%f",&pib2);
    printf("Digite quantos pontos turisco tem %s:\n",cidade2);
    scanf(" %d",&turistico2);

    // impressão da carta_1
    printf("-----------------------------------------\n");
    printf("------A sua carta 1 esta pronta----------\n");
    printf("Carta_1\n");
    printf("Estado: %c\n",estado1);
    printf("Codigo: %s\n",codigo1);
    printf("Cidade: %s\n",cidade1);
    printf("População: %d\n",populaçao1);
    printf("Àrea: %f\n",area1);
    printf("Pib: %f\n",pib1);
    printf("Turistico1: %d\n",turistico1);

    // impressão da carta_2
    printf("-----------------------------------------\n");
    printf("------A sua carta 2 esta pronta----------\n");
    printf("Carta_2\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Cidade: %s\n",cidade2);
    printf("População: %d\n",populaçao2);
    printf("Àrea: %f\n",area2);
    printf("Pib: %f\n",pib2);
    printf("Turistico1: %d\n",turistico2);




}
