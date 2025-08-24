#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//Dados Carta 1
char estado1;
char codigo1[4];
char nomecidade1[20];
unsigned long int populacao1;
float area1;
float pib1;
int pontosturisticos1;
float densidade1;
float pibpercapita1;
float superpoder1;

//Dados Carta 2
char estado2;
char codigo2[4];
char nomecidade2[20];
unsigned long int populacao2;
float area2;
float pib2;
int pontosturisticos2;
float densidade2;
float pibpercapita2;
float superpoder2;

//Leitura Carta 1
printf("\nCarta 1: \n");
printf("Estado (A-H): ");
scanf(" %c", &estado1);

printf("Código da Carta (ex: A01): ");
scanf("%s", codigo1);

printf("Nome da Cidade: ");
scanf(" %[^\n]", nomecidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área (em km²): ");
scanf("%f", &area1);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Pontos Turisticos: ");
scanf("%d", &pontosturisticos1);

//Calculo Carta 1
densidade1 = populacao1 / area1;
pibpercapita1 = (pib1*1000000000)/populacao1;

//Leitura Carta 2
printf("\nCarta 2: \n");
printf("Estado (A-H): ");
scanf(" %c", &estado2);

printf("Código da Carta (ex: B02): ");
scanf("%s", codigo2);

printf("Nome da Cidade: ");
scanf(" %[^\n]", nomecidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área (em km²): ");
scanf("%f", &area2);

printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Pontos Turisticos: ");
scanf("%d", &pontosturisticos2);

//Calculo Carta 2
densidade2 = populacao2 / area2;
pibpercapita2 = (pib2*1000000000)/populacao2;

//Exibição Carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código da Carta: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomecidade1);
printf("População: %d\n", populacao1);
printf("Área (em km²): %2f\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Pontos Turisticos: %d\n", pontosturisticos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
printf("PIB per Capita: %.2f reais\n", pibpercapita1);
printf("Super Poder: %.2f\n", superpoder1);


//Exibição Carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código da Carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomecidade2);
printf("População: %d\n", populacao2);
printf("Área (em km²): %2f\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Pontos Turisticos: %d\n", pontosturisticos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
printf("PIB per Capita: %.2f reais\n", pibpercapita2);
printf("Super Poder: %.2f\n", superpoder2);

//Comparação
printf("\nComparação de Cartas:\n");
printf("População: Sua Carta Venceu Aqui (%d)\n", populacao1 > populacao2);
printf("Area: Sua Carta Venceu Aqui (%d)\n", area1 > area2);
printf("PIB: Sua Carta Venceu Aqui (%d)\n", pib1 > pib2);
printf("Pontos Turisticos: Sua Carta Venceu Aqui (%d)\n", pontosturisticos1 > pontosturisticos2);
printf("Densidade Populacional: Sua Carta Venceu Aqui (%d)\n", densidade1 > densidade2);
printf("PIB per Capita: Sua Carta Venceu Aqui (%d)\n", pibpercapita1 > pibpercapita2);
printf("Super Poder: Sua Carta Venceu Aqui (%d)\n", superpoder1 > superpoder2);

//Comparação Final com a escolha de: População
printf("\nComparação Final por (População)\n");
printf("Carta 1 - %s(%c): %lu habitantes\n", nomecidade1, estado1, populacao1);
printf("Carta 2 - %s(%c): %lu habitantes\n", nomecidade2, estado2, populacao2);

if (populacao1 > populacao2){
    printf("Resultado: Carta 1(%s) venceu!\n", nomecidade1);
} else if (populacao2 > populacao1){
    printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
} else {
    printf("Resultado: Empate!\n");
}

//Menu Interativo Swicth
int escolha;
printf("\nMENU DE COMPARAÇÃO\n");
printf("Escolha o atributo para comparar:\n");
printf("1 - População\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Populacional (menor vence)\n");
printf("6 - PIB per Capita\n");
printf("7 - Super Poder\n");
printf("Digite sua opção: ");
scanf("%d", &escolha);

//Switch
switch(escolha){
case 1:
    printf("\nPopulação:\n");
    printf("%s: %lu habitantes\n", nomecidade1, populacao1);
    printf("%s: %lu habitantes\n", nomecidade2, populacao2);
    if (populacao1 > populacao2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (populacao2 > populacao1)
        printf("Vencedora: %s\n", nomecidade2);
    else   
        printf("Empate!\n");
    break;

case 2: 
    printf("\nArea:\n");
    printf("%s: %.2f km²\n", nomecidade1, area1);
    printf("%s: %.2f km²\n", nomecidade2, area2);
    if (area1 > area2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (area2 > area1)
        printf("Vencedora: %s\n", nomecidade2);
    else   
        printf("Empate!\n");
    break;

case 3:
    printf("\nPIB:\n");
    printf("%s: %.2f bilhões\n", nomecidade1, pib1);
    printf("%s: %.2f bilhões\n", nomecidade2, pib2);
    if (pib1 > pib2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (pib2 > pib1)
        printf("Vencedora: %s\n", nomecidade2);
    else    
        printf("Empate!\n");
    break;

case 4:
    printf("Pontos Turisticos:\n");
    printf("%s: %d\n", nomecidade1, pontosturisticos1);
    printf("%s: %d\n", nomecidade2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2)
        printf("Vencedora: %d\n", nomecidade1);
    else if (pontosturisticos2 > pontosturisticos1)
        printf("Vencedora: %d\n", nomecidade2);
    else
        printf("Empate!\n");
    break;

case 5:
    printf("Densidade Populacional:\n");
    printf("%s: %.2f hab/km²\n", nomecidade1, densidade1);
    printf("%s: %.2f hab/km²\n", nomecidade2, densidade2);
    if (densidade1 < densidade2)
        printf ("Vencedora: %.2f", nomecidade1);
    else if (densidade2 < densidade1)
        printf("Vencedora: %.2f\n", nomecidade2);
    else
        printf("Empate!\n");
      break;

case 6:
    printf("PIB per Capita:\n");
    printf("%s: %.2f reais\n", nomecidade1, pibpercapita1);
    printf("%s: %.2f reais\n", nomecidade2, pibpercapita2);
    if (pibpercapita1 > pibpercapita2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (pibpercapita2 > pibpercapita1)
        printf("Vencedora: %s\n", nomecidade2);
    else
        printf("Empate!\n");
    break;

case 7:
    printf("Super Poder:\n");
    printf("%s: %.2f\n", nomecidade1, superpoder1);
    printf("%s: %.2f\n", nomecidade2, superpoder2);
    if (superpoder1 > superpoder2)
        printf("Vencedora: %s\n", nomecidade1);
    else if (superpoder2 > superpoder1)
        printf("Vencedora: %s\n", nomecidade2);
    else
        printf("Empate!\n");
    break;

default:
    printf("Opção inválida. Tente novamente\n");
}


    return 0;
}
