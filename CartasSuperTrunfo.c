#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Logo abaixo serão declaradas as variaveis necessarias para cadastro das duas cartas.
    
    int  populacao_1,populacao_2,npontoturistico_1,npontoturistico_2;  
    float pib_1,pib_2,area_1,area_2;
    char estado_1[50],estado_2[50];
    char nomecidade_1[50],nomecidade_2[50],cod_carta_1[50],cod_carta_2[50];

    // Abaixo será informado a mensagem de boas vindas e solicitação dos dados das cartas.
    
    printf("Olá bem vindo ao jogo Super Trunfo Países, logo abaixo cadastraremos as cartas! \n");

    // O bloco abaixo é para recebimento dos dados da carta 1.

    printf("As informações solicitadas a seguir são para o cadastrado da primeira carta \n");
    printf(" Por favor insira a letra que representara o Estado (de A até H): \n");
    scanf("%s", estado_1);
    printf(" Por favor insira a letra do estado com um número entre 01 a 04 para gerar o Codigo da Carta: \n");
    scanf("%s", cod_carta_1);
    printf(" Por favor insira o nome da Cidade: \n");
    scanf("%s", nomecidade_1);
    printf(" Por favor insira o número de habitantes: \n");
    scanf("%d", &populacao_1);
    printf(" Por favor insira a área da cidade em quilomêtros quadrados: \n");
    scanf("%f", &area_1);
    printf(" Por favor insira o Produto Interno Bruto (PIB): \n");
    scanf("%f", &pib_1);
    printf(" Por favor insira a quantidade de pontos turisticos: \n");
    scanf("%d", &npontoturistico_1);

    // O bloco abaixo é para recebimento dos dados da carta 2.

    printf("As informações solicitadas a seguir são para o cadastrado da segunda carta \n");
    printf(" Por favor insira a letra que representara o Estado (de A até H): \n");
    scanf("%s", estado_2);
    printf(" Por favor insira a letra do estado com um número entre 01 a 04 para gerar o Codigo da Carta: \n");
    scanf("%s", cod_carta_2);
    printf(" Por favor insira o nome da Cidade: \n");
    scanf("%s", nomecidade_2);
    printf(" Por favor insira o número de habitantes: \n");
    scanf("%d", &populacao_2);
    printf(" Por favor insira a área da cidade em quilomêtros quadrados: \n");
    scanf("%f", &area_2);
    printf(" Por favor insira o Produto Interno Bruto (PIB): \n");
    scanf("%f", &pib_2);
    printf(" Por favor insira a quantidade de pontos turisticos: \n");
    scanf("%d", &npontoturistico_2);

    //A seguir o bloco abaixo irá informar os dados da carta 1.

    printf("Carta 1 \n");
    printf("Estado: %s \n", estado_1);
    printf("Código: %s \n", cod_carta_1);
    printf("Nome da Cidade: %s \n", nomecidade_1);
    printf("População: %d \n", populacao_1);
    printf("Área: %f \n", area_1);
    printf("PIB: %f \n", pib_1);
    printf("Número de pontos turísticos: %d \n", npontoturistico_1);

    //A seguir o bloco abaixo irá informar os dados da carta 2.

    printf("Carta 2 \n");
    printf("Estado: %s \n", estado_2);
    printf("Código: %s \n", cod_carta_2);
    printf("Nome da Cidade: %s \n", nomecidade_2);
    printf("População: %d \n", populacao_2);
    printf("Área: %f \n", area_2);
    printf("PIB: %f \n", pib_2);
    printf("Número de pontos turísticos: %d \n", npontoturistico_2);

    
    return 0;
}
