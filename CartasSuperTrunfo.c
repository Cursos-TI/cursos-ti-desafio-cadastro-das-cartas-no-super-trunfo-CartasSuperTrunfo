#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	// Declaração de variaveis
	char estado_1, estado_2;
    char codigo_1[10], codigo_2[10];
    char nome_cidade_1[20], nome_cidade_2[20];
    unsigned long int populacao_1, populacao_2; 
    float area_km_1, area_km_2;
    float PIB_1, PIB_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    float densi_Pop1, densi_Pop2;
    float PIB_perCap1, PIB_perCap2;
    float SuperPoder1, SuperPoder2;
    int escolha;
    
    printf("Jogo super trunfo! \n");

    // CARTA 1
    printf("Digite os dados da primeira carta: \n");
   /* printf("Digite o estado da carta de A a H: \n");
    scanf(" %c", &estado_1);

    printf("Digite o codigo da carta (estado + numero de 01 a 04): \n");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade_1); */

    printf("Digite a populacao da cidade: \n");
    scanf("%lu", &populacao_1);

    printf("Digite a area (em km quadrado) da cidade: \n");
    scanf("%f", &area_km_1);

    printf("Digite PIB da cidade: \n");
    scanf("%f", &PIB_1);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos_1);
    
    densi_Pop1 = populacao_1 / area_km_1;
    PIB_perCap1 = PIB_1 / populacao_1;
    SuperPoder1 = populacao_1 + area_km_1 + PIB_1 + pontos_turisticos_1 + PIB_perCap1 + (1 / densi_Pop1);
    
    

    printf("\n ____________________________________________________ \n");

    // CARTA 2
    printf("Digite os dados da segunda carta: \n");
   /* printf("Digite o estado da carta de A a H: \n");
    scanf(" %c", &estado_2);

    printf("Digite o codigo da carta (estado + numero de 01 a 04): \n");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade_2); */

    printf("Digite a populacao da cidade: \n");
    scanf("%lu", &populacao_2);

    printf("Digite a area (em km quadrado) da cidade: \n");
    scanf("%f", &area_km_2);

    printf("Digite PIB da cidade: \n");
    scanf("%f", &PIB_2);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos_2);
    
    densi_Pop2 = populacao_2 / area_km_2;
    PIB_perCap2 = PIB_2 / populacao_2;
    SuperPoder2 = populacao_2 + area_km_2 + PIB_2 + pontos_turisticos_2 + PIB_perCap2 + (1 / densi_Pop2);
    
     // EXIBIÇÃO DAS CARTAS
    printf(" \n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
    printf("Carta 1 \n");
    printf("Estado: %c \n", estado_1);
    printf("Codigo da cidade: %s \n", codigo_1);
    printf("Nome da cidade: %s \n", nome_cidade_1);
    printf("Populacao da cidade: %lu \n", populacao_1);
    printf("Area em km quadrado da cidade: %.3f \n", area_km_1);
    printf("PIB da cidade: %.4f \n", PIB_1);
    printf("Pontos turisticos da cidade: %d \n", pontos_turisticos_1);
    printf("Densidade Populacional da cidade: %.2f hab/km quadrados \n", densi_Pop1);
    printf("PIB per Capita da cidade: %.2f reais \n", PIB_perCap1);
    printf("Super Poder: %.2f \n", SuperPoder1);
  
    printf(" \n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ \n");
    printf("Carta 2 \n");
    printf("Estado: %c \n", estado_2);
    printf("Codigo da cidade: %s \n", codigo_2);
    printf("Nome da cidade: %s \n", nome_cidade_2);
    printf("Populacao da cidade: %lu \n", populacao_2);
    printf("Area em km quadrado da cidade: %.3f \n", area_km_2);
    printf("PIB da cidade: %.4f \n", PIB_2);
    printf("Pontos turisticos da cidade: %d \n", pontos_turisticos_2);
    printf("Densidade Populacional da cidade: %.2f hab/km quadrados \n", densi_Pop2);
    printf("PIB per Capita da cidade: %.2f reais \n", PIB_perCap2);
    printf("Super Poder: %.2f \n", SuperPoder2);
    
    // comparação
    printf("\n");
    
    printf("\nPopulacao: ");
    escolha = populacao_1 > populacao_2 ? 1 : 0 ;
    if(escolha == 1){
    	printf("Carta 1 venceu (%d)",escolha);
	}else{
		printf("Carta 2 venceu (%d)",escolha);
	}
    
    printf("\nArea: ");
    escolha = area_km_1 > area_km_2 ? 1 : 0;
    if(escolha == 1){
    	printf("Carta 1 venceu (%d)",escolha);
	}else{
		printf("Carta 2 venceu (%d)",escolha);
	}
	
	printf("\nPIB: ");
	escolha = PIB_1 > PIB_2 ? 1 : 0;
	 if(escolha == 1){
    	printf("Carta 1 venceu (%d)",escolha);
	}else{
		printf("Carta 2 venceu (%d)",escolha);
	}
	
	printf("\nPontos turisticos: ");
	escolha = pontos_turisticos_1 > pontos_turisticos_2 ? 1 : 0;
	if(escolha == 1){
    	printf("Carta 1 venceu (%d)",escolha);
	}else{
		printf("Carta 2 venceu (%d)",escolha);
	}
	
	printf("\nDensidade populacional: ");
	escolha = densi_Pop1 < densi_Pop2 ? 1 : 0;
	if(escolha == 1){
    	printf("Carta 1 venceu (%d)",escolha);
	}else{
		printf("Carta 2 venceu (%d)",escolha);
	}
	
	printf("\nPIB per capita: ");
	escolha = PIB_perCap1 > PIB_perCap2 ? 1 : 0;
	if(escolha == 1){
    	printf("Carta 1 venceu (%d)",escolha);
	}else{
		printf("Carta 2 venceu (%d)",escolha);
	}
	
	printf("\nSuper Poder: ");
	escolha = SuperPoder1 > SuperPoder2 ? 1 : 0;
	if(escolha == 1){
    	printf("Carta 1 venceu (%d)",escolha);
	}else{
		printf("Carta 2 venceu (%d)",escolha);
	}
   
	return 0;
	
}
