    #include <stdio.h>
    /*BELEZA!! int=Número inteiro; float=Para medida 
    de menor valor; double=É de medida mas para 
    valores ALTOS; char=Caracteres; void= Uma função não 
    retorna nenhum valor*/
    /*%d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número com ponto flutuante no formato padrão.
    %e: Imprime um número com vírgula/ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres*/
    int main(){
    int pontos,pontos2, populacao, populacao2;
    float area, area2;
    double pib, pib2;
    char estado[50];
    char codigo[5];
    char cidade[50];
    char estado2[50];
    char codigo2[5];
    char cidade2[50];

    printf("Insira abaixo as informacoes para cadastro das cartas: \n");
    printf("CARTA 1\n");

    printf("Estado: ");
    scanf(" %48[^\n]", estado);

    printf("Codigo: ");
    scanf("%4s", codigo);

    printf("Cidade: ");
    scanf(" %48[^\n]", cidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%lf", &pib);

    printf("Numero de pontos turísticos: ");
    scanf("%d", &pontos);

    printf("CARTA 2\n");

    printf("Estado: ");
    scanf(" %48[^\n]", estado2);

    printf("Codigo: ");
    scanf("%4s", codigo2);

    printf("Cidade: ");
    scanf(" %48[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%lf", &pib2);

    printf("Número de pontos turisticos: ");
    scanf("%d", &pontos2);
    printf("\n");

    float densidade = populacao /area;
    float densidade2 = populacao2 /area2;
    double capita = pib / (float) populacao;
    double capita2 = pib2 / (float) populacao2;

    printf("Suas cartas cadastradas sao:\n");
    printf("       CARTA 1\n");
    printf("    ESTADO: %s\n", estado);
    printf("    CÓDIGO: %s\n", codigo);
    printf("    CIDADE: %s\n", cidade);
    printf("    POPULAÇÃO: %d \n", populacao);
    printf("    ÁREA: %.2f Km2\n", area);
    printf("    PIB: %.2lf bilhões de reais\n", pib);
    printf("    NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos);
    printf("    DENSIDADE POPULACIONAL: %.2f hab/km2\n", densidade);
    printf("    PIB PER CAPITA: %.2lf reais\n",capita);

    printf("       CARTA 2\n");
    printf("    ESTADO:%s\n", estado2);
    printf("    CÓDIGO:%s\n", codigo2);
    printf("    CIDADE:%s\n", cidade2);
    printf("    POPULAÇÃO:%d\n", populacao2);
    printf("    ÁREA:%.2f Km2\n", area2);
    printf("    PIB:%.2lf bilhões de reais\n", pib2);
    printf("    NÚMERO DE PONTOS TURÍSTICOS: %d\n", pontos2);
    printf("    DENSIDADE POPULACIONAL: %.2f hab/km2\n", densidade2);
    printf("    PIB PER CAPITA: %.2lf reais\n", capita2);
    
float poder= populacao + area + pib + pontos + densidade + capita;
float poder2= populacao2 + area2 + pib2 + pontos2 + densidade2 + capita2;

    printf("    COMPARAÇÃO DAS CARTAS:\n");
    if(populacao>populacao2){
    printf("POPULACAO: Carta 1 vence\n"), populacao,populacao2;
    }
    else if (populacao2>populacao){
    printf("POPULACAO: Carta 2 vence\n"), populacao2,populacao;
    }
    if(area>area2){
    printf("AREA: Carta 1 vence\n"), area,area2;
   }
    else if (area2>area){
     printf("AREA: Carta 2 vence\n"), area2,area;
   }
      if(pib>pib2){
    printf("PIB: Carta 1 vence\n"), pib,pib2;
   }
   else if (pib2>pib){
     printf("PIB: Carta 2 vence\n"), pib2,pib;
   }
   if(pontos>pontos2){
    printf("PONTOS TURISTICOS: Carta 1 vence\n"), pontos,pontos2;
   }
   else if (pontos2>pontos){
    printf("PONTOS TURISTICOS: Carta 2 vence\n"), pontos2,pontos;
   }
   if(densidade>densidade2){
    printf("DENSIDADE POPULACIONAL: Carta 1 vence\n"), densidade,densidade2;
   }
   else if(densidade2>densidade){
    printf("DENSIDADE POPULACIONAL: Carta 2 vence\n"), densidade2,densidade;
   }
   if(capita>capita2){
    printf("PIB PER CAPITA: Carta 1 vence\n"), capita,capita2;
   }
   else if(capita2>capita){
    printf("PIB PER CAPITA: Carta 2 vence\n"), capita2,capita;
   }
   if(poder>poder2){
    printf("SUPER PODER: Carta 1 vence\n"), poder, poder2;
   }
   else if(poder2>poder){
    printf("SUPER PODER: Carta 2 vence\n"), poder2, poder;
   }

      
    }   