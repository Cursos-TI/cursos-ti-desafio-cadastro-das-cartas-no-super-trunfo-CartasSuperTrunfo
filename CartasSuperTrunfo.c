#include <stdio.h>

int main(){
    printf ("Desafio das Cartas!\n");
    int carta1 = 1;
    char estado1 = 'P';
    char codigo1[20] = "P01";
    char cidade1[20] = "Curitiba";
    int populacao1 = 1773718;
    float area1 = 435.277;
    float pib1 = 98;
    int pontosturisticos1 = 25;

     printf("Carta: %d\n", carta1);
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.3fkm²\n", area1);
     printf("PIB: %.1fbilhoes\n", pib1);
     printf("Pontos Turísticos: %d\n", pontosturisticos1);

     int carta2 = 2;
     char estado2 = 'T';
     char codigo2[20] = "T02";
     char cidade2[20] = "Palmas";
     int populacao2 = 302692;
     float area2 = 2227.329;
     float pib2 = 9.4;
     int pontosturisticos2 = 21;

    printf("Carta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3fkm²\n", area2);
    printf("PIB: %.1fbilhoes\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;

}