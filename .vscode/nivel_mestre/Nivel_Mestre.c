#include <stdio.h>

int main(){
    printf ("Desafio das Cartas!\n");
    int carta1 = 1;
    char estado1 = 'P';
    char codigo1[20] = "P01";
    char cidade1[20] = "Curitiba";
    int populacao1 = 1773718;
    float area1 = 435.277;
    float pib1 = 98.00;
    float pib3 = 98000000000;
    int pontosturisticos1 = 25;
    float densidadepopulacional1;
    float pibpercapita1;
    float superpoder1;

     printf("Carta: %d\n", carta1);
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.3fkm²\n", area1);
     printf("PIB: %.2fbilhoes de reais\n", pib1);
     printf("Pontos Turísticos: %d\n", pontosturisticos1);

     densidadepopulacional1 = populacao1 / area1;
     printf("Densidade Populacional: %.2fhab/km²\n", densidadepopulacional1);

     pibpercapita1 = pib3 / populacao1;
     printf("PIB Per Capita: %.2freais\n", pibpercapita1);

    superpoder1 =  populacao1+ area1 + pib3 + pibpercapita1 + (1 / densidadepopulacional1) + pontosturisticos1;
    printf("Super Poder: %.2f\n", superpoder1);
     
    
     int carta2 = 2;
     char estado2 = 'T';
     char codigo2[20] = "T02";
     char cidade2[20] = "Palmas";
     int populacao2 = 302692;
     float area2 = 2227.329;
     float pib2 = 9.40;
     float pib4 = 9400000000;
     int pontosturisticos2 = 21;
     float densidadepopulacional2;
     float pibpercapita2;
     float superpoder2;

    
    printf("Carta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3fkm²\n", area2);
    printf("PIB: %.2fbilhoes de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    densidadepopulacional2 = populacao2 / area2;
    printf("Densidade Populacional: %.2fhab/km²\n", densidadepopulacional2);

    pibpercapita2 = pib4 / populacao2;
    printf("PIB Per Capita: %.2freais\n", pibpercapita2);

    superpoder2 =  populacao2+ area2 + pib4 + pibpercapita2 + (1 / densidadepopulacional2) + pontosturisticos2;
    printf("Super Poder: %.2f\n", superpoder2);


    printf("  Comparação de Cartas!\n");
    printf("População 1 > População 2 : %d\n", populacao1 > populacao2);
    printf("Area 1 > Area 2 : %d\n", area1 > area2);
    printf("PIB 1 > PIB 2 : %d\n", pib1 > pib2);
    printf("Pontos Turisticos 1 > Pontos Turisticos 2 : %d\n", pontosturisticos1 > pontosturisticos2);
    printf("Densidade Populacional 1 > Densidade Polulacional 2: %d\n", densidadepopulacional1 > densidadepopulacional2);
    printf("PIB Per Capita 1 > PIB Per Capita 2 : %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder 1 > Super Poder 2 : %d\n", superpoder1 > superpoder2);
     

    return 0;
}