#include <stdio.h>

int main(){

char estado1[50], codCard1[50], cidade1[50], estado2[50], codCard2[50], cidade2[50];
int populacao1, pontoTuristico1, populacao2, pontoTuristico2;
float area1, pib1, area2, pib2;

printf("Vai começar o Super Trunfo, Prepare-se!!!!!\n\n");
printf("Digite os dados da Primeira carta.\n");

printf("Digite seu estado: ");
scanf("%s", estado1);
printf("Digite o seu Código: ");
scanf("%s", codCard1);
printf("Digite o Nome da Cidade: ");
scanf("%s", cidade1);
printf("Qual é o total da população? ");
scanf("%d", &populacao1);
printf("Qual a Aréa em Km² da sua Cidade? ");
scanf("%f", &area1);
printf("Digite o PIB do seu Estado: ");
scanf("%f", &pib1);
printf("Qual a quantidade de Pontos Turísticos? ");
scanf("%d", &pontoTuristico1);

printf("\nOba, Vi que você digitou os dados da sua Primeira Carta, agora vamos para a segunda? \n\n");
printf("Digite os dados da sua Segunda carta.\n");

printf("Digite seu estado: ", "Ex.: A-H");
scanf("%s", estado2);
printf("Digite o seu Código: ", "Ex.: A01, B03");
scanf("%s", codCard2);
printf("Digite o Nome da Cidade: ");
scanf("%s", cidade2);
printf("Qual é o total da população? ");
scanf("%d", &populacao2);
printf("Qual a Aréa em Km² da sua Cidade? ");
scanf("%f", &area2);
printf("Digite o PIB do seu Estado: ");
scanf("%f", &pib2);
printf("Qual a quantidade de Pontos Turísticos?");
scanf("%d", &pontoTuristico2);

printf("\nDados da segunda carta inseridos, agora vamos ao comparativo!\n\n");

printf("Carta 1: \n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codCard1);
printf("Nome da Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %f\n", area1);
printf("PIB: %f\n", pib1);
printf("Número de Pontos Turísticos: %d\n\n", pontoTuristico1);

printf("Carta 2: \n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codCard2);
printf("Nome da Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %f\n", area2);
printf("PIB: %f\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontoTuristico2);

return 0;
}
