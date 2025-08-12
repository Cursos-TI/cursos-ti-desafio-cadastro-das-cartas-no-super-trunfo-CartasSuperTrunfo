#include <stdio.h>

int main(){
        //Super Trunfo em C
        //variaveis para o cadastro da carta 1 e 2
        char Estado1,Estado2;
        char Codigo1[20], Codigo2[20];
        char Cidade1[20], Cidade2[20];
        int População1, População2;
        float Area1, Area2;
        float Pib1, Pib2;
        int Pontos_Turisticos1,Pontos_Turisticos2;
        
        //Cadastro da informação da 1º Carta  
        printf("Digite a letra do estado(A-H):\n");  
        scanf(" %c", &Estado1);

        printf("Digite o nome da cidade:\n");
        scanf(" %s", Cidade1);

        printf("Digite o codigo da cidade:\n");
        scanf(" %s", Codigo1);
        
        printf("Digite a População da cidade:\n");
        scanf("%d", &População1);

        printf("Digite a Area da cidade:\n");
        scanf("%f", &Area1);
        
        printf("Digite o Pib da cidade:\n");
        scanf("%f", &Pib1);

        printf("Digite quantos Pontos Turisticos tem:\n");
        scanf("%d", &Pontos_Turisticos1);

        //Cadastro da informação da 2º Carta

       printf("Digite a letra do estado(A-H):\n");
       scanf(" %c",&Estado2);

       printf("Digite o nome da cidade:\n");
       scanf(" %s", Cidade2);

       printf("Digite o codigo da cidade:\n");
       scanf(" %s", Codigo2);
       
       printf("Digite a População da cidade:\n");
       scanf(" %d",&População2);

       printf("Digite a Area da cidade:\n");
       scanf(" %f",&Area2);
       
       printf("Digite o Pib da cidade:\n");
       scanf(" %f",&Pib2);

       printf("Digite quantos Pontos Turisticos tem:\n");
       scanf(" %d",&Pontos_Turisticos2);
       printf("\n");
       //Mostrando a comparação entre as duas cartas
       printf("Carta1\n");

       printf("Estado:%c\n",Estado1);
       printf("Código:%s\n",Codigo1);
       printf("Cidade:%s\n", Cidade1);
       printf("População:%d\n", População1);
       printf("Área da cidade:%.2f km²\n", Area1);
       printf("PIB:%.2f\n", Pib1);
       printf(" Pontos Turisticos:%d\n", Pontos_Turisticos1);

       printf("\n");

       printf("Carta2\n");
       printf("Estado:%c\n",Estado2);
       printf("Código:%s\n",Codigo2);             
       printf("Cidade:%s\n", Cidade2);
       printf("População:%d\n", População2);
       printf("Área da cidade:%.2f km²\n", Area2);
       printf("PIB:%.2f\n", Pib1);
       printf(" Pontos Turisticos:%d\n", Pontos_Turisticos2);



        return 0;
}