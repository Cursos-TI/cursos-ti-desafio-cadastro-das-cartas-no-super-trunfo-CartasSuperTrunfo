#include <stdio.h>
#include <locale.h>

int main() {
    // Definindo as variáveis para os atributos de uma cidade
    char codigo1[10], codigo2[10];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Definindo o idioma para português
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Cadastro das informações da primeira carta (Fortaleza)
    printf("Digite o código da cidade 1 (exemplo: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade 1: ");
    scanf(" %[^\n]", nomeCidade1);  // Lê até o final da linha, incluindo espaços

    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1 (em reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro das informações da segunda carta (Goiânia)
    printf("\nDigite o código da cidade 2 (exemplo: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2: ");
    scanf(" %[^\n]", nomeCidade2);  // Lê até o final da linha, incluindo espaços

    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2 (em reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);

    // Exibindo os dados da primeira carta (Fortaleza)
    printf("\nCadastro da Carta 1 (Fortaleza):\n");
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibindo os dados da segunda carta (Goiânia)
    printf("\nCadastro da Carta 2 (Goiânia):\n");
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
