#include <stdio.h>

int main(){
    char Populacao[6];
    int Turistico;
    char Area[5];
    char Pib[4];
    char cnome[20] , nome[20];
    
    printf("Bem Vindo ao SuperTrunfo\n");
    printf("Qual o seu incrivel nome?");
    scanf("%s", nome);
    printf("Espero que você goste do jogo, %s , aproveite!\n" , nome );
    printf("Agora, vamos apresentar a criação das cartas, voce ira adicionar o Nome da cidade,Area,PIB,Pontos turisticos e a População, vamos la?\n");
    printf("Vamos começar com o nome da sua cidade.. Como ela vai se chamar?");
    scanf("%s", cnome);
    printf("Certo, agora, Qual o tamanho da sua cidade?\n");
    scanf("%s", Area);
    printf("Que tamanho em!!, e quantas pessoas moram nesta cidade?");
    scanf("%s", Populacao);
    printf("Que quantidade enorme de pessoas, qual o PIB desta cidade?");
    scanf("%s", Pib);
    printf("Com este PIB, deve-se ter pontos turiscos,Não é? Quantos pontos turisticos tem na sua cidade?");

   scanf("%d" , &Turistico);
    printf("so para confirmar, estes são os dados da sua cidade obtidos:\n");
    printf("Nome da cidade: %s\n" , cnome);
    printf("Sua Area é: %s\n", Area);
    printf("A População da sua cidade é: %s\n" , Populacao);
    printf("O PIB da sua cidade é: %s \n" , Pib);
    printf(" E o número de pontos turisticos são: %d\n", Turistico);
    
    return 0;
}
