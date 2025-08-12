#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()  {
    char estado, estado2;
    char codigoCarta[10], codigoCarta2[10];
    char nomeCidade[15], nomeCidade2[15];
    unsigned long int populacao, populacao2;
    float areaKm2, areaKm2_2, PIB, PIB2, densidadePopulacional, densidadePopulacional2, pibPerCapita, pibPerCapita2, superPoder, superPoder2;
    int qtdPontosTuristicos, qtdPontosTuristicos2, opcao;
    char codigoCartaformatado1[30], codigoCartaformatado2[30];

    printf("\nBem vindo ao super trunfo paises\n");
    printf("\nCadastre duas cartas com os valores pedidos\n");

    printf("\n==============================\n");
    printf("Comece digitando uma letra de A - H que representara um Estado: \n");
    scanf(" %c", &estado);

    printf("Agora um numero de 01 - 04 para identificarmos a carta (Nesse formato especifico 01 - 02): \n");
    scanf("%9s", codigoCarta);

    printf("Digite um nome de uma cidade desse estado: \n");
    scanf("%14s", nomeCidade);

    printf("Digite a populacao total dessa cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a area em kilometros quadrados dessa cidade: \n");
    scanf("%f", &areaKm2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos nessa cidade: \n");
    scanf("%d", &qtdPontosTuristicos);

    printf("\n==============================\n");
    printf("\nAgora vamos cadastrar a segunda cidade:\n");

    printf("Comece digitando uma letra de A - H que representara um Estado: \n");
    scanf(" %c", &estado2);

    printf("Agora um numero de 01 - 04 para identificarmos a carta (Nao repita o numero da carta anterior!): \n");
    scanf("%9s", codigoCarta2);

    printf("Digite um nome de uma cidade desse estado: \n");
    scanf("%14s", nomeCidade2);

    printf("Digite a populacao total dessa cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em kilometros quadrados dessa cidade: \n");
    scanf("%f", &areaKm2_2);

    printf("Digite o pib da cidade: \n");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos nessa cidade: \n");
    scanf("%d", &qtdPontosTuristicos2);

    //calculo de densidade populacional
    densidadePopulacional = populacao / areaKm2;
    densidadePopulacional2 = populacao2 / areaKm2_2;

    //calculo de PIB per capita
    pibPerCapita = PIB / populacao;
    pibPerCapita2 = PIB2 / populacao2;

    //calculo de super poder
    superPoder = (long double) areaKm2 + PIB + densidadePopulacional + pibPerCapita + (long double) qtdPontosTuristicos;
    superPoder2 = (long double) areaKm2_2 + PIB2 + densidadePopulacional2 + pibPerCapita2 + (long double) qtdPontosTuristicos2;


    printf("\n==============================\n");
    printf("\nCartas cadastradas\n");
    printf("Carta 1\n");
    estado = toupper(estado);
    printf("Estado: %c\n", estado);
    sprintf(codigoCartaformatado1, "%c%s", estado, codigoCarta);
    printf("Codigo: %s\n", codigoCartaformatado1);
    printf("Nome da cidade: %s\n", nomeCidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %2f kilometros quadrados\n", areaKm2);
    printf("PIB: %2f reais\n", PIB);
    printf("Numero de pontos turisticos: %d\n", qtdPontosTuristicos);
    printf("Densidade populacional: %2f hab/kilometros quadrados\n", densidadePopulacional);
    printf("PIB per capita: %2f reais", pibPerCapita);

    printf("\n==============================\n");
    printf("Carta 2\n");
    estado2 = toupper(estado2);
    printf("Estado: %c\n", estado2);
    sprintf(codigoCartaformatado2, "%c%s", estado2, codigoCarta2);
    printf("Codigo: %s\n", codigoCartaformatado2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %2f kilometros quadrados\n", areaKm2_2);
    printf("PIB: %2f reais\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", qtdPontosTuristicos2);
    printf("Densidade populacional: %2f hab/kilometros quadrados\n", densidadePopulacional2);
    printf("PIB per capita: %2f reais", pibPerCapita2);

    // Comparando cartas por um único atributo

    printf("\n==============================\n");
    printf("Carta vencedora com base no atributo PIB per capta:\n");
    printf("Carta 1 - %s: %2f\n", nomeCidade, PIB);
    printf("Carta 2: %s: %2f\n", nomeCidade2, PIB2);
    if (PIB > PIB2)
    {
        printf("Resultado: carta 1 (%s) venceu!\n", nomeCidade);
    }
    else if (PIB2 > PIB)
    {
        printf("Resultado: carta 2 (%s) venceu!\n", nomeCidade2);
    }

    // Desafio nível intermediário

    printf("\n==============================\n");
    printf("Escolha um atributo para ser comparado entre as cartas:\n");
    printf("Opcao 1: Nome das cidades\nOpcao 2: Populacao\nOpcao 3: Area em kilometros quadrados\nOpcao 4: PIB\
        \nOpcao 5: Numero de pontos tiristicos\nOpcao 6: Densidade demografica\nOu digite N para ir para a comparacao total das cartas.\n"
    );
    scanf("%d", &opcao);
    
    switch (opcao)
    {
        case 1:
            printf("\n=======COMPARANDO POR NOME========\n");
            printf("Nome da cidade carta 1: %s\n", nomeCidade);
            printf("Nome da cidade carta 2: %s", nomeCidade2);
            break;

        case 2:
            printf("\n=======COMPARANDO POR POPULACAO========\n");
            printf("Carta 1\n");
            printf("Cidade: %s\n", nomeCidade);
            printf("Populacao: %d\n", populacao);
            printf("\n");
            printf("Carta 2\n");
            printf("Cidade: %s\n", nomeCidade2);
            printf("Populacao: %d\n", populacao2);
            printf("\n");

            printf("Carta vencedora: \n");
            if (populacao > populacao2)
            {
                printf("Carta 1 venceu!");
            }
            else if (populacao2 > populacao)
            {
                printf("Carta 2 venceu!");
            }
            else 
            {
                printf("As cartas empataram!");
            }
            break;

        case 3:
            printf("\n=======COMPARANDO POR AREA========\n");
            printf("Carta 1\n");
            printf("Cidade: %s\n", nomeCidade);
            printf("Area: %2f\n", areaKm2);
            printf("\n");
            printf("Carta 2\n");
            printf("Cidade: %s\n", nomeCidade2);
            printf("Area: %2f\n", areaKm2_2);
            printf("\n");

            printf("Carta vencedora: \n");
            if (areaKm2 >areaKm2_2)
            {
                printf("Carta 1 venceu!");
            }
            else if (areaKm2_2 > areaKm2)
            {
                printf("Carta 2 venceu!");
            }
            else 
            {
                printf("As cartas empataram!");
            }
            break;
        
        case 4:
            printf("\n=======COMPARANDO POR PIB========\n");
            printf("Carta 1\n");
            printf("Cidade: %s\n", nomeCidade);
            printf("PIB: %2f\n", PIB);
            printf("\n");
            printf("Carta 2\n");
            printf("Cidade: %s\n", nomeCidade2);
            printf("PIB: %2f\n", PIB2);
            printf("\n");

            printf("Carta vencedora: \n");
            if (PIB > PIB2)
            {
                printf("Carta 1 venceu!");
            }
            else if (PIB2 > PIB)
            {
                printf("Carta 2 venceu!");
            }
            else 
            {
                printf("As cartas empataram!");
            }
            break;

        case 5:
            printf("\n=======COMPARANDO POR PONTOS TURISTICOS========\n");
            printf("Carta 1\n");
            printf("Cidade: %s\n", nomeCidade);
            printf("Pontos turisticos: %d\n", qtdPontosTuristicos);
            printf("\n");
            printf("Carta 2\n");
            printf("Cidade: %s\n", nomeCidade2);
            printf("Pontos Turisticos: %d\n", qtdPontosTuristicos2);
            printf("\n");

            printf("Carta vencedora: \n");
            if (qtdPontosTuristicos > qtdPontosTuristicos2)
            {
                printf("Carta 1 venceu!");
            }
            else if (qtdPontosTuristicos2 > qtdPontosTuristicos)
            {
                printf("Carta 2 venceu!");
            }
            else 
            {
                printf("As cartas empataram!");
            }
            break;

        case 6:
            printf("\n=======COMPARANDO POR DENSIDADE POPULACIONAL========\n");
            printf("Carta 1\n");
            printf("Cidade: %s\n", nomeCidade);
            printf("Populacao: %2f\n", densidadePopulacional);
            printf("\n");
            printf("Carta 2\n");
            printf("Cidade: %s\n", nomeCidade2);
            printf("densidadePopulacional: %2f\n", densidadePopulacional2);
            printf("\n");

            printf("Carta vencedora: \n");
            if (densidadePopulacional < densidadePopulacional2)
            {
                printf("Carta 1 venceu!");
            }
            else if (densidadePopulacional2 < densidadePopulacional)
            {
                printf("Carta 2 venceu!");
            }
            else 
            {
                printf("As cartas empataram!");
            }
            break;
        
        default:
            break;
    }
    

    printf("\n=======COMPARANDO POR TODOS OS ATRIBUTOS========\n");
    printf("Comparacao das cartas: \n");
    printf("Area: Carta %d venceu (%d)\n", (populacao > populacao2) ? 1 : 2, (populacao > populacao2) ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (areaKm2 > areaKm2_2) ? 1 : 2, (areaKm2 > areaKm2_2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (PIB > PIB2) ? 1 : 2, (PIB > PIB2) ? 1 : 0);
    printf("Numero de pontos turisticos: Carta %d venceu (%d)\n", (qtdPontosTuristicos > qtdPontosTuristicos2) ? 1 : 2, (qtdPontosTuristicos > qtdPontosTuristicos2) ? 1 : 0);
    printf("Densidade populacional: Carta %d venceu (%d)\n", (densidadePopulacional < densidadePopulacional2) ? 1 : 2, (densidadePopulacional < densidadePopulacional2) ? 1 : 0);
    printf("PIB per capita: Carta %d venceu (%d)\n", (pibPerCapita > pibPerCapita2) ? 1 : 2, (pibPerCapita > pibPerCapita2) ? 1 : 0);
    printf("Super poder: Carta %d venceu (%d)", (superPoder > superPoder2) ? 1 : 2, (superPoder > superPoder2) ? 1 : 0);

    return 0;
}