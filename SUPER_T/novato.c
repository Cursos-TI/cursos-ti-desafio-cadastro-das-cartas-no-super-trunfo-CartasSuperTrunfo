#include <stdio.h>
int main() {
    char estado [1];
    char codigo[3];
    char cidade[10];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float renda_per_capita = pib/pupulacao;;
    float area_per_capita = area/populacao;
    printf("Digite a letra que representa o estado: ");
    scanf("%s", &estado);
    printf("Digite o codigo do estado: ");
    scanf("%s", &codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Renda Per Capita: %f\n", renda_per_capita);
    printf("Área Per Capita: %f\n", area_per_capita);
    return 0;
    

}