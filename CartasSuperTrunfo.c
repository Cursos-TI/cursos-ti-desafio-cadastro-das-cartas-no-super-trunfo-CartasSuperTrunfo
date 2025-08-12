#include <stdio.h>

    int main(){
        printf("Desafio Super-Trunfo!\n");
        char estado1[20];        
        char codigodacarta1[20];        
        char nomedacidade1[27];        
        unsigned long int populacao1;        
        float area1;        
        float pib1;        
        int numerodepontoturistico1;
        float densidadepopulacional1;
        float pibpercapita1;
        float superpoder1; 


        printf("Carta 01 \n");

        printf("Digite o Estado: \n");
        scanf("%s", estado1);

        printf("Digite o Código da Carta: \n");
        scanf("%s", codigodacarta1);

        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nomedacidade1);

        printf("Digite o Número de Habitantes: \n");
        scanf("%lu", &populacao1);

        printf("Digite a Área da Cidade: \n");
        scanf("%f", &area1);

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &pib1);

        printf("Digie o Número de Pontos Turísticos \n");
        scanf("%d", &numerodepontoturistico1);

        densidadepopulacional1 = (float) populacao1 / area1;
        pibpercapita1 = (float) populacao1 / pib1;
        superpoder1 = populacao1 + pib1 + densidadepopulacional1 + pibpercapita1 + area1 + numerodepontoturistico1;


        printf("Estado é: %s\n", estado1);
        printf ("Código da Carta é: %s\n", codigodacarta1);
        printf("Digite o Nome da Cidade: %s\n", nomedacidade1);
        printf("Número de Habitantes é: %d\n", populacao1);
        printf("Área da Cidade é: %f\n", area1);
        printf("PIB da Cidade é: %f\n", pib1);
        printf("Número de Pontos Turísticos é: %d\n", numerodepontoturistico1);
        printf ("Número da Densidade Populacional é: %f\n", densidadepopulacional1);
        printf("Número do PIB per Capita é: %f\n", pibpercapita1);
        printf("O Super Poder tem o valor: %lu\n", superpoder1);


        char carta2;
        char estado2[50];        
        char codigodacarta2[30];        
        char nomedacidade2[20];        
        unsigned long int populacao2;        
        float area2;        
        float pib2;        
        int numerodepontoturistico2;
        float densidadepopulacional2;
        float pibpercapita2;
        float superpoder2;

        printf("Carta 02 \n");

        printf("Digite o Estado: \n");
        scanf("%s", estado2);
        
        printf("Digite o Código da Carta: \n");
        scanf("%s", codigodacarta2);
        
        printf("Digite o Nome da Cidade: \n");
        scanf("%s", nomedacidade2);

        printf("Digite o Número de Habitantes: \n");
        scanf("%lu", &populacao2);

        printf("Digite a Área da Cidade: \n");
        scanf("%f", &area2);

        printf("Digite o PIB da Cidade: \n");
        scanf("%f", &pib2);

        printf("Digie o Número de Pontos Turísticos: \n");
        scanf("%d", &numerodepontoturistico2);

        densidadepopulacional2 = (float) populacao2 / area2;
        pibpercapita2 = (float) populacao2 / pib2;
        superpoder2 = populacao2 + pib2 + densidadepopulacional2 + pibpercapita2 + area2 + numerodepontoturistico2;


        printf("O Estado é: %s\n", estado2);
        printf ("Código da Carta é: %s\n", codigodacarta2);
        printf("Nome da Cidade é: %s\n", nomedacidade2); 
        printf("Número de Habitantes é: %lu\n", populacao2);
        printf("Área da Cidade é: %f\n", area2);
        printf("PIB da Cidade é: %f\n", pib2);
        printf("Número de Pontos Turísticos é: %d\n", numerodepontoturistico2);
        printf ("Número da Densidade Populacional é: %f\n", densidadepopulacional2);
        printf("Número do PIB per Capita é: %f\n", pibpercapita2);
        printf("O Super Poder tem o valor: %lu\n", superpoder2);

        printf("O valor de Número de Habitantes da Carta 01 é maior que o valor da Carta 02 ? %d \n", populacao1 > populacao2);
        printf("O valor da Área da Carta 01 é maior que o valor da Carta 02 ? %d \n", area1 > area2);
        printf("O valor do PIB da Carta 01 é maior que o valor da Carta 02 ? %d \n", pib1 > pib2);
        printf("O valor dos Pontos Turísticos da Carta 01 é maior que o valor da Carta 02 ? %d\n", numerodepontoturistico1 > numerodepontoturistico2);
        printf("O valor do PIB da Carta 01 é maior que o valor da Carta 02 ? %d \n", pib1 > pib2);
        printf("O valor do Densiadade Populacional da Carta 01 é maior que o valor da Carta 02 ? %d\n", densidadepopulacional1 < densidadepopulacional2);
        printf("O valor do PIB per Capita da Carta 01 é maior que o valor da Carta 02 ? %d \n", pibpercapita1 > pibpercapita2);
        printf("O valor do Super Poder da Carta 01 é maior que o valor da Carta 02 ? %d \n", superpoder1 > superpoder2);

        /*Foi utilizado as variaveis do tipo int, float e char, que int: declara uma variável do tipo inteiro, 
        float: uma variável de ponto flutuante e char: declara uma variável de caractere.
        E as funçoes de entrada e saída de dados como Printf e scanf que printf: que é usada para exibir informações na tela, 
        e scanf: usada para ler dados fornecidos pelo usuário e armazená-los. atualização do nível aventureiro: usando os operadores aritmetricos para calcular o pib per capita
        e a densidade populacional. Atualização do nível mestre: utilizou operadores relacionais para comparação das duas cartas e 
        incerindo unsigned long int para variavel população e a inclusão da variavel Super Poder que soma todos os valores.
        */
        return 0;
    }


