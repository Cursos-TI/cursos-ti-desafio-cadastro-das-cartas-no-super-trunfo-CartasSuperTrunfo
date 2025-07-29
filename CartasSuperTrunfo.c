#include <stdio.h>
#include <string.h>

typedef struct
{
    char state;
    char code[4]; // Código da cidade (ex: A01, B02)
    char name[30];
    int population;      // Número de habitantes
    float areakm2;       // Área total da cidade em km²
    float PIB;           // Produto interno bruto da cidade
    int touristicPoints; // Pontos turísticos famosos
} Card;

// Função para validar se o código da cidade está no formato correto
int isValidCityCode(char state, const char *code)
{
    if (code[0] != state)
        return 0;
    if (!isdigit(code[1]) || !isdigit(code[2]))
        return 0;
    int number = (code[1] - '0') * 10 + (code[2] - '0');
    return number >= 1 && number <= 4;
}

void registerCard(Card *card)
{
    do
    {
        printf("Digite a letra do estado (A-H): ");
        scanf(" %c", &card->state);
        card->state = toupper(card->state);
    } while (card->state < 'A' || card->state > 'H');

    do
    {
        printf("Digite o código da cidade (ex: A01, B02): ");
        scanf("%s", card->code);
    } while (!isValidCityCode(card->state, card->code));

    getchar();

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", card->name);

    printf("Digite a população da cidade: ");
    scanf("%d", &card->population);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &card->areakm2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &card->PIB);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &card->touristicPoints);
}

void showCard(const Card *card)
{
    printf("\n--- Informações da Cidade ---\n");
    printf("Estado: %c\n", card->state);
    printf("Código: %s\n", card->code);
    printf("Nome: %s\n", card->name);
    printf("População: %d habitantes\n", card->population);
    printf("Área: %.2f km²\n", card->areakm2);
    printf("PIB: R$ %.2f bilhões\n", card->PIB);
    printf("Pontos turísticos: %d\n", card->touristicPoints);
}

float calculatePopulationalDensity(const Card *card)
{
    if (card->areakm2 == 0)
        return 0;
    return card->population / card->areakm2;
}

float calculatePib(const Card *card)
{
    if (card->population == 0)
        return 0;
    return card->PIB / card->population;
}

void compareCards(const Card *card1, const Card *card2)
{
    printf("\n--- Comparação entre cidades ---\n");

    if (card1->population > card2->population)
        printf("%s tem mais população que %s.\n", card1->name, card2->name);
    else if (card1->population < card2->population)
        printf("%s tem mais população que %s.\n", card2->name, card1->name);
    else
        printf("As cidades têm a mesma população.\n");

    if (card1->PIB > card2->PIB)
        printf("%s tem um PIB maior que %s.\n", card1->name, card2->name);
    else if (card1->PIB < card2->PIB)
        printf("%s tem um PIB maior que %s.\n", card2->name, card1->name);
    else
        printf("As cidades têm o mesmo PIB.\n");

    if (card1->touristicPoints > card2->touristicPoints)
        printf("%s tem mais pontos turísticos que %s.\n", card1->name, card2->name);
    else if (card1->touristicPoints < card2->touristicPoints)
        printf("%s tem mais pontos turísticos que %s.\n", card2->name, card1->name);
    else
        printf("As cidades têm a mesma quantidade de pontos turísticos.\n");
}

void initSuperTrunfo()
{
    Card city1, city2;

    printf("Registro da primeira cidade:\n");
    registerCard(&city1);
    showCard(&city1);
    printf("Densidade populacional: %.2f hab/km²\n", calculatePopulationalDensity(&city1));
    printf("PIB per capita: R$ %.2f\n", calculatePib(&city1));

    printf("\nRegistro da segunda cidade:\n");
    registerCard(&city2);
    showCard(&city2);
    printf("Densidade populacional: %.2f hab/km²\n", calculatePopulationalDensity(&city2));
    printf("PIB per capita: R$ %.2f\n", calculatePib(&city2));

    compareCards(&city1, &city2);
}

int main()
{
    char running[10] = "sim";

    while (strcmp(running, "sim") == 0)
    {
        initSuperTrunfo();

        printf("\n\nDeseja continuar? (sim/nao) \n");
        scanf("%9s", running);
    }

    return 0;
}
