#include <stdio.h>

//Nível Básico

int main() {
    char Estado, Estado2;
    char Codigo[6], Codigo2[6], Cidade[50], Cidade2[50];
    int Populacao, NumTuristicos, Populacao2, NumTuristicos2;
    float Area, Area2, PIB, PIB2;

    printf("Primeira carta 1: \n");
    printf("Digite o Estado (EX: A ou B): \n");
    scanf(" %c", &Estado);
    getchar();

    printf("Digite o Código (EX: A01): \n");
    fgets(Codigo, 6, stdin);

    printf("Digite a Cidade: \n");
    fgets(Cidade, 50, stdin);

    printf("Digite a População (EX: 673000): \n");
    scanf("%d", &Populacao);

    printf("Digite a Área em km² (EX: 1200.25): \n");
    scanf("%f", &Area);

    printf("Digite o PIB (EX: 300.50): \n");
    scanf("%f", &PIB);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &NumTuristicos);
    getchar(); 

    printf("\nSegunda carta 0: \n");
    printf("Digite o Estado da segunda carta (EX: A ou B): \n");
    scanf(" %c", &Estado2);
    getchar(); 

    printf("Digite o Código da segunda carta (EX: A01): \n");
    fgets(Codigo2, 6, stdin); 

    printf("Digite a Cidade da segunda carta: \n");
    fgets(Cidade2, 50, stdin);

    printf("Digite a População da segunda carta (EX: 673000): \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área em km² da segunda carta (EX: 1200.25): \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da segunda carta (EX: 300.50): \n");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos da segunda carta: \n");
    scanf("%d", &NumTuristicos2);

    printf("\nPrimeira Carta:\n");
    printf("Estado: %c\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: R$ %.2f bilhões\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", NumTuristicos);

    printf("\nSegunda Carta:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumTuristicos2);

    //Nível Aventureiro

    printf("\n");

    float DP1 = (Populacao / Area);
    float PIB_per_capital1 = PIB / Populacao;

    float DP2 = Populacao2 / Area2;
    float PIB_per_capital2 = PIB2 / Populacao2;

    printf("A densidade populacional é de: %f \n", DP1);

    printf("O PIB per capital é de: %f \n", PIB_per_capital1);
    
    printf("A densidade populacional é de: %f \n", DP2);

    printf("O PIB per capita é de: %f \n", PIB_per_capital2);

    //Nível Mestre

    float super_poder = (float) Populacao + Area + PIB + DP1 + PIB_per_capital1 + NumTuristicos;
    float super_poder1 = (float) Populacao2 + Area2 + PIB2 + DP2 + PIB_per_capital2 + NumTuristicos2;
    
    printf("\n");
    
    int Resultado_Popu = (Populacao > Populacao2);
    int Resultado_Area = (Area > Area2);
    int Resultado_PIB = (PIB > PIB2);
    int Resultado_DP = (DP1 < DP2);
    int Resultado_PIB_per = (PIB_per_capital1 > PIB_per_capital2);
    int Resultado_Num = (NumTuristicos > NumTuristicos2);
    printf("Se 0 segunda carta ganha, se 1 primeira ganha \n");
    printf("População: %d \n", Resultado_Popu);
    printf("Àrea: %d \n", Resultado_Area);
    printf("PIB: %d \n", Resultado_PIB);
    printf("densidade populacional: %d \n", Resultado_DP);
    printf("PIB per capita: %d \n",  Resultado_PIB_per);
    printf("Número de Pontos Turísticos: %d \n", Resultado_Num);

    printf("Número super poder da primeira:%f \n", super_poder);
    printf("Número super poder da primeira:%f \n", super_poder1);

    int Resultado_poder = super_poder > super_poder1;
    printf("Se 0 segunda carta ganha, se 1 primeira ganha \n");
    printf("super poder vencedor:%d \n", Resultado_poder);
    
    return 0;
}

*/A
A01
São paulo
123
123
123
12
B
B01
São paulo
1234
1234
1234
123
/*
