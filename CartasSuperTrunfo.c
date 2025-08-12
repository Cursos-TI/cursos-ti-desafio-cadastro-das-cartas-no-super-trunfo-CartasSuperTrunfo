#include <stdio.h>

    unsigned long int populacao1, populacao2;
    unsigned int ptTuristico1, ptTuristico2;
    long double densidadePopulacao1, densidadePopulacao2, percaptaPIB1, percaptaPIB2;
    float area1, pib1, area2, pib2;
    char pais1[50], pais2[50];
    long double superPoder1, superPoder2;

int main() {

    // CADASTRO DA PRIMEIRA CARTA

    printf("Cadastre sua Primeira carta! \n\n");

    // CIDADE CARTA 1

    printf("A PRIMEIRA CARTA terá o nome de qual País: ");
    scanf(" %[^\n]", pais1);
    printf("Nome %s para carta 1 registrado.\n\n", pais1);

    // POPULÇÃO CARTA 1

    printf("Agora informa de quanto é a POPULAÇÃO do País: ");
    scanf("%ld", &populacao1);
    printf("População de %ld registrada para %s.\n\n", populacao1, pais1);

    // ÁREA CARTA 1

    printf("Informe de quanto é a ÁREA em kM² do País: ");
    scanf("%f", &area1);
    printf("Área de %.2f km² registrada para %s. \n\n", area1, pais1);

    // PIB CARTA 1

    printf("Qual o PIB do País %s: ", pais1);
    scanf("%f", &pib1);
    printf("PIB de %.2f registrado para o País %s. \n\n", pib1, pais1);

    // PONTOS TURÍSTICOS CARTA 1

    printf("Por último informe quantos PONTOS TURÍSTICOS possue o País %s: ", pais1);
    scanf("%d", &ptTuristico1);
    printf("%d pontos Turísticos reistrados no País %s. \n\n", ptTuristico1, pais1);

    // FINALIZAÇÃO CARTA 1

    printf("Com isso concluimos nossa primeira carta. \nVamos fazer nossa segunda e última carta agora. \n\n");

    // AQUI AGORA JÁ COMEÇA O CADASTRO DA SEGUNDA CARTA

    // CIDADE CARTA 2

    printf("A SEGUNDA CARTA terá o nome de qual País: ");
    scanf(" %[^\n]", pais2);
    printf("Nome %s para carta 2 registrado.\n\n", pais2);

    // POPULÇÃO CARTA 2

    printf("Agora informa de quanto é a POPULAÇÃO do País: ");
    scanf("%ld", &populacao2);
    printf("População de %ld registrada para %s.\n\n", populacao2, pais2);

    // ÁREA CARTA 2

    printf("Informe de quanto é a ÁREA em kM² do País: ");
    scanf("%f", &area2);
    printf("Área de %.2f km² registrada para %s. \n\n", area2, pais2);

    // PIB CARTA 2

    printf("Qual o PIB do País %s: ", pais2);
    scanf("%f", &pib2);
    printf("PIB de %.2f registrado no País %s. \n\n", pib2, pais2);

    // PONTOS TURÍSTICOS CARTA 2

    printf("Por último informe quantos PONTOS TURÍSTICOS possue o País %s: ", pais2);
    //scanf("%d", &ptTuristico2);
    printf("%d pontos Turísticos reistrados no País %s. \n\n", ptTuristico2, pais2);

    printf("Com isso concluimos a SEGUNDA CARTA. Muito obrigado!\n\n");

    // RESUMO DAS CARTAS CRIADAS

    printf("Agora vejamos as cartas %s e %s criadas por vc.\n\n", pais1, pais2);

    // CARTA 1

    printf("CARTA 1 - %s.\n\n", pais1);
    printf("Tem um área de %.2f km²\n", area1);
    printf("Possue uma população de %ld\n", populacao1);
    printf("Com um número de %d pontos turísticos\n", ptTuristico1);
    printf("Faz um PIB de R$%f\n", pib1);

    // Calculo da DENSIDADE POPULACIONAL e PIB PER CAPTA da CARTA 1

    densidadePopulacao1 = (float) populacao1 / area1;
    percaptaPIB1 = (float) pib1 / populacao1;

    printf("Com isso a DENSIDADE POPULACIONAL é de %lf pessoas por km²\n", densidadePopulacao1);
    printf("E um PIB per capta de R$%lf \n\n", percaptaPIB1);

    // SUPER PODER da CARTA 1

    densidadePopulacao1 = 1 / densidadePopulacao1;
    superPoder1 = area1 + populacao1 + ptTuristico1 + pib1 + densidadePopulacao1 + percaptaPIB1;
    printf("O Super Poder dessa carta é de %lf.\n", superPoder1);

    // CARTA 2

    printf("CARTA 2 - %s.\n\n", pais2);
    printf("Tem um área de %.2f km²\n", area2);
    printf("Possue uma população de %ld\n", populacao2);
    printf("Com um número de %d pontos turísticos\n", ptTuristico2);
    printf("Faz um PIB de R$%f\n", pib2);

    // Calculo da DENSIDADE POPULACIONAL, PIB PER CAPTA e SUPER PODER da CARTA 2

    densidadePopulacao2 = (float) populacao2 / area2;
    percaptaPIB2 = (float) pib2 / populacao2;

    printf("Com isso a DENSIDADE POPULACIONAL é de %lf pessoas por km²\n", densidadePopulacao2);
    printf("E um PIB per capta de R$%lf \n\n", percaptaPIB2);
    
    // SUPER PODER da CARTA 2

    densidadePopulacao2 = 1 / densidadePopulacao2;
    superPoder2 = area2 + populacao2 + ptTuristico2 + pib2 + densidadePopulacao2 + percaptaPIB2;
    printf("O Super Poder dessa carta é de %lf.\n\n", superPoder2);

    // COMPARAÇÃO ENTRE CARTAS

    printf("A ÁREA TERRITORIAL do país %s é MAIOR que %s?\n", pais1, pais2);
    printf("%d\n\n", area1 > area2);

    printf("A POPULÇÃO do país %s é MAIOR que %s?\n", pais1, pais2);
    printf("%d\n\n", populacao1 > populacao2);

    printf("O número de PONTOS TURÍSTICOS do país %s é MAIOR que %s?\n", pais1, pais2);
    printf("%d\n\n", ptTuristico1 > ptTuristico2);

    printf("O PIB do país %s é maior que %s?\n", pais1, pais2);
    printf("%d\n\n", pib1 > pib2);

    printf("O PIB PER CAPTA do país %s é MAIOR que %s?\n", pais1, pais2);
    printf("%d\n\n", percaptaPIB1 > percaptaPIB2);

    printf("A DENSIDADE POPULACIONAL do país %s é MAIOR que %s?\n", pais1, pais2);
    printf("%d\n\n", densidadePopulacao1 > densidadePopulacao2);

    printf("Se o resultado for 1 a Carta 1 - %s vence, mas se for 0 a Carta 2 - %s vence)\n\n\n", pais1, pais2);


    return 0;
}
