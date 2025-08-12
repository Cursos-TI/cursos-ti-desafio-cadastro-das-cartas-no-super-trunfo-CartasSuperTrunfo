#include <stdio.h>

 
// Função genérica para entrada de dados
int main() // Entrada de todas as cartas
{  int NPT1, populacao1, NPT, populacao, areapKM1, areapKM;
char cod1[20], cod2[20];
   float  pib1,  pib;
   char cidade1[20], cidade2[20];
 char estado1[20], estado2[20];


printf("Bem-Vinde ao Super Trunfo\n Vamos cadastrar as cartas dos participantes ^-^ \n LEMBRE DE USAR _ COMO ESPAÇO* \n ~Primeiro Jogador~\n");
printf("Qual o Código da carta? \n");
scanf("%s", &cod1);
printf("Qual estado você prefere: \n");
scanf("%s[^\n]", &estado1);
printf("Qual cidade você prefere: \n");
scanf("%s[^\n]", &cidade1);
printf("Quantos pontos turisticos sua cidade tem: \n");
scanf("%d", &NPT);
printf("Qual a População da sua cidade: \n");
scanf("%d", &populacao);
printf("Qual o tamanho em km² da sua cidade: \n");
scanf("%d", &areapKM);
printf("Qual o PIB da sua cidade: \n");
scanf("%f", &pib);
//Leitura da densidade populacional e pib per capt da primeira carat
float densidadePop1 = (float) populacao / (float) areapKM; 
float PPC1 = (float) populacao / (float) pib;
//inf da carta cadastrada
printf("Vamos verificar se você informou tudo certinho?\n");
printf("Código da Carta: %s\n", &cod1);
printf("Seu Estado é: %s \n", &estado1);
printf("Sua Cidade é: %s \n", &cidade1);
printf("A cidade de %s tem %d pontos turisticos\n", cidade1, NPT);
printf("O tamanho de %s é: %dkm²\n", cidade1, areapKM);
printf("Sua população é: %d habitantes\n", populacao);
printf("E o seu PIB é: %.2f \n", pib);
printf("A densidade populacional de %s é %.2f\n", &cidade1, densidadePop1);
printf("E o PIB per Capita é: %.2f \n \n", PPC1);
// Final do cadastro da primeira carta e começo da segunda

printf("~Agora é a vez do segundo jogador~\n\n"); 
printf("Qual o Código da carta? \n");
 scanf("%s[^\n]", &cod2);
printf("Qual estado você prefere: \n");
scanf("%s[^\n]", &estado2);
printf("Qual cidade você prefere: \n");
scanf("%s[^\n]", &cidade2);
printf("Quantos pontos turisticos sua cidade tem: \n");
scanf("%d", &NPT1);
printf("Qual a População da sua cidade: \n");
scanf("%d", &populacao1);
printf("Qual o tamanho em km² da sua cidade: \n");
scanf("%d", &areapKM1);
printf("Qual o PIB da sua cidade: \n");
scanf("%f", &pib1);
//Leitura da densidade populacional e pib per capt da segunda carat
float PPC2 = (float) populacao1 / (float) pib1;
float densidadePop2 = (float) populacao1 / (float) areapKM1; 
//inf da carta cadastrada
printf("Vamos verificar se você informou tudo certinnho?\n");
printf("Código da Carta: %s\n", &cod2);
printf("Seu Estado é: %s \n", &estado2);
printf("Sua Cidade é: %s \n", &cidade2);
printf("A cidade de %s tem %d pontos turisticos\n", cidade2, NPT1);
printf("O tamanho de %s é: %dkm²\n", cidade2, areapKM1);
printf("Sua população é: %d habitantes\n", populacao1);
printf("E o seu PIB é: %.2f \n", pib1);
printf("A densidade populacional de %s é %.2f por km²\n", &cidade2, densidadePop2);
printf("E o PIB per Capita é: %.2f \n \n", PPC2);
// final do cadastro do segundo jogador


 // Calculo da força das cartas

 int super_poder1 = (float)(NPT + areapKM + populacao + pib + PPC1 + densidadePop1) / 6;
int super_poder2 = (float)(NPT1 + areapKM1 + populacao1 + pib1 + PPC2 + densidadePop2) / 6;

 

 // ixibição de quem ganhou
printf("Vamos para o Duelo!\n");

printf("Quem tem a maior cidade? \n");
    if (areapKM > areapKM1) {
        printf("A cidade de %s é gigante!\n\n", &cidade1);
    } else if (areapKM < areapKM1) { 
        printf("A cidade de %s é a maior!\n\n", &cidade2);
    } else if (areapKM = areapKM1) {
        printf("Nossa, tem o mesmo tamanho é um EMPATE!!! \n\n");
    }
printf("Qual cidade tem mais pontos turisticos? \n");
    if (NPT > NPT1) {
        printf("A cidade de %s tem mais!\n\n",&cidade1);
    } else if (NPT < NPT1) { 
        printf("A cidade de %s tem mais!\n\n", &cidade2);
    } else if (NPT = NPT1) {
        printf("Nossa, tem a mesma quantidade é um EMPATE!!! \n\n");
    }
printf("Qual cidade tem a maior população? \n");
    if (populacao > populacao1) {
        printf("A cidade de %s tem mais habitantes!\n\n",&cidade1);
    } else if (populacao < populacao1) { 
        printf("A cidade de %s tem muita gente!\n\n", &cidade2);
    } else if (populacao = populacao1) {
        printf("Inacreditavel, é um EMPATE!!!  \n\n");
    }
printf("Qual cidade tem o melhor PIB? \n");
    if (pib > pib1) {
        printf("A cidade de %s tem um ótimo PIB. \n\n",&cidade1);
    } else if (pib < pib1) { 
        printf("A cidade de %s tem uma ótima atividade econômica.\n\n", &cidade2);
    } else if (pib = pib1) {
        printf("As duas cidades tem a mesma atividade econômica! \n\n");
    }    
printf("Qual cidade tem a melhor distribuição populacional? \n");
    if (densidadePop1 < densidadePop2) {
        printf("A cidade de %s \n\n",&cidade1);
    } else if (densidadePop1 > densidadePop2) { 
        printf("A cidade de %s \n\n", &cidade2);
    } else if (densidadePop1 = densidadePop2) {
        printf("As duas cidades tem a mesma densidade populacional! \n\n");
    }   
printf("Qual cidade tem o melhor rendimento per capita?\n");
    if (PPC1 > PPC2) {
        printf("A cidade de %s tem a melhor renda per capita \n\n",&cidade1);
    } else if (PPC1 < PPC2) { 
        printf("A cidade de %s tem o melhor indice per capita\n\n", &cidade2);
    } else if (PPC1 = PPC2) {
        printf("Ambas são ótimas cidades para viver! \n\n");
    } 
printf("Qual a melhor cidade para viver?\n");
    if (super_poder1 > super_poder2) {
        printf("A cidade de %s é a melhor opção! \n\n",&cidade1);
    } else if (super_poder1 < super_poder2) { 
        printf("A cidade de %s é bem melhor!\n\n", &cidade2);
    } else if (super_poder1 = super_poder2) {
        printf("Ambas são ótimas cidades para viver! \n\n");
    } 
printf("Obrigada por jogar! \nTe espero na próxima batalha!\n");
    return 0;
}
