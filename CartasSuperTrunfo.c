#include <stdio.h>

int main() {
    //CORPO DAS CARTAS 1 E 2
    char estado[1];
    char codigoCarta[3];
    char nomeCidade[20];
    unsigned long int populacao;
    int pontosTuristicos;
    float pib, areaCidade, pibPerCapta, densidadePop;
    float superPoder = populacao + pontosTuristicos + pib + areaCidade + pibPerCapta + densidadePop;

    char estado2[1];
    char codigoCarta2[3];
    char nomeCidade2[20];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float pib2, areaCidade2, pibPerCapta2, densidadePop2;
    float superPoder2 = populacao2 + pontosTuristicos2 + pib2 + areaCidade2 + pibPerCapta2 + densidadePop2;

    //BLOCO DE CRIAÇÃO DA CARTA 1
    printf("Digite o estado de sua carta, escolha entre 'A' ate 'H'\n");
    scanf(" %c", &estado);
    printf("Digite o codigo da sua carta: (Estado + 2 Digitos)\nEx: 'A01'\n");
    scanf(" %s", &codigoCarta);
    printf("Digite o nome da cidade de sua carta:\n");
    scanf(" %[^\n]", nomeCidade);
    printf("Digite a populacao total de sua cidade:\n");
    scanf(" %i", &populacao);
    printf("Digite a quantidade de pontos turisticos de sua cidade:\n");
    scanf(" %i", &pontosTuristicos);
    printf("Digite o PIB total de sua cidade (Em Milhoes, use '.' para virgula):\n");
    scanf(" %f", &pib);
    printf("Digite a area total de sua cidade:\n ");
    scanf(" %f", &areaCidade);
    pibPerCapta = pib / populacao;
    densidadePop = populacao / areaCidade;

    //BLOCO DE SEPARAÇÃO PARA CRIAÇÃO DAS CARTAS
    printf("\n");
    printf("Vamos adicionar outra carta!\n\n");

    //BLOCO DE CRIAÇÃO DA CARTA 2
    printf("Digite o estado de sua carta, escolha entre 'A' ate 'H'\n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da sua carta: (Estado + 2 Digitos)\nEx: 'A01'\n");
    scanf(" %s", &codigoCarta2);
    printf("Digite o nome da cidade de sua carta\n");
    scanf(" %[^\n]", &nomeCidade2);
    printf("Digite a populacao total de sua cidade:\n");
    scanf(" %i", &populacao2);
    printf("Digite a quantidade de pontos turisticos de sua cidade:\n");
    scanf(" %i", &pontosTuristicos2);
    printf("Digite o PIB total de sua cidade (Em milhoes, use '.' para virgula):\n");
    scanf(" %f", &pib2);
    printf("Digite a area total de sua cidade:\n");
    scanf(" %f", &areaCidade2);
    pibPerCapta2 = pib2 / populacao2;
    densidadePop2 = populacao2 / areaCidade2;

    //BLOCO DE SEPARAÇÃO PARA COMEÇAR AS APRESENTAÇÕES
    printf("\n\n");
    printf("Estas foram as cartas que voce adicionou!\n\n");

    //APRESETAÇÃO DA CARTA 1
    printf("CARTA 1:\n ");
    printf("Estado: %s \n ", estado);
    printf("Codigo: %s \n ", codigoCarta);
    printf("Nome da Cidade: %s \n ", nomeCidade);
    printf("Populacao: %i \n ", populacao);
    printf("Area: %4.2f KM \n ", areaCidade);
    printf("PIB: R$ %3.2f MI \n ", pib);
    printf("Numero de pontos turisticos: %i \n ", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km2\n ", densidadePop);
    printf("PIB per Capita: %.2f R$\n ", pibPerCapta);

    //BLOCO DE SEPARAÇÃO ENTRE APRESENTAÇÕES DAS CARTAS
    printf("\n");
    printf("Sua segunda carta:\n\n");

    //APRESETAÇÃO DA CARTA 2
    printf("CARTA 2:\n ");
    printf("Estado: %s \n ", estado2);
    printf("Codigo: %s \n ", codigoCarta2);
    printf("Nome da Cidade: %s \n ", nomeCidade2);
    printf("Populacao: %i \n ", populacao2);
    printf("Area: %4.2f KM \n ", areaCidade2);
    printf("PIB: R$ %3.2f MI \n ", pib2);
    printf("Numero de pontos turisticos: %i \n ", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n ", densidadePop2);
    printf("PIB per Capita: %.2f R$\n ", pibPerCapta2);

    //BLOCO DE SEPARAÇÃO PARA ANUNCIAR GANHADOR
    printf("\n");
    printf("COMPARACAO DAS CARTAS:\n\n ");
    
    //COMPARAÇÃO DAS CARTAS
    printf("Populacao: carta 1 venceu? %i \n ", populacao > populacao2);
    printf("Area: carta 1 venceu? %i \n ", areaCidade > areaCidade2);
    printf("PIB: carta 1 venceu? R$ %i \n ", pib > pib2);
    printf("Numero de pontos turisticos: carta 1 venceu? %i \n ", pontosTuristicos > pontosTuristicos2);
    printf("Densidade populacional: carta 1 venceu? %i \n ", densidadePop < densidadePop2);
    printf("PIB per Capita: carta 1 venceu? %i \n ", pibPerCapta > pibPerCapta2);
    printf("Super Poder: carta 1 venceu? %i \n ", superPoder > superPoder2);

    printf("\n");

    return 0;
}
