// Desafio das Cartas Super Triunfo, código atualizado de acordo com o Tema 3: "Desenvolvendo a Lógica do Jogo"

#include <stdio.h>


int main(){

    //nivel novato - iniciando inserçao das variaveis de ambas cartas; cada carta possui sua variavel para evitar que o resultado do primeiro sobescreva o segundo
    char estado1, estado2, codigo1[20], codigo2[20], nome1[20], nome2[20];
    float area1, area2, pib1, pib2, pibpp1, pibpp2, densidade1, densidade2;
    float superpoder1, superpoder2; 
    int turisticos1, turisticos2;
    int vencedorH, vencedorA, vencedorP, vencedorT, vencedorD, vencedorPP, vencedorS; //nivel mestre - variaveis dos resultados da comparacao simples das cartas
    unsigned long int populacao1, populacao2;
    

    //nives novato - iniciando entrada e saida de dados; carta 01a
    printf("- Carta 01 -\n");
    printf("Represente seu Estado com uma letra de 'A' a 'H': ");
    scanf(" %c", &estado1); 

    printf("Represente seu Codigo com a letra de seu Estado e um numero de '01' a '04': ");
    scanf(" %s", codigo1); 

    printf("Represente o Nome de sua Cidade: ");
    scanf(" %s", nome1);

    printf("Represente o Numero de Habitantes de sua Cidade: ");
    scanf(" %ld", &populacao1);

    printf("Represente o valor da Area de sua Cidade: ");
    scanf(" %f", &area1);

    printf("Represente o PIB de sua Cidade: "); 
    scanf(" %f", &pib1);

    printf("Represente o Numero de Pontos Turisticos de sua Cidade: ");
    scanf(" %d", &turisticos1); 

    //nivel aventureiro - atribuicoes as variaveis anteriores para o calculo de pib per capita e densidade - carta 01
    pibpp1 = pib1 / populacao1;
    densidade1 = populacao1 / area1; 
    //nivel mestre - atribuicao a variavel superpoder1 para ter a soma dos numeros escolhidos pelo usuario (com o inverso da densidade) - carta 01
    superpoder1 = (float) (populacao1 + area1 + pib1 + turisticos1 + pibpp1) - densidade1;
     

    //nivel novato - iniciando processo de impressao dos dados; carta 01
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Numero de Habitantes: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpp1); 
    printf("Super Poder: %.2f\n", superpoder1); 


    //nivel novato - iniciando entrada e saida de dados; carta 02
    printf("\n- Carta 02 -\n");
    printf("Represente seu Estado com uma letra de 'A' a 'H': ");
    scanf(" %c", &estado2); 

    printf("Represente seu Codigo com a letra de seu Estado e um numero de '01' a '04': ");
    scanf(" %s", codigo2); 

    printf("Represente o Nome de sua Cidade: ");
    scanf(" %s", nome2);

    printf("Represente o Numero de Habitantes de sua Cidade: ");
    scanf(" %ld", &populacao2);

    printf("Represente o valor da Area de sua Cidade: ");
    scanf(" %f", &area2);

    printf("Represente o PIB de sua Cidade: "); 
    scanf(" %f", &pib2);

    printf("Represente o Numero de Pontos Turisticos de sua Cidade: ");
    scanf(" %d", &turisticos2); 

    //nivel aventureiro - atribuicoes as variaveis anteriores para o calculo de pib per capita e densidade - carta 02
    pibpp2 = pib2 / populacao2;
    densidade2 = populacao2 / area2; 
    //nivel mestre - atribuicao a variavel superpoder1 para ter a soma dos numeros escolhidos pelo usuario (com o inverso da densidade) - carta 02
    superpoder2 = (float) (populacao2 + area2 + pib2 + turisticos2 + pibpp2) - densidade2;

    //nivel novato - iniciando processo de impressao dos dados; carta 02
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Numero de Habitantes: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpp2); 
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n\n");

    //nivel novato do tema 3 - deletei a antiga comparacao para adicionar o codigo adequado - comparacao de apenas um atributo
    printf("Quem venceu? O maior PIB sera indicado como vencedor!\n");
    
    if (pib1 > pib2) 
    {
        printf("Carta 1 venceu!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }



    return 0;

}
