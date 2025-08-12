#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    char estado[50];
    char carta[50];
    char cidade[50];
    int populacao, pontosturistico;
    float area;
    float PIB;
    float Densidadepopulacional;
    float Pibpercapita;
    float SuperPodercarta01, SuperPodercarta02;
    int resultadoCarta01, resultadoCarta02;
    int resultado;

    printf ("CARTA 01 \n");

    printf ("Qual o estado? \n");
    scanf ("%s", &estado);

    printf ("Qual o codigo da carta? \n");
    scanf ("%s", &carta);

    printf ("Qual a cidade? \n");
    scanf ("%s", &cidade);

    printf ("Qual a população? \n");
    scanf ("%d", &populacao);

    printf ("Qual a area em KM²? \n");
    scanf ("%f", &area);

    printf ("Qual o PIB? \n");
    scanf ("%f", &PIB);

    printf ("Qual o numero de pontos turistico? \n");
    scanf ("%d", &pontosturistico);

    Densidadepopulacional = populacao / area;
    
    Pibpercapita = PIB / populacao;

    SuperPodercarta01 = populacao + area + PIB + pontosturistico + Pibpercapita + (1/Densidadepopulacional);

    printf ("CARTA 01 \n");
    printf ("estado: %S \n", estado);
    printf ("Codigo da carta: %s \n", carta);
    printf ("cidade: %s \n", cidade);
    printf ("populacao: %d \n", populacao);
    printf ("Area em KM²: %f \n", area);
    printf ("PIB: %f \n", PIB);
    printf ("pontos turisticos: %d \n", pontosturistico);
    printf ("Densidade populacional é: %.2f \n", Densidadepopulacional);
    printf ("Pib per capita é: %.2f \n", Pibpercapita);
    printf ("Super poder = %f\n", SuperPodercarta01);

    resultadoCarta01 = SuperPodercarta01


    printf ("__________________________ \n");


    printf ("CARTA 02 \n");

    printf ("Qual o estado? \n");
    scanf ("%s", &estado);

    printf ("Qual o codigo da carta? \n");
    scanf ("%s", &carta);

    printf ("Qual a cidade? \n");
    scanf ("%s", &cidade);

    printf ("Qual a população? \n");
    scanf ("%d", &populacao);

    printf ("Qual a area em KM²? \n");
    scanf ("%f", &area);

    printf ("Qual o PIB? \n");
    scanf ("%f", &PIB);

    printf ("Qual o numero de pontos turistico? \n");
    scanf ("%d", &pontosturistico);

    Densidadepopulacional = populacao / area;
    
    Pibpercapita = PIB / populacao;

    SuperPodercarta02 = populacao + area + PIB + pontosturistico + Pibpercapita + (1/Densidadepopulacional);


    printf ("CARTA 02 \n");
    printf ("estado: %S \n", estado);
    printf ("Codigo da carta: %s \n", carta);
    printf ("cidade: %s \n", cidade);
    printf ("populacao: %d \n", populacao);
    printf ("Area em KM²: %f \n", area);
    printf ("PIB: %f \n", PIB);
    printf ("pontos turisticos: %d \n", pontosturistico);
    printf ("Densidade populacional é: %.2f \n", Densidadepopulacional);
    printf ("Pib per capita é: %.2f \n", Pibpercapita);
    printf ("Super poder = %f\n", SuperPodercarta02);
    
    resultadoCarta02 = SuperPodercarta02

    printf("O resultado carta 01 é maior que o resultado carta 02?\n", resultadoCarta01 > resultadoCarta02);

  











    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
