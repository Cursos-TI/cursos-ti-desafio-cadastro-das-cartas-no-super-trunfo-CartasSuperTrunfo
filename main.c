#include <stdio.h>

int main() {
    // Declarando variáveis
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char ncidade1[50], ncidade2[50]; 
    int populacao1 = 1000000, populacao2 = 1000000;
    float areakm1 = 1000.0, areakm2 = 1000.0;
    float pib1 = 1000000000.0, pib2 = 1000000000.0;
    int pontosturismo1 = 100, pontosturismo2 = 100;

    // Lendo dados do usuário , copiei da aula >;
    printf("Digite uma letra de A a H para definir o 1º estado: ");
    scanf(" %c", &estado1);

    printf("Digite uma letra de A a H para definir o 2º estado: ");
    scanf(" %c", &estado2);

    printf("Digite o código da 1ª carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o código da 2ª carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da 1ª cidade: ");
    fgets(ncidade1, sizeof(ncidade1), stdin);

    printf("Digite o nome da 2ª cidade: ");
    fgets(ncidade2, sizeof(ncidade2), stdin);

    printf("Digite a população da 1ª cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a população da 2ª cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²) da 1ª cidade: ");
    scanf("%f", &areakm1);

    printf("Digite a área (em km²) da 2ª cidade: ");
    scanf("%f", &areakm2);

    printf("Digite o PIB da 1ª cidade: ");
    scanf("%f", &pib1);

    printf("Digite o PIB da 2ª cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da 1ª cidade: ");
    scanf("%d", &pontosturismo1);

    printf("Digite o número de pontos turísticos da 2ª cidade: ");
    scanf("%d", &pontosturismo2);

    // Mostrando os dados inseridos
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", ncidade1); // usar fgets para ler strings com espaços
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areakm1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturismo1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", ncidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturismo2);

    return 0;
}
