#include <stdio.h>
float calcularDensidade(int populacao, float area_km2) {
    return (float)populacao / area_km2;                  // hab/km²
}
double calcularPibPerCapita(float pib_bilhoes, int populacao) {
    return (double)pib_bilhoes * 1e9 / (double)populacao; // R$ por habitante
}
int main(void) {

    //-------- Dados da Carta 1 --------//

    char Estado1;                // 1 letra (A–H)
    char Codigo1[4];             // ex: A01
    char nomeCidade1[50];
    int  populacao1;
    float area1;
    float pib1;
    int  pontoTuristicos1;
   
    //-------- Dados da Carta 2 --------//

    char Estado2;                // 1 letra (A–H)
    char Codigo2[4];
    char nomeCidade2[50];
    int  populacao2;
    float area2;
    float pib2;
    int  pontoTuristico2;
       
    // ===== Leitura da Carta 1 ===== //

    printf("Cadastro da Carta 1:\n");
// Estado: lê como string e guarda só a 1ª letra (evita colar com o próximo scanf)
    char ufBuf1[3];
    printf("Estado (A-H): ");
    scanf(" %2s", ufBuf1);
    Estado1 = ufBuf1[0];
   
    printf("Codigo da Carta (EX:A01):");
    scanf(" %3s", Codigo1);
    getchar(); // consome o ENTER

    printf("Nome da Cidade:");
    scanf(" %49[^\n]", nomeCidade1);
    getchar(); // consome o ENTER

    printf("Populacao:");
    scanf(" %d", &populacao1);

    printf("Area (em km2) ");
    scanf(" %f", &area1);

    printf("PIB (em bilhoes de reais):");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontoTuristicos1);

    //===== Leitura da Carta 2 ===== //
    printf("\nCadastro da Carta 2:\n");
    char ufBuf2[3];
    printf("Estado (A-H): ");
    scanf(" %2s", ufBuf2);
    Estado2 = ufBuf2[0];

    printf("Codigo da Carta (EX:A01):");
    scanf(" %3s", Codigo2);
    getchar();

    printf("Nome da Cidade:");
    scanf(" %49[^\n]", nomeCidade2);
    getchar();

    printf("Populacao:");
    scanf(" %d", &populacao2);

    printf("Area (em km2) ");
    scanf(" %f", &area2);

    printf("PIB (em bilhoes de reais):");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontoTuristico2);

    // ===== Impressão manual + Novas Funçoes ===== //
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Nome Da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontoTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", calcularDensidade(populacao1, area1));
    printf("PIB per Capita: %.2f reais\n", calcularPibPerCapita(pib1, populacao1));

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo: %s\n", Codigo2);
    printf("Nome Da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km2\n", calcularDensidade(populacao2, area2));
    printf("PIB per Capita: %.2f reais\n", calcularPibPerCapita(pib2, populacao2));

    return 0;
}
