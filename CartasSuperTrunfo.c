#include<stdio.h>

int main(){

unsigned int  Populacao1, Populacao2, PontosT1, PontosT2;
float Area1, Area2, Pib1, Pib2, Densidade1, Densidade2; 
char Estado1[20] = "A01", Estado2[20] = "A02", NomeCidade1[20] = "Recife", NomeCidade2[20] = "Fortaleza";
//Declara o valor das Váriaveis para focar somente no Menu nesse código


Populacao1 = 3700000;
Area1 = 218435;
Pib1 = 135000000000;
Densidade1 = Populacao1 / Area1;
PontosT1 = 14;

Populacao2 = 2428678;
Area2 = 312353;
Pib2 = 73436128432;
Densidade2 = Populacao2 / Area2;
PontosT2 = 12;

//Menu
int opcao;
printf("Comparação de Atributos!!!\n");
printf("1. Nome da Cidade\n 2. Populção\n 3. Área\n 4. PIB\n");
printf("5. Pontos Turísticos\n 6. Densidade demográfica\n");
scanf("%d", &opcao);
switch (opcao)
{
case 1:
    printf("Carta 1: %s Cidade: %s \n", Estado1, NomeCidade1);
    printf("Carta 2: %s Cidade: %s", Estado2, NomeCidade2);
    break;
case 2: //Compara a População
    printf("\nCidade 1: %s Cidade 2: %s", NomeCidade1, NomeCidade2 );
    printf("\nPopulação");
    printf("Carta 1: %i Carta 2: %i\n", Populacao1, Populacao2);
    if(Populacao1>Populacao2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Populacao1 == Populacao2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
case 3: //Compara a Área
    printf("\nCidade 1: %s Cidade 2: %s \n", NomeCidade1,NomeCidade2 );
    printf("\nÁrea");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Area1, Area2);
    if(Area1>Area2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Area1 == Area2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
case 4: //Compara o PIB
    Pib1 = Pib1 / 1000000000;
    Pib2 = Pib2 / 1000000000;
    printf("\nCidade 1: %s Cidade 2: %s", NomeCidade1,NomeCidade2 );
    printf("\nPIB");
    printf("\nCarta 1: %.2f Bilhões Carta 2: %.2f Bilhões \n", Pib1, Pib2);
    if(Pib1>Pib2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Pib1 == Pib2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
case 5: //Compara os Pontos Turísticos
    printf("\nCidade 1: %s Cidade 2: %s", NomeCidade1,NomeCidade2 );
    printf("\nPontos Turísticos");
    printf("\nCarta 1: %i Carta 2: %i \n", PontosT1, PontosT2);
    if(PontosT1>PontosT2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(PontosT1 == PontosT2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;
case 6: //Compara a Densidade Demografica
    printf("\nCidade 1: %s Cidade 2: %s", NomeCidade1,NomeCidade2 );
    printf("\nDensidade Demográfica");
    printf("\nCarta 1: %.2f Carta 2: %.2f \n", Densidade1, Densidade2);
    if(Densidade1 < Densidade2){
        printf("%s Venceu!! ", NomeCidade1);
    }else if(Densidade1 == Densidade2){
        printf("Empate!!!");
    }else{
        printf("%s Venceu!! ", NomeCidade2);
    }
    break;       
default:
    printf("Opção Inválida");
    break;
}

