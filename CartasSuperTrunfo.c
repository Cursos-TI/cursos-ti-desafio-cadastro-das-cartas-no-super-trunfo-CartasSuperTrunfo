#include   <stdio.h>

int main(){ //nesta linha, cada função é declarada com um tipo de retorno, que é o tipo de dado que a função retorna. No caso, a função main retorna um inteiro.
    char estado1[100], estado2[100];
    char nomedacidade1[100], nomedacidade2[100];
    char codigo1[100], codigo2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

   //entrada de dados da carta 1
   //aqui se usa o printf para imprimir uma mensagem na tela e o scanf para receber um valor digitado pelo usuário, o mesmo vale para as demais entradas de dados
    printf("\nCarta 1\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado1);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade1);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    //entrada de dados da carta 2
    printf("\nCarta 2\n");
    printf("Digite o nome do estado: ");
    scanf("%s", estado2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade2);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    //impressão dos dados
    //aqui se usa o printf para imprimir os dados que foram digitados pelo usuário anteriormente e retorná-los na tela com a mensagem que foi escrita
    printf("\nCarta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf("Código da cidade: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf("Código da cidade: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    return 0;
    



}
