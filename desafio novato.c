#include <stdio.h>
 
 int main () {
 
 char nome[50], nome2[50];
 char codigo[4], codigo2[4];
 char cidade[50], cidade2[50];
 float populacao, populacao2;
 float area, area2;
 float pib, pib2;
 int turisticos, turisticos2;
 float densidade, densidade1, densidade2;
 float pibp, pibp1, pibp2;
float superpoder1, superpoder2;
float inverso, inverso1;


printf("Cadastre sua primeira carta\n");
 
 printf("Digite o nome do estado: \n");
 scanf("%s", &nome);
 
 printf("Código da cidade: \n");
 scanf("%s", &codigo);
 
 printf("Nome da cidade: \n");
 scanf("%s", &cidade);

 printf("População: \n");
 scanf("%f", &populacao);
 
 printf("PIB da cidade: \n");
 scanf("%f", &pib);
 
 printf("Área da cidade: \n");
 scanf("%f", &area);
 
 printf("Pontos turísticos da cidade: \n");
 scanf("%d", &turisticos);
 
densidade = populacao / area;
pibp = pib / populacao;
inverso = densidade / densidade;
superpoder1 = populacao + area + pib + turisticos + pibp1 + inverso;


 printf("\n");
 
 printf("Cadastre sua segunda carta\n");
 printf("Nome do estado: \n");
 scanf("%s", &nome2);
 
 printf("Código da cidade: \n");
 scanf("%s", &codigo2);
 
 printf("Nome da cidade: \n");
 scanf("%s", &cidade2);

 printf("População: \n");
 scanf("%f", &populacao2);
 
 printf("Área da cidade: \n");
 scanf("%f", &area2);
 
 printf("PIB da cidade: \n");
 scanf("%f", &pib2);
 
 printf("Pontos turísticos: \n");
 scanf("%d", &turisticos2);
//calculando a densidade, pib percapita e o super poder
 densidade1 = populacao2 / area2;
pibp1 = pib2 / populacao2;
inverso1 = densidade1 / densidade1;
superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pibp2 +  inverso1;

 printf("Cartas cadrastadas com sucesso! \n");
 printf("Aqui estão suas cartas:\n");
 printf("\n");
 
 printf("Carta 1\n");
 printf("Estado: %s \n", nome);
 printf("Código: %s \n", codigo);
 printf("Cidade: %s \n", cidade);
 printf("População: %f\n", populacao);
 printf("Área: %.2f (km²) \n", area);
 printf("PIB: %.2f \n", pib);
 printf("Pontos turísticos: %d\n", turisticos);
 printf("Densidade populacional: %f\n", densidade);
 printf("Pib percapita: %f\n", pibp);
 
 printf("\n");
 
 printf("Carta 2\n");
 printf("Estado: %s \n", nome2);
 printf("Código: %s \n", codigo2);
 printf("Cidade: %s \n", cidade2);
 printf("População: %.f\n", populacao2);
 printf("Área: %.2f (km²)\n", area2);
 printf("PIB: %.2f \n", pib2);
 printf("Pontos turísticos: %d \n", turisticos2);
 printf("Densidade populacional: %f \n", densidade1);
 printf("Pib percapita: %f \n", pibp1);
 
 printf("\n");
 // Aqui vamos comparar os atributos das cartas
printf("Comparação das Cartas (População)\n");

printf("Carta 1: %.2f \n", populacao);
printf("Carta 2: %.2f \n", populacao2);

if (populacao > populacao2) {
    printf("Carta 1 ganhou!\n");
} else {
    printf("Carta 2 ganhou!\n");
}
printf("\n");

printf("Comparação das Cartas (Area)\n");

printf("Carta 1: %.2f \n", area);
printf("Carta 2: %.2f \n", area2);

if (area > area2) {
    printf("Carta 1 ganhou!\n");
} else {
    printf("Carta 2 ganhou!\n");
}
printf("\n");
 return 0;
}