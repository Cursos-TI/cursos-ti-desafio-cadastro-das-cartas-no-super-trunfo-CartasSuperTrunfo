#include <stdio.h>

int main() {
    int populacaoA, populacaoB, pontosTuristicosA, pontosTuristicosB;
    float areaA, areaB, densidadeA, densidadeB;
    double pibA, pibB;
    int escolha;
    
    printf("\n-------- SUPER TRUNFO --------\n");
    
    // Cadastro da Carta A
    printf("\nInsira a quantidade populacional do país A: ");
    scanf("%d", &populacaoA);
    printf("Insira a Área do país A (em km²): ");
    scanf("%f", &areaA);
    printf("Insira o PIB do país A (em trilhões): ");
    scanf("%lf", &pibA);
    printf("Insira a quantidade de pontos turísticos do país A: ");
    scanf("%d", &pontosTuristicosA);
    
    densidadeA = populacaoA / areaA;
    
    // Cadastro da Carta B
    printf("\n--------  Informações da Carta B  --------\n");
    printf("\nInsira a quantidade populacional do país B: ");
    scanf("%d", &populacaoB);
    printf("Insira a Área do país B (em km²): ");
    scanf("%f", &areaB);
    printf("Insira o PIB do país B (em trilhões): ");
    scanf("%lf", &pibB);
    printf("Insira a quantidade de pontos turísticos do país B: ");
    scanf("%d", &pontosTuristicosB);
    
    densidadeB = populacaoB / areaB;
    
    // Menu de seleção de atributo
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Populacional\n5 - Número de Pontos Turísticos\n");
    scanf("%d", &escolha);
    
    printf("\n-------- Resultado da Comparação --------\n");
    
    if (escolha == 1) { // População
        printf("Atributo: População\n");
        printf("País A: %d habitantes\n", populacaoA);
        printf("País B: %d habitantes\n", populacaoB);
        if (populacaoA > populacaoB)
            printf("Vencedor: País A\n");
        else if (populacaoA < populacaoB)
            printf("Vencedor: País B\n");
        else
            printf("Empate!\n");
    } else if (escolha == 2) { // Área
        printf("Atributo: Área\n");
        printf("País A: %.2f km²\n", areaA);
        printf("País B: %.2f km²\n", areaB);
        if (areaA > areaB)
            printf("Vencedor: País A\n");
        else if (areaA < areaB)
            printf("Vencedor: País B\n");
        else
            printf("Empate!\n");
    } else if (escolha == 3) { // PIB
        printf("Atributo: PIB\n");
        printf("País A: %.2lf trilhões\n", pibA);
        printf("País B: %.2lf trilhões\n", pibB);
        if (pibA > pibB)
            printf("Vencedor: País A\n");
        else if (pibA < pibB)
            printf("Vencedor: País B\n");
        else
            printf("Empate!\n");
    } else if (escolha == 4) { // Densidade Populacional (menor valor vence)
        printf("Atributo: Densidade Populacional\n");
        printf("País A: %.2f hab/km²\n", densidadeA);
        printf("País B: %.2f hab/km²\n", densidadeB);
        if (densidadeA < densidadeB)
            printf("Vencedor: País A\n");
        else if (densidadeA > densidadeB)
            printf("Vencedor: País B\n");
        else
            printf("Empate!\n");
    } else if (escolha == 5) { // Pontos Turísticos
        printf("Atributo: Pontos Turísticos\n");
        printf("País A: %d locais\n", pontosTuristicosA);
        printf("País B: %d locais\n", pontosTuristicosB);
        if (pontosTuristicosA > pontosTuristicosB)
            printf("Vencedor: País A\n");
        else if (pontosTuristicosA < pontosTuristicosB)
            printf("Vencedor: País B\n");
        else
            printf("Empate!\n");
    } else {
        printf("Opção inválida. Por favor, selecione um número de 1 a 5.\n");
    }
    
    return 0;
}
