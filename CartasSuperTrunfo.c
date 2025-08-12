#include <stdio.h>

typedef struct {
    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Cidade;

int main(){
    Cidade cidades[32]; 
    char estados[] = "ABCDEFGH";
    int i, j, index = 0;
    
    printf("=== cadastro de cidades ===\n");

for(i = 0; i < 8; i++){
    for (j = 1; j <= 4; j++){
    sprintf(cidades[index].codigo, "%c%d", estados[i], j);
    printf("\nCadastro da cidade %s: \n", cidades[index].codigo);

    printf("População:");
    scanf("%d", &cidades[index].populacao);

    printf("Área (km²):");
    scanf("%f", &cidades[index].area);

    printf("PIB:");
    scanf("%f", &cidades[index].pib);

    printf("Pontos turísticos:");
    scanf("%d", &cidades[index].pontosTuristicos);

    index++;
    
    }
}
printf("\n===== CIDADES CADASTRADAS =====\n");
for (i = 0; i < 32; i++) {
    printf("\nCodigo: %s\n", cidades[i].codigo);
    printf("População: %d habitantes\n", cidades[i].populacao);
    printf("Área: %.2f km²\n", cidades[i].area);
    printf("PIB: %.2f bilhões\n", cidades[i].pib);
    printf("Pontos turísticcos: %d\n", cidades[i].pontosTuristicos);
  }

  return 0;
}