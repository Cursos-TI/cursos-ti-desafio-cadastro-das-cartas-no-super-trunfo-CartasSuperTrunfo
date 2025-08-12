#include <stdio.h>

int main() { 

char estado;
char codigo[4];
char cidade[40];
int populacao;
float area;
float PIB;
int pontos;
//agora comeca a parte de coletar os dados

printf("qual o estado? \n");
scanf("%c", &estado);

printf("qual o codigo? \n");
scanf(" %s", &codigo);

printf("digite o nome da cidade: \n");
scanf("%S", &cidade);

printf("digite a populacao: \n");
scanf("%i", &populacao);

printf("digite a area: \n");
scanf(" %F", &area);

printf("digite o PIB: \n");
scanf(" %F", &PIB);

printf("quantidade de pontos turisticos: \n");
scanf("%i", &pontos);

//aqui sao os dados que serao exibidos

printf("Estado: %c \n", estado);
printf("Codigo: %s \n", codigo);
printf("Nome da Cidade: %S \n", cidade);
printf("Populacao: %i habitantes \n", populacao);
printf("Area: %F Km² \n", area);
printf("PIB: %F bilhoes de reais \n", PIB);
printf("pontos turisticos: %i \n", pontos);

return 0;

}